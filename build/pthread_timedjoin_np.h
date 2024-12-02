#include <pthread.h>
#include <errno.h>

#define SIG_CANCEL_SIGNAL SIGUSR1

typedef struct
{
    int joined;
    pthread_t td;
    pthread_mutex_t mtx;
    pthread_cond_t cond;
    void **res;
} thread_vxi11_wrapper_args_t;

static void *_pthread_waiter(void *ap)
{
    thread_vxi11_wrapper_args_t *args = ap;
    pthread_join(args->td, args->res);
    pthread_mutex_lock(&args->mtx);
    args->joined = 1;
    pthread_mutex_unlock(&args->mtx);
    pthread_cond_signal(&args->cond);
    return 0;
}

static int pthread_timedjoin_np(pthread_t td, void **res, struct timespec *ts)
{
    pthread_t tmp;
    int ret;
    thread_vxi11_wrapper_args_t args = { .td = td, .res = res };

    pthread_mutex_init(&args.mtx, 0);
    pthread_cond_init(&args.cond, 0);
    pthread_mutex_lock(&args.mtx);

    ret = pthread_create(&tmp, 0, _pthread_waiter, &args);
    if (ret == 0) {
      do {
        ret = pthread_cond_timedwait(&args.cond, &args.mtx, ts);
      } while (!args.joined && ret != ETIMEDOUT);
    }

    pthread_kill(tmp, SIG_CANCEL_SIGNAL);//pthread_cancel(tmp);
    pthread_join(tmp, 0);

    pthread_cond_destroy(&args.cond);
    pthread_mutex_destroy(&args.mtx);

    return args.joined ? 0 : ret;
}
