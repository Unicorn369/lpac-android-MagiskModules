#ifndef LPAC_VERSION_H_
#define LPAC_VERSION_H_
#if defined(__arm__)
    #define LPAC_VERSION "v2.2.1-android-arm"
#elif defined(__aarch64__)
    #define LPAC_VERSION "v2.2.1-android-arm64"
#elif defined(__i386__)
    #define LPAC_VERSION "v2.2.1-android-x86"
#elif defined(__x86_64__)
    #define LPAC_VERSION "v2.2.1-android-x86_64"
#else
    #define LPAC_VERSION "v2.2.1"
#endif
#endif  /* LPAC_VERSION_H_ */
