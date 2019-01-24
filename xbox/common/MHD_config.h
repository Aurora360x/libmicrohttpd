/* MHD_config.h for W32 */
/* Created manually. */

/* *** Basic OS/compiler information *** */

#define HTTPD_MAIN_THREADNAME	"MHD-single"
#define HTTPD_WORKER_THREADNAME	"MHD-worker"

/* This is a Windows system */
#define WINDOWS 0 /*changed*/

/* This is a Xbox system */
#define XBOX 1 /*changed*/
#if defined(XBOX) && defined(_XBOX) && defined _X360_SYSDLL
 /* This is a Xbox system being run as a system dll */
 #define X360_SYSTEMDLL_SUPPORT 1
#endif

/* Define if MS VC compiler is used */
#define MSVC 1

/* Define to type which will be used as boolean type. */
#if _MSC_VER+0 >= 1800
#define _MHD_bool _Bool
#else  /* before VS 2013 */
#define _MHD_bool int
#endif /* before VS 2013 */

/* Define to 1 if your C compiler supports inline functions. */
#define INLINE_FUNC 1

/* Define to prefix which will be used with MHD inline functions. */
#define _MHD_inline static __forceinline


/* *** MHD configuration *** */
/* Undef to disable feature */
//#define HTTPS_SUPPORT 1

/* Enable basic Auth support */
#define BAUTH_SUPPORT 1

/* Enable digest Auth support */
#define DAUTH_SUPPORT 1

/* Enable postprocessor.c */
#define HAVE_POSTPROCESSOR 1

/* Enable error messages */
#if defined(_XBOX) && defined(_DEBUG)
  #define HAVE_MESSAGES 1
#endif


/* *** OS features *** */
/* Define to enable listen shutdown (removes need to for ITC socketpair) */
#define HAVE_LISTEN_SHUTDOWN 1

/* Define to use socketpair for inter-thread communication */
#define _MHD_ITC_SOCKETPAIR 1

/* define to use W32 threads */
#define MHD_USE_W32_THREADS 1

#ifndef _WIN32_WINNT
/* MHD supports Windows XP and later W32 systems*/
#define _WIN32_WINNT 0x0501
#endif /* _WIN32_WINNT */

/* winsock poll is available only on Vista and later */
#if _WIN32_WINNT >= 0x0600
#define HAVE_POLL 1
#endif /* _WIN32_WINNT >= 0x0600 */

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 0 /*chnaged*/

/* Define to 1 if you have the <xkelib\syssock.h> header file. */
#define HAVE_XKE_SYSSOCK_H 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#define HAVE_WS2TCPIP_H 1 /*changed*/

/* Define to 1 if you have the `_lseeki64' function. */
//#define HAVE___LSEEKI64 0

/* Define to 1 if you have the `gmtime_s' function in W32 form. */
#define HAVE_W32_GMTIME_S 1

#if _MSC_VER >= 1900 /* snprintf() supported natively since VS2015 */
/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1
#endif

#if _MSC_VER >= 1800
/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1
#endif


/* *** Headers information *** */
/* Not really important as not used by code currently */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 0 /*chaged*/

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1


/* *** Other useful staff *** */

#define _GNU_SOURCE  0 /*changed*/

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1


/* End of MHD_config.h */
