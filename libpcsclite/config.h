/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Name of package */
#define PACKAGE "pcsc-lite"

/* PC/SC target architecture */
#define PCSC_ARCH "Android"

#define OPENCT_FILE "/var/run/openct/status"

#define PROFILE_FILE "/tmp/pcsc_profile"

/* directory containing IPC files */
#define USE_IPCDIR "/data/tmp/run"
//#define USE_IPCDIR "/cache/pcsc/run"

/* Version number of package */
#define VERSION "2.0.0"

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
