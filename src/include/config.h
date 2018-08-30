/* src/include/config.h.  Generated from config.h.in by configure.  */
/* src/include/config.h.in.  Generated from configure.ac by autoheader.  */

/* Buildtype, indicates official builds and nightly builds */
/* #undef BUILDTYPE */

/* Define ENABLE_BINRELOC on systems where the executable location can be
   obtained using /proc/self/maps */
/* #undef ENABLE_BINRELOC */

/* Set to 1 to add support for automated update checks */
#define FZ_AUTOUPDATECHECK 1

/* Set to 1 to enable user initiated update checks */
#define FZ_MANUALUPDATECHECK 1

/* Set to 1 to use ciphers defined in system policy. */
/* #undef FZ_USE_GNUTLS_SYSTEM_CIPHERS */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* define if the compiler supports basic C++14 syntax */
/* #undef HAVE_CXX14 */

/* Define to 1 if you have the declaration of `CLOCK_MONOTONIC', and to 0 if
   you don't. */
#define HAVE_DECL_CLOCK_MONOTONIC 1

/* Define to 1 if you have the declaration of `pthread_condattr_setclock', and
   to 0 if you don't. */
#define HAVE_DECL_PTHREAD_CONDATTR_SETCLOCK 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `getaddrinfo' function. */
/* #undef HAVE_GETADDRINFO */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* gmtime_s can be used */
#define HAVE_GMTIME_S 1

/* Headers delare ICopyHookW */
#define HAVE_ICOPYHOOKW 1

/* Define to 1 if you have the `in6addr_any' function. */
/* #undef HAVE_IN6ADDR_ANY */

/* Define to 1 if you have the `in6addr_loopback' function. */
/* #undef HAVE_IN6ADDR_LOOPBACK */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if your system has the `pugixml' library (-lpugixml). */
/* #undef HAVE_LIBPUGIXML */

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* localtime_s can be used */
#define HAVE_LOCALTIME_S 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if thread_local isn't supported */
/* #undef HAVE_NO_THREAD_LOCAL */

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `ptsname' function. */
/* #undef HAVE_PTSNAME */

/* Define to 1 if putenv function is available. */
#define HAVE_PUTENV 1

/* Define to 1 if setenv function is available. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setresuid' function. */
/* #undef HAVE_SETRESUID */

/* Define if SO_PEERCRED works in the Linux fashion. */
/* #undef HAVE_SO_PEERCRED */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strsignal' function. */
/* #undef HAVE_STRSIGNAL */

/* Define if there is a member named d_type in the struct describing
   directory headers. */
/* #undef HAVE_STRUCT_DIRENT_D_TYPE */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `timegm' function. */
/* #undef HAVE_TIMEGM */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `updwtmpx' function. */
/* #undef HAVE_UPDWTMPX */

/* Define to 1 if you have the <utmpx.h> header file. */
/* #undef HAVE_UTMPX_H */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "filezilla"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "tim.kosse@filezilla-project.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "FileZilla"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "FileZilla 3.20.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "filezilla"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://filezilla-project.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.20.1"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Build system under which the program was compiled on. */
#define USED_BUILD "x86_64-w64-mingw32"

/* Define to name and version of used compiler */
#define USED_COMPILER "gcc.exe (Rev1, Built by MSYS2 project) 6.1.0"

/* Define to the used CXXFLAGS to compile this package. */
#define USED_CXXFLAGS "-g -O2 -Wall -g"

/* Host system under which the program will run. */
#define USED_HOST "x86_64-w64-mingw32"

/* Version number of package */
#define VERSION "3.20.1"

/* Set to 2 to if libdbus >= 1.2 is available, set to 1 if an older version is
   available. */
/* #undef WITH_LIBDBUS */
