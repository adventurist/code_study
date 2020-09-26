/* Code generated from eC source file: colorSpheres.ec */
#if defined(_WIN32)
#define __runtimePlatform 1
#elif defined(__APPLE__)
#define __runtimePlatform 3
#else
#define __runtimePlatform 2
#endif
#if defined(__GNUC__)
typedef long long int64;
typedef unsigned long long uint64;
#ifndef _WIN32
#define __declspec(x)
#endif
#elif defined(__TINYC__)
#include <stdarg.h>
#define __builtin_va_list va_list
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define __declspec(x) __attribute__((x))
#else
#define __declspec(x)
#endif
typedef long long int64;
typedef unsigned long long uint64;
#else
typedef __int64 int64;
typedef unsigned __int64 uint64;
#endif
#ifdef __BIG_ENDIAN__
#define __ENDIAN_PAD(x) (8 - (x))
#else
#define __ENDIAN_PAD(x) 0
#endif
#if defined(_WIN32)
#   if defined(__GNUC__) || defined(__TINYC__)
#      define ecere_stdcall __attribute__((__stdcall__))
#      define ecere_gcc_struct __attribute__((gcc_struct))
#   else
#      define ecere_stdcall __stdcall
#      define ecere_gcc_struct
#   endif
#else
#   define ecere_stdcall
#   define ecere_gcc_struct
#endif

#line 31 "/usr/include/bits/types.h"
typedef unsigned char __u_char;

#line 55 "obj/debug.linux/colorSpheres.c"


#line 32 "/usr/include/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/colorSpheres.c"


#line 33 "/usr/include/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/colorSpheres.c"


#line 34 "/usr/include/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/colorSpheres.c"


#line 37 "/usr/include/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/colorSpheres.c"


#line 38 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/colorSpheres.c"


#line 39 "/usr/include/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/colorSpheres.c"


#line 40 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/colorSpheres.c"


#line 41 "/usr/include/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/colorSpheres.c"


#line 42 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/colorSpheres.c"


#line 44 "/usr/include/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/colorSpheres.c"


#line 45 "/usr/include/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/colorSpheres.c"


#line 52 "/usr/include/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/colorSpheres.c"


#line 53 "/usr/include/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/colorSpheres.c"


#line 54 "/usr/include/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/colorSpheres.c"


#line 55 "/usr/include/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/colorSpheres.c"


#line 56 "/usr/include/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/colorSpheres.c"


#line 57 "/usr/include/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/colorSpheres.c"


#line 58 "/usr/include/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/colorSpheres.c"


#line 59 "/usr/include/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/colorSpheres.c"


#line 63 "/usr/include/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/colorSpheres.c"


#line 64 "/usr/include/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/colorSpheres.c"


#line 72 "/usr/include/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/colorSpheres.c"


#line 73 "/usr/include/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/colorSpheres.c"


#line 145 "/usr/include/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/colorSpheres.c"


#line 146 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/colorSpheres.c"


#line 147 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/colorSpheres.c"


#line 148 "/usr/include/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/colorSpheres.c"


#line 149 "/usr/include/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/colorSpheres.c"


#line 150 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/colorSpheres.c"


#line 151 "/usr/include/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/colorSpheres.c"


#line 152 "/usr/include/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/colorSpheres.c"


#line 153 "/usr/include/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/colorSpheres.c"


#line 154 "/usr/include/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/colorSpheres.c"


#line 155 "/usr/include/bits/types.h"
typedef struct
{

#line 155 "/usr/include/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/colorSpheres.c"


#line 156 "/usr/include/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/colorSpheres.c"


#line 157 "/usr/include/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/colorSpheres.c"


#line 158 "/usr/include/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/colorSpheres.c"


#line 159 "/usr/include/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/colorSpheres.c"


#line 160 "/usr/include/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/colorSpheres.c"


#line 161 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/colorSpheres.c"


#line 162 "/usr/include/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/colorSpheres.c"


#line 164 "/usr/include/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/colorSpheres.c"


#line 165 "/usr/include/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/colorSpheres.c"


#line 168 "/usr/include/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/colorSpheres.c"


#line 171 "/usr/include/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/colorSpheres.c"


#line 174 "/usr/include/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/colorSpheres.c"


#line 179 "/usr/include/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/colorSpheres.c"


#line 180 "/usr/include/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/colorSpheres.c"


#line 183 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/colorSpheres.c"


#line 184 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/colorSpheres.c"


#line 187 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/colorSpheres.c"


#line 188 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/colorSpheres.c"


#line 191 "/usr/include/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/colorSpheres.c"


#line 193 "/usr/include/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/colorSpheres.c"


#line 196 "/usr/include/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/colorSpheres.c"


#line 198 "/usr/include/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/colorSpheres.c"


#line 202 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/colorSpheres.c"


#line 203 "/usr/include/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/colorSpheres.c"


#line 206 "/usr/include/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/colorSpheres.c"


#line 209 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/colorSpheres.c"


#line 214 "/usr/include/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/colorSpheres.c"


#line 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/colorSpheres.c"


#line 25 "/usr/include/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/colorSpheres.c"


#line 26 "/usr/include/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/colorSpheres.c"


#line 27 "/usr/include/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/colorSpheres.c"


#line 24 "/usr/include/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/colorSpheres.c"


#line 25 "/usr/include/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/colorSpheres.c"


#line 26 "/usr/include/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/colorSpheres.c"


#line 27 "/usr/include/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/colorSpheres.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/colorSpheres.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/colorSpheres.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/colorSpheres.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/colorSpheres.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/colorSpheres.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/colorSpheres.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/colorSpheres.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/colorSpheres.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/colorSpheres.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/colorSpheres.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/colorSpheres.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/colorSpheres.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/colorSpheres.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/colorSpheres.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/colorSpheres.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/colorSpheres.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/colorSpheres.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/colorSpheres.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/colorSpheres.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/colorSpheres.c"


#line 33 "/usr/include/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/colorSpheres.c"


#line 34 "/usr/include/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/colorSpheres.c"


#line 35 "/usr/include/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/colorSpheres.c"


#line 36 "/usr/include/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/colorSpheres.c"


#line 37 "/usr/include/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/colorSpheres.c"


#line 38 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/colorSpheres.c"


#line 39 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/colorSpheres.c"


#line 42 "/usr/include/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/colorSpheres.c"


#line 47 "/usr/include/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/colorSpheres.c"


#line 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/colorSpheres.c"


#line 64 "/usr/include/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/colorSpheres.c"


#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/colorSpheres.c"


#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/colorSpheres.c"


#line 79 "/usr/include/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/colorSpheres.c"


#line 85 "/usr/include/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/colorSpheres.c"


#line 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/colorSpheres.c"


#line 103 "/usr/include/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/colorSpheres.c"


#line 108 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/colorSpheres.c"


#line 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/colorSpheres.c"


#line 115 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/colorSpheres.c"


#line 121 "/usr/include/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/colorSpheres.c"


#line 7 "/usr/include/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/colorSpheres.c"


#line 7 "/usr/include/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/colorSpheres.c"


#line 7 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/colorSpheres.c"


#line 7 "/usr/include/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/colorSpheres.c"


#line 209 "/usr/lib/gcc/x86_64-pc-linux-gnu/9.1.0/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/colorSpheres.c"


#line 148 "/usr/include/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/colorSpheres.c"


#line 149 "/usr/include/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/colorSpheres.c"


#line 150 "/usr/include/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/colorSpheres.c"


#line 158 "/usr/include/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/colorSpheres.c"


#line 159 "/usr/include/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/colorSpheres.c"


#line 160 "/usr/include/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/colorSpheres.c"


#line 161 "/usr/include/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/colorSpheres.c"


#line 164 "/usr/include/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/colorSpheres.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/bits/byteswap.h"
{

#line 37 "/usr/include/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/colorSpheres.c"


#line 41 "/usr/include/bits/byteswap.h"
}
#line 814 "obj/debug.linux/colorSpheres.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/bits/byteswap.h"
{

#line 52 "/usr/include/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/colorSpheres.c"


#line 56 "/usr/include/bits/byteswap.h"
}
#line 829 "obj/debug.linux/colorSpheres.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/bits/byteswap.h"
{

#line 73 "/usr/include/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/colorSpheres.c"


#line 77 "/usr/include/bits/byteswap.h"
}
#line 844 "obj/debug.linux/colorSpheres.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/bits/uintn-identity.h"
{

#line 35 "/usr/include/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/colorSpheres.c"


#line 36 "/usr/include/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/colorSpheres.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/bits/uintn-identity.h"
{

#line 41 "/usr/include/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/colorSpheres.c"


#line 42 "/usr/include/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/colorSpheres.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/bits/uintn-identity.h"
{

#line 47 "/usr/include/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/colorSpheres.c"


#line 48 "/usr/include/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/colorSpheres.c"



#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/colorSpheres.c"


#line 7 "/usr/include/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/colorSpheres.c"


#line 8 "/usr/include/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/colorSpheres.c"

#line 11 "/usr/include/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/colorSpheres.c"


#line 9 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{

#line 11 "/usr/include/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/colorSpheres.c"

#line 12 "/usr/include/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/colorSpheres.c"


#line 43 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/colorSpheres.c"


#line 49 "/usr/include/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/colorSpheres.c"


#line 59 "/usr/include/sys/select.h"
typedef struct
{

#line 67 "/usr/include/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/colorSpheres.c"


#line 77 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/colorSpheres.c"


#line 101 "/usr/include/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/colorSpheres.c"


#line 113 "/usr/include/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/colorSpheres.c"


#line 185 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/colorSpheres.c"


#line 192 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/colorSpheres.c"


#line 196 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/colorSpheres.c"


#line 200 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/colorSpheres.c"


#line 65 "/usr/include/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t
{

#line 67 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __readers;

#line 1022 "obj/debug.linux/colorSpheres.c"

#line 68 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers;

#line 1027 "obj/debug.linux/colorSpheres.c"

#line 69 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __wrphase_futex;

#line 1032 "obj/debug.linux/colorSpheres.c"

#line 70 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers_futex;

#line 1037 "obj/debug.linux/colorSpheres.c"

#line 71 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad3;

#line 1042 "obj/debug.linux/colorSpheres.c"

#line 72 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad4;

#line 1047 "obj/debug.linux/colorSpheres.c"

#line 74 "/usr/include/bits/pthreadtypes-arch.h"
int __cur_writer;

#line 1052 "obj/debug.linux/colorSpheres.c"

#line 75 "/usr/include/bits/pthreadtypes-arch.h"
int __shared;

#line 1057 "obj/debug.linux/colorSpheres.c"

#line 76 "/usr/include/bits/pthreadtypes-arch.h"
signed char __rwelision;

#line 1062 "obj/debug.linux/colorSpheres.c"

#line 81 "/usr/include/bits/pthreadtypes-arch.h"
unsigned char __pad1[7];

#line 1067 "obj/debug.linux/colorSpheres.c"

#line 84 "/usr/include/bits/pthreadtypes-arch.h"
unsigned long int __pad2;

#line 1072 "obj/debug.linux/colorSpheres.c"

#line 87 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __flags;

#line 1077 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1080 "obj/debug.linux/colorSpheres.c"


#line 82 "/usr/include/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 84 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1090 "obj/debug.linux/colorSpheres.c"

#line 85 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1095 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __pthread_list_t;

#line 1098 "obj/debug.linux/colorSpheres.c"


#line 118 "/usr/include/bits/thread-shared-types.h"
struct __pthread_mutex_s
{

#line 120 "/usr/include/bits/thread-shared-types.h"
int __lock;

#line 1108 "obj/debug.linux/colorSpheres.c"

#line 121 "/usr/include/bits/thread-shared-types.h"
unsigned int __count;

#line 1113 "obj/debug.linux/colorSpheres.c"

#line 122 "/usr/include/bits/thread-shared-types.h"
int __owner;

#line 1118 "obj/debug.linux/colorSpheres.c"

#line 124 "/usr/include/bits/thread-shared-types.h"
unsigned int __nusers;

#line 1123 "obj/debug.linux/colorSpheres.c"

#line 148 "/usr/include/bits/thread-shared-types.h"
int __kind;

#line 1128 "obj/debug.linux/colorSpheres.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __spins;

#line 1133 "obj/debug.linux/colorSpheres.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __elision;

#line 1138 "obj/debug.linux/colorSpheres.c"

#line 155 "/usr/include/bits/thread-shared-types.h"
__pthread_list_t __list;

#line 1143 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1146 "obj/debug.linux/colorSpheres.c"


#line 171 "/usr/include/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 173 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 175 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1160 "obj/debug.linux/colorSpheres.c"

#line 176 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 178 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1169 "obj/debug.linux/colorSpheres.c"

#line 179 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1174 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __wseq32;

#line 1177 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1180 "obj/debug.linux/colorSpheres.c"

#line 182 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 184 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1189 "obj/debug.linux/colorSpheres.c"

#line 185 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 187 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1198 "obj/debug.linux/colorSpheres.c"

#line 188 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1203 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __g1_start32;

#line 1206 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1209 "obj/debug.linux/colorSpheres.c"

#line 191 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1214 "obj/debug.linux/colorSpheres.c"

#line 192 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1219 "obj/debug.linux/colorSpheres.c"

#line 193 "/usr/include/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1224 "obj/debug.linux/colorSpheres.c"

#line 194 "/usr/include/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1229 "obj/debug.linux/colorSpheres.c"

#line 195 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1234 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1237 "obj/debug.linux/colorSpheres.c"


#line 27 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1243 "obj/debug.linux/colorSpheres.c"


#line 32 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1253 "obj/debug.linux/colorSpheres.c"

#line 35 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1258 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1261 "obj/debug.linux/colorSpheres.c"


#line 41 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1271 "obj/debug.linux/colorSpheres.c"

#line 44 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1276 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1279 "obj/debug.linux/colorSpheres.c"


#line 49 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1285 "obj/debug.linux/colorSpheres.c"


#line 53 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1291 "obj/debug.linux/colorSpheres.c"


#line 56 "/usr/include/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1301 "obj/debug.linux/colorSpheres.c"

#line 59 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1306 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1309 "obj/debug.linux/colorSpheres.c"


#line 62 "/usr/include/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1315 "obj/debug.linux/colorSpheres.c"


#line 67 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1325 "obj/debug.linux/colorSpheres.c"

#line 70 "/usr/include/bits/pthreadtypes.h"
char __size[40];

#line 1330 "obj/debug.linux/colorSpheres.c"

#line 71 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1335 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1338 "obj/debug.linux/colorSpheres.c"


#line 75 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1348 "obj/debug.linux/colorSpheres.c"

#line 78 "/usr/include/bits/pthreadtypes.h"
char __size[48];

#line 1353 "obj/debug.linux/colorSpheres.c"

#line 79 "/usr/include/bits/pthreadtypes.h"
 long long int __align;

#line 1358 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_cond_t;

#line 1361 "obj/debug.linux/colorSpheres.c"


#line 86 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1371 "obj/debug.linux/colorSpheres.c"

#line 89 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1376 "obj/debug.linux/colorSpheres.c"

#line 90 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1381 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1384 "obj/debug.linux/colorSpheres.c"


#line 93 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/bits/pthreadtypes.h"
char __size[8];

#line 1394 "obj/debug.linux/colorSpheres.c"

#line 96 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1399 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1402 "obj/debug.linux/colorSpheres.c"


#line 103 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1408 "obj/debug.linux/colorSpheres.c"


#line 108 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/bits/pthreadtypes.h"
char __size[32];

#line 1418 "obj/debug.linux/colorSpheres.c"

#line 111 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1423 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1426 "obj/debug.linux/colorSpheres.c"


#line 114 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1436 "obj/debug.linux/colorSpheres.c"

#line 117 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1441 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1444 "obj/debug.linux/colorSpheres.c"


#line 7 "colorSpheres.ec"


#line 8 "colorSpheres.ec"


#line 15 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 1456 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_timerResolution;

#line 1462 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 1468 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLat;

#line 1474 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLon;

#line 1480 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;

#line 1486 "obj/debug.linux/colorSpheres.c"


#line 78 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;

#line 1492 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_text;

#line 1498 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 1504 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_moveable;

#line 1510 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_stayOnTop;

#line 1516 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_clientSize;

#line 1522 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 1528 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;

#line 1534 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_alphaBlend;

#line 1540 "obj/debug.linux/colorSpheres.c"


#line 109 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1546 "obj/debug.linux/colorSpheres.c"


#line 134 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 1552 "obj/debug.linux/colorSpheres.c"


#line 160 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 1558 "obj/debug.linux/colorSpheres.c"


#line 163 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_light;

#line 1564 "obj/debug.linux/colorSpheres.c"


#line 165 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 1570 "obj/debug.linux/colorSpheres.c"


#line 198 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 1576 "obj/debug.linux/colorSpheres.c"


#line 210 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 1582 "obj/debug.linux/colorSpheres.c"


#line 215 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 1588 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1594 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 15 "colorSpheres.ec"
void *  first;

#line 1604 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  last;

#line 1609 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int count;

#line 1614 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int offset;

#line 1619 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int circ;

#line 1624 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1627 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 15 "colorSpheres.ec"
union
{

#line 15 "colorSpheres.ec"
char c;

#line 1641 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned char uc;

#line 1646 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
short s;

#line 1651 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned short us;

#line 1656 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int i;

#line 1661 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int ui;

#line 1666 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  p;

#line 1671 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
float f;

#line 1676 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
double d;

#line 1681 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
long long i64;

#line 1686 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
uint64 ui64;

#line 1691 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __anon1;

#line 1694 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1697 "obj/debug.linux/colorSpheres.c"


#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D
{

#line 50 "colorSpheres.ec"
double x;

#line 1707 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
double y;

#line 1712 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
double z;

#line 1717 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1720 "obj/debug.linux/colorSpheres.c"


#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion
{

#line 50 "colorSpheres.ec"
double w;

#line 1730 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
double x;

#line 1735 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
double y;

#line 1740 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
double z;

#line 1745 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1748 "obj/debug.linux/colorSpheres.c"


#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df
{

#line 50 "colorSpheres.ec"
float x;

#line 1758 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
float y;

#line 1763 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
float z;

#line 1768 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1771 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 221 "colorSpheres.ec"
unsigned char *  _buffer;

#line 1781 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
size_t count;

#line 1786 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
size_t _size;

#line 1791 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
size_t pos;

#line 1796 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1799 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 1805 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 1811 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 1817 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 1823 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 1829 "obj/debug.linux/colorSpheres.c"


#line 26 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler
{

#line 26 "colorSpheres.ec"
double yaw;

#line 1839 "obj/debug.linux/colorSpheres.c"

#line 26 "colorSpheres.ec"
double pitch;

#line 1844 "obj/debug.linux/colorSpheres.c"

#line 26 "colorSpheres.ec"
double roll;

#line 1849 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1852 "obj/debug.linux/colorSpheres.c"


#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB
{

#line 30 "colorSpheres.ec"
float r;

#line 1862 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
float g;

#line 1867 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
float b;

#line 1872 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1875 "obj/debug.linux/colorSpheres.c"


#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Object;

#line 1881 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere;

#line 1887 "obj/debug.linux/colorSpheres.c"


#line 81 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__DisplaySystem
{

#line 81 "colorSpheres.ec"
unsigned char __ecerePrivateData0[24];

#line 1897 "obj/debug.linux/colorSpheres.c"

#line 81 "colorSpheres.ec"
int pixelFormat;

#line 1902 "obj/debug.linux/colorSpheres.c"

#line 81 "colorSpheres.ec"
unsigned int flags;

#line 1907 "obj/debug.linux/colorSpheres.c"

#line 81 "colorSpheres.ec"
char __ecere_padding1[160];

#line 1912 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1915 "obj/debug.linux/colorSpheres.c"


#line 170 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point
{

#line 170 "colorSpheres.ec"
int x;

#line 1925 "obj/debug.linux/colorSpheres.c"

#line 170 "colorSpheres.ec"
int y;

#line 1930 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1933 "obj/debug.linux/colorSpheres.c"


#line 91 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size
{

#line 91 "colorSpheres.ec"
int w;

#line 1943 "obj/debug.linux/colorSpheres.c"

#line 91 "colorSpheres.ec"
int h;

#line 1948 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1951 "obj/debug.linux/colorSpheres.c"


#line 102 "colorSpheres.ec"
extern double (* __ecereFunction___ecereNameSpace__ecere__sys__GetTime)(void);

#line 1957 "obj/debug.linux/colorSpheres.c"


#line 167 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Box
{

#line 167 "colorSpheres.ec"
int left;

#line 1967 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
int top;

#line 1972 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
int right;

#line 1977 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
int bottom;

#line 1982 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 1985 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DefinedExpression;

#line 1991 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 1997 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 2003 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 2009 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2015 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_flags;

#line 2021 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__drivers__Shader
{

#line 69 "colorSpheres.ec"
unsigned char __ecerePrivateData0[24];

#line 2031 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
uint64 state;

#line 2036 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int modifiedUniforms;

#line 2041 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
char __ecere_padding2[44];

#line 2046 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2049 "obj/debug.linux/colorSpheres.c"


#line 78 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Mesh;

#line 2055 "obj/debug.linux/colorSpheres.c"


#line 160 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Display
{

#line 160 "colorSpheres.ec"
int width;

#line 2065 "obj/debug.linux/colorSpheres.c"

#line 160 "colorSpheres.ec"
int height;

#line 2070 "obj/debug.linux/colorSpheres.c"

#line 160 "colorSpheres.ec"
void *  driverData;

#line 2075 "obj/debug.linux/colorSpheres.c"

#line 160 "colorSpheres.ec"
char __ecere_padding1[64];

#line 2080 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2083 "obj/debug.linux/colorSpheres.c"


#line 198 "colorSpheres.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians)(double this);

#line 2089 "obj/debug.linux/colorSpheres.c"


#line 198 "colorSpheres.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians)(double value);

#line 2095 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Camera
{

#line 22 "colorSpheres.ec"
unsigned char __ecerePrivateData0[24];

#line 2105 "obj/debug.linux/colorSpheres.c"

#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 2110 "obj/debug.linux/colorSpheres.c"

#line 22 "colorSpheres.ec"
char __ecere_padding1[1056];

#line 2115 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2118 "obj/debug.linux/colorSpheres.c"


#line 121 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Multiply)(struct __ecereNameSpace__ecere__gfx3D__Quaternion * this, const struct __ecereNameSpace__ecere__gfx3D__Quaternion * q1, const struct __ecereNameSpace__ecere__gfx3D__Quaternion * q2);

#line 2124 "obj/debug.linux/colorSpheres.c"


#line 122 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Normalize)(struct __ecereNameSpace__ecere__gfx3D__Quaternion * this, const struct __ecereNameSpace__ecere__gfx3D__Quaternion * source);

#line 2130 "obj/debug.linux/colorSpheres.c"


#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform
{

#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 2140 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 2145 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df scaling;

#line 2150 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2153 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * specularLight;

#line 2159 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * camera;

#line 2165 "obj/debug.linux/colorSpheres.c"


#line 109 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion)(struct __ecereNameSpace__ecere__gfx3D__Euler * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2171 "obj/debug.linux/colorSpheres.c"


#line 109 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion)(struct __ecereNameSpace__ecere__gfx3D__Euler * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2177 "obj/debug.linux/colorSpheres.c"


#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Light
{

#line 30 "colorSpheres.ec"
unsigned int flags;

#line 2187 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 2192 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 2197 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 2202 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D direction;

#line 2207 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 2212 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * lightObject;

#line 2217 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * target;

#line 2222 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
double fallOff;

#line 2227 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
double hotSpot;

#line 2232 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
float Kc;

#line 2237 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
float Kl;

#line 2242 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
float Kq;

#line 2247 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
double start;

#line 2252 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
double end;

#line 2257 "obj/debug.linux/colorSpheres.c"

#line 30 "colorSpheres.ec"
float multiplier;

#line 2262 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2265 "obj/debug.linux/colorSpheres.c"


#line 66 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Object * model);

#line 2271 "obj/debug.linux/colorSpheres.c"


#line 79 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_AddName)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Object * object, const char *  name);

#line 2277 "obj/debug.linux/colorSpheres.c"


#line 81 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2283 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_flags)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2289 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_flags)(struct __ecereNameSpace__ecere__gfx3D__Object * this, unsigned int value);

#line 2295 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLat)(struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere * this, int value);

#line 2301 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLon)(struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere * this, int value);

#line 2307 "obj/debug.linux/colorSpheres.c"


#line 167 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Surface
{

#line 167 "colorSpheres.ec"
int width;

#line 2317 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
int height;

#line 2322 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point offset;

#line 2327 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Box box;

#line 2332 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Box unclippedBox;

#line 2337 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
void *  driverData;

#line 2342 "obj/debug.linux/colorSpheres.c"

#line 167 "colorSpheres.ec"
char __ecere_padding1[64];

#line 2347 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2350 "obj/debug.linux/colorSpheres.c"


#line 78 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Mesh * (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2356 "obj/debug.linux/colorSpheres.c"


#line 78 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Mesh * value);

#line 2362 "obj/debug.linux/colorSpheres.c"


#line 78 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency)(struct __ecereNameSpace__ecere__gfx3D__Mesh * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 2368 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
struct ColorSpheres
{

#line 50 "colorSpheres.ec"
unsigned char __ecerePrivateData0[128];

#line 2378 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform transform;

#line 2383 "obj/debug.linux/colorSpheres.c"

#line 50 "colorSpheres.ec"
char __ecere_padding1[672];

#line 2388 "obj/debug.linux/colorSpheres.c"

#line 52 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere * sphere;

#line 2393 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2396 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 2402 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 2408 "obj/debug.linux/colorSpheres.c"


#line 30 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Light diffuseLight =
{

#line 30 "colorSpheres.ec"
0,
{

#line 30 "colorSpheres.ec"
0, 0, 0
}
#line 30 "colorSpheres.ec"
,
{

#line 30 "colorSpheres.ec"
1.0000000000000000f, 1.0000000000000000f, 1.0000000000000000f
}
#line 30 "colorSpheres.ec"
,
{

#line 30 "colorSpheres.ec"
0, 0, 0
}
#line 30 "colorSpheres.ec"
,
{

#line 30 "colorSpheres.ec"
0, 0, 0
}
#line 30 "colorSpheres.ec"
,
{

#line 30 "colorSpheres.ec"
1.0000000000000000, 0.0000000000000000, 0.0000000000000000, 0.0000000000000000
}
#line 30 "colorSpheres.ec"
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5f
}
#line 30 "colorSpheres.ec"
;

#line 2456 "obj/debug.linux/colorSpheres.c"


#line 163 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_light)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx__Light * value);

#line 2462 "obj/debug.linux/colorSpheres.c"


#line 163 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_light)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx__Light * value);

#line 2468 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
struct Test3D
{

#line 96 "colorSpheres.ec"
struct ColorSpheres * cube;

#line 2478 "obj/debug.linux/colorSpheres.c"

#line 97 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler spin;

#line 2483 "obj/debug.linux/colorSpheres.c"

#line 170 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point startClick;

#line 2488 "obj/debug.linux/colorSpheres.c"

#line 171 "colorSpheres.ec"
unsigned int moving;

#line 2493 "obj/debug.linux/colorSpheres.c"

#line 172 "colorSpheres.ec"
double clickTime;

#line 2498 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2501 "obj/debug.linux/colorSpheres.c"


#line 228 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * test3D;

#line 2507 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2513 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 15 "colorSpheres.ec"
void * *  _vTbl;

#line 2523 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2528 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int _refCount;

#line 2533 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2536 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2542 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2548 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

#line 2554 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2560 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2566 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2572 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2578 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_timerResolution)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2584 "obj/debug.linux/colorSpheres.c"


#line 58 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create)(struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere * this, struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 2590 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_text)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2596 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_text)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2602 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2608 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2614 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_moveable)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2620 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_moveable)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2626 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_stayOnTop)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2632 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_stayOnTop)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2638 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2644 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_clientSize)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2650 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2656 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2662 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2668 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 2674 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_alphaBlend)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2680 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_alphaBlend)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2686 "obj/debug.linux/colorSpheres.c"


#line 127 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)(struct __ecereNameSpace__ecere__com__Instance * this, const struct __ecereNameSpace__ecere__sys__Box * region);

#line 2692 "obj/debug.linux/colorSpheres.c"


#line 134 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2698 "obj/debug.linux/colorSpheres.c"


#line 140 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)(struct __ecereNameSpace__ecere__com__Instance * this, int width, int height, struct __ecereNameSpace__ecere__sys__Point * origin);

#line 2704 "obj/debug.linux/colorSpheres.c"


#line 147 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)(struct __ecereNameSpace__ecere__com__Instance * this, int type);

#line 2710 "obj/debug.linux/colorSpheres.c"


#line 148 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();

#line 2716 "obj/debug.linux/colorSpheres.c"


#line 150 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition)(struct __ecereNameSpace__ecere__com__Instance * this, int *  x, int *  y);

#line 2722 "obj/debug.linux/colorSpheres.c"


#line 160 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2728 "obj/debug.linux/colorSpheres.c"


#line 160 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface, struct __ecereNameSpace__ecere__com__Instance * camera);

#line 2734 "obj/debug.linux/colorSpheres.c"


#line 162 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)(struct __ecereNameSpace__ecere__com__Instance * this, int id, struct __ecereNameSpace__ecere__gfx__Light * light);

#line 2740 "obj/debug.linux/colorSpheres.c"


#line 165 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 2746 "obj/debug.linux/colorSpheres.c"


#line 166 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 2752 "obj/debug.linux/colorSpheres.c"


#line 177 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2758 "obj/debug.linux/colorSpheres.c"


#line 187 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();

#line 2764 "obj/debug.linux/colorSpheres.c"


#line 210 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2770 "obj/debug.linux/colorSpheres.c"


#line 210 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2776 "obj/debug.linux/colorSpheres.c"


#line 215 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 2782 "obj/debug.linux/colorSpheres.c"


#line 215 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 2788 "obj/debug.linux/colorSpheres.c"


#line 215 "colorSpheres.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Move)(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, int w, int h);

#line 2794 "obj/debug.linux/colorSpheres.c"


#line 223 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)(struct __ecereNameSpace__ecere__com__Instance * this, long long code);

#line 2800 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern int (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2806 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type)(struct __ecereNameSpace__ecere__com__Instance * this, int value);

#line 2812 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 2818 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 2824 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2830 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2836 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2842 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov)(struct __ecereNameSpace__ecere__com__Instance * this, double value);

#line 2848 "obj/debug.linux/colorSpheres.c"


#line 228 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2854 "obj/debug.linux/colorSpheres.c"

unsigned int __ecereConstructor_ColorSpheresApp(struct __ecereNameSpace__ecere__com__Instance * this)

#line 15 "colorSpheres.ec"
{

#line 15 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver(this, "OpenGL");
#line 2863 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_timerResolution(this, 60);
#line 2868 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
return 1;
#line 2873 "obj/debug.linux/colorSpheres.c"


#line 19 "colorSpheres.ec"
}
#line 2878 "obj/debug.linux/colorSpheres.c"



#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 2885 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 2895 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int count;

#line 2900 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2905 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void (*  FreeKey)(void *  key);

#line 2910 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 2913 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 2919 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 2929 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 2934 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
const char *  name;

#line 2939 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int isProperty;

#line 2944 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int memberAccess;

#line 2949 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int id;

#line 2954 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2959 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
const char *  dataTypeString;

#line 2964 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2969 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2974 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int type;

#line 2979 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int offset;

#line 2984 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int memberID;

#line 2989 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 2994 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 2999 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int memberOffset;

#line 3004 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
short structAlignment;

#line 3009 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
short pointerAlignment;

#line 3014 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3017 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 3023 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 221 "colorSpheres.ec"
const char *  name;

#line 3033 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 3038 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 3043 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 3048 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int depth;

#line 3053 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int (*  function)();

#line 3058 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int vid;

#line 3063 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int type;

#line 3068 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3073 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
void *  symbol;

#line 3078 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
const char *  dataTypeString;

#line 3083 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3088 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int memberAccess;

#line 3093 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3096 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

#line 3102 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 3108 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 15 "colorSpheres.ec"
union
{

#line 15 "colorSpheres.ec"
struct
{

#line 15 "colorSpheres.ec"
const char *  dataTypeString;

#line 3126 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3131 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __anon1;

#line 3134 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 3139 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct
{

#line 15 "colorSpheres.ec"
const char *  memberString;

#line 3148 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
union
{

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 3157 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 3162 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 3167 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __anon1;

#line 3170 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __anon2;

#line 3173 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct __anon1;

#line 3176 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3179 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 3189 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 3194 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
const char *  name;

#line 3199 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int isProperty;

#line 3204 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int memberAccess;

#line 3209 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int id;

#line 3214 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3219 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
const char *  dataTypeString;

#line 3224 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3229 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3234 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
void (*  Set)(void * , int);

#line 3239 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int (*  Get)(void * );

#line 3244 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int (*  IsSet)(void * );

#line 3249 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
void *  data;

#line 3254 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
void *  symbol;

#line 3259 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
int vid;

#line 3264 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int conversion;

#line 3269 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int watcherOffset;

#line 3274 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
const char *  category;

#line 3279 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int compiled;

#line 3284 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int selfWatchable;

#line 3289 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
unsigned int isWatchable;

#line 3294 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3297 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 3303 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 3309 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 3315 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 3321 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
unsigned int __ecereMethod_Test3D_UpdateCube(struct __ecereNameSpace__ecere__com__Instance *  this);

#line 3327 "obj/debug.linux/colorSpheres.c"

unsigned int __ecereMethod_ColorSpheresApp_Cycle(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int idle)

#line 16 "colorSpheres.ec"
{

#line 17 "colorSpheres.ec"
__ecereMethod_Test3D_UpdateCube(test3D);
#line 3336 "obj/debug.linux/colorSpheres.c"


#line 18 "colorSpheres.ec"
return 1;
#line 3341 "obj/debug.linux/colorSpheres.c"


#line 19 "colorSpheres.ec"
}
#line 3346 "obj/debug.linux/colorSpheres.c"



#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 3353 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__DefinedExpression * __ecereNameSpace__ecere__com__eSystem_RegisterDefine(const char *  name, const char *  value, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

#line 3359 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

#line 3365 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 3371 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Material;

#line 3377 "obj/debug.linux/colorSpheres.c"


#line 77 "colorSpheres.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_AddMaterial)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Material * material);

#line 3383 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap;

#line 3389 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap
{

#line 69 "colorSpheres.ec"
int width;

#line 3399 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
int height;

#line 3404 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
int pixelFormat;

#line 3409 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned char *  picture;

#line 3414 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int stride;

#line 3419 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int size;

#line 3424 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int sizeBytes;

#line 3429 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int *  palette;

#line 3434 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int allocatePalette;

#line 3439 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int transparent;

#line 3444 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
int shadeShift;

#line 3449 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned char *  paletteShades;

#line 3454 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int alphaBlend;

#line 3459 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * displaySystem;

#line 3464 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * driver;

#line 3469 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
void *  driverData;

#line 3474 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int keepData;

#line 3479 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int mipMaps;

#line 3484 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int sRGB2Linear;

#line 3489 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
int numMipMaps;

#line 3494 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * *  bitmaps;

#line 3499 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3502 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Material
{

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * prev;

#line 3512 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * next;

#line 3517 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
char *  name;

#line 3522 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float opacity;

#line 3527 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 3532 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 3537 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 3542 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB emissive;

#line 3547 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float power;

#line 3552 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * baseMap;

#line 3557 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * bumpMap;

#line 3562 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * specularMap;

#line 3567 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * reflectMap;

#line 3572 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * envMap;

#line 3577 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float reflectivity;

#line 3582 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float refractiveIndex;

#line 3587 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float refractiveIndexContainer;

#line 3592 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
unsigned int flags;

#line 3597 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float uScale;

#line 3602 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
float vScale;

#line 3607 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * shader;

#line 3612 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3615 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Material * (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 3621 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Material * value);

#line 3627 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 3633 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 15 "colorSpheres.ec"
const char *  name;

#line 3643 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 3648 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 3653 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 3658 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int depth;

#line 3663 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 3668 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 3673 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 3678 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 3683 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 3688 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3691 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 3701 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 3706 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char *  name;

#line 3711 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int offset;

#line 3716 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int structSize;

#line 3721 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void * *  _vTbl;

#line 3726 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int vTblSize;

#line 3731 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int (*  Constructor)(void * );

#line 3736 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void (*  Destructor)(void * );

#line 3741 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int offsetClass;

#line 3746 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int sizeClass;

#line 3751 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 3756 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3761 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3766 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3771 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3776 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3781 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3786 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int memberID;

#line 3791 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int startMemberID;

#line 3796 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int type;

#line 3801 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3806 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3811 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char *  dataTypeString;

#line 3816 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3821 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int typeSize;

#line 3826 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int defaultAlignment;

#line 3831 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void (*  Initialize)();

#line 3836 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int memberOffset;

#line 3841 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3846 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char *  designerClass;

#line 3851 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int noExpansion;

#line 3856 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char *  defaultProperty;

#line 3861 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int comRedefinition;

#line 3866 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int count;

#line 3871 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int isRemote;

#line 3876 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int internalDecl;

#line 3881 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  data;

#line 3886 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int computeSize;

#line 3891 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
short structAlignment;

#line 3896 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
short pointerAlignment;

#line 3901 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int destructionWatchOffset;

#line 3906 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int fixed;

#line 3911 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 3916 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int inheritanceAccess;

#line 3921 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char *  fullName;

#line 3926 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  symbol;

#line 3931 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 3936 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 3941 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 3946 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 3951 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 3956 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int numParams;

#line 3961 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int isInstanceClass;

#line 3966 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int byValueSystemClass;

#line 3971 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  bindingsClass;

#line 3976 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 3979 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 15 "colorSpheres.ec"
int argc;

#line 3989 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char * *  argv;

#line 3994 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int exitCode;

#line 3999 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
unsigned int isGUIApp;

#line 4004 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 4009 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
char *  parsedCommand;

#line 4014 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 4019 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 4022 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ColorSpheresApp;

#line 4028 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ColorSpheres;

#line 4034 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Test3D;

#line 4040 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere;

#line 4046 "obj/debug.linux/colorSpheres.c"


#line 64 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 4052 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 4058 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 4064 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 4070 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 4080 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 4085 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 4090 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 4095 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 4100 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 4105 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 4110 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
const char *  name;

#line 4115 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  library;

#line 4120 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
void *  Unload;

#line 4125 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int importType;

#line 4130 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
int origImportType;

#line 4135 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 4140 "obj/debug.linux/colorSpheres.c"

#line 15 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 4145 "obj/debug.linux/colorSpheres.c"
} ecere_gcc_struct;

#line 4148 "obj/debug.linux/colorSpheres.c"

unsigned int __ecereConstructor_Test3D(struct __ecereNameSpace__ecere__com__Instance * this)

#line 221 "colorSpheres.ec"
{

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct0 =
{

#line 221 "colorSpheres.ec"
400, 400
}
#line 221 "colorSpheres.ec"
;

#line 4165 "obj/debug.linux/colorSpheres.c"

#line 221 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4170 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecerePointer_Test3D->cube = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_ColorSpheres);
#line 4175 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_text(this, "Cube");
#line 4180 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle(this, 0);
#line 4185 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_moveable(this, 1);
#line 4190 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_stayOnTop(this, 1);
#line 4195 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_clientSize(this, &__simpleStruct0);
#line 4200 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background(this, 0);
#line 4205 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity(this, 0);
#line 4210 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_alphaBlend(this, 1);
#line 4215 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
;
#line 4220 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
return 1;
#line 4225 "obj/debug.linux/colorSpheres.c"


#line 225 "colorSpheres.ec"
}
#line 4230 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_UpdateCube(struct __ecereNameSpace__ecere__com__Instance * this)

#line 100 "colorSpheres.ec"
{

#line 100 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4241 "obj/debug.linux/colorSpheres.c"

#line 101 "colorSpheres.ec"
static double lastTime = 0;

#line 4246 "obj/debug.linux/colorSpheres.c"

#line 102 "colorSpheres.ec"
double time = __ecereFunction___ecereNameSpace__ecere__sys__GetTime(), diffTime = lastTime ? (time - lastTime) : 0;

#line 4251 "obj/debug.linux/colorSpheres.c"


#line 103 "colorSpheres.ec"
if(__ecerePointer_Test3D->spin.yaw || __ecerePointer_Test3D->spin.pitch)

#line 104 "colorSpheres.ec"
{

#line 124 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct2;

#line 4263 "obj/debug.linux/colorSpheres.c"

#line 109 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 4268 "obj/debug.linux/colorSpheres.c"

#line 107 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct0;

#line 4273 "obj/debug.linux/colorSpheres.c"

#line 105 "colorSpheres.ec"
int signYaw = 1, signPitch = 1;

#line 4278 "obj/debug.linux/colorSpheres.c"

#line 106 "colorSpheres.ec"
double yaw = __ecerePointer_Test3D->spin.yaw, pitch = __ecerePointer_Test3D->spin.pitch;

#line 4283 "obj/debug.linux/colorSpheres.c"

#line 107 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->cube), &__simpleStruct0), __simpleStruct0).orientation;

#line 4288 "obj/debug.linux/colorSpheres.c"

#line 108 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler tSpin =
{

#line 108 "colorSpheres.ec"
yaw * (double)(double)diffTime, pitch * (double)(double)diffTime, 0.0000000000000000
}
#line 108 "colorSpheres.ec"
;

#line 4300 "obj/debug.linux/colorSpheres.c"

#line 109 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion thisSpin = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion(&tSpin, &__simpleStruct1), __simpleStruct1), temp;

#line 4305 "obj/debug.linux/colorSpheres.c"


#line 111 "colorSpheres.ec"
if(yaw < 0)

#line 111 "colorSpheres.ec"
{

#line 111 "colorSpheres.ec"
yaw = -yaw;
#line 4316 "obj/debug.linux/colorSpheres.c"


#line 111 "colorSpheres.ec"
signYaw = -1;
#line 4321 "obj/debug.linux/colorSpheres.c"


#line 111 "colorSpheres.ec"
}
#line 4326 "obj/debug.linux/colorSpheres.c"

#line 4328 "obj/debug.linux/colorSpheres.c"


#line 112 "colorSpheres.ec"
if(pitch < 0)

#line 112 "colorSpheres.ec"
{

#line 112 "colorSpheres.ec"
pitch = -pitch;
#line 4339 "obj/debug.linux/colorSpheres.c"


#line 112 "colorSpheres.ec"
signPitch = -1;
#line 4344 "obj/debug.linux/colorSpheres.c"


#line 112 "colorSpheres.ec"
}
#line 4349 "obj/debug.linux/colorSpheres.c"

#line 4351 "obj/debug.linux/colorSpheres.c"


#line 113 "colorSpheres.ec"
yaw -= (double)(double)diffTime / (double)3 * yaw;
#line 4356 "obj/debug.linux/colorSpheres.c"


#line 114 "colorSpheres.ec"
pitch -= (double)(double)diffTime / (double)3 * pitch;
#line 4361 "obj/debug.linux/colorSpheres.c"


#line 115 "colorSpheres.ec"
if(yaw < 0.0001)

#line 115 "colorSpheres.ec"
yaw = 0;
#line 4369 "obj/debug.linux/colorSpheres.c"

#line 4371 "obj/debug.linux/colorSpheres.c"


#line 116 "colorSpheres.ec"
if(pitch < 0.0001)

#line 116 "colorSpheres.ec"
pitch = 0;
#line 4379 "obj/debug.linux/colorSpheres.c"

#line 4381 "obj/debug.linux/colorSpheres.c"


#line 118 "colorSpheres.ec"
__ecerePointer_Test3D->spin.yaw = yaw * signYaw;
#line 4386 "obj/debug.linux/colorSpheres.c"


#line 119 "colorSpheres.ec"
__ecerePointer_Test3D->spin.pitch = pitch * signPitch;
#line 4391 "obj/debug.linux/colorSpheres.c"


#line 121 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Multiply(&temp, &orientation, &thisSpin);
#line 4396 "obj/debug.linux/colorSpheres.c"


#line 122 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Normalize(&orientation, &temp);
#line 4401 "obj/debug.linux/colorSpheres.c"


#line 124 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_Test3D->cube), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->cube), &__simpleStruct2), __simpleStruct2.orientation = orientation, &__simpleStruct2));
#line 4406 "obj/debug.linux/colorSpheres.c"


#line 125 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(__ecerePointer_Test3D->cube));
#line 4411 "obj/debug.linux/colorSpheres.c"


#line 126 "colorSpheres.ec"
}
#line 4416 "obj/debug.linux/colorSpheres.c"

#line 4418 "obj/debug.linux/colorSpheres.c"


#line 127 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 4423 "obj/debug.linux/colorSpheres.c"


#line 128 "colorSpheres.ec"
lastTime = time;
#line 4428 "obj/debug.linux/colorSpheres.c"


#line 129 "colorSpheres.ec"
return 1;
#line 4433 "obj/debug.linux/colorSpheres.c"


#line 130 "colorSpheres.ec"
}
#line 4438 "obj/debug.linux/colorSpheres.c"


void __ecereMethod_Test3D_OnResize(struct __ecereNameSpace__ecere__com__Instance * this, int w, int h)

#line 139 "colorSpheres.ec"
{

#line 139 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4449 "obj/debug.linux/colorSpheres.c"


#line 140 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup(camera, w, h, (((void *)0)));
#line 4454 "obj/debug.linux/colorSpheres.c"


#line 141 "colorSpheres.ec"
}
#line 4459 "obj/debug.linux/colorSpheres.c"


void __ecereMethod_Test3D_OnRedraw(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface)

#line 144 "colorSpheres.ec"
{

#line 163 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Light __simpleStruct7;

#line 4470 "obj/debug.linux/colorSpheres.c"

#line 156 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct6;

#line 4475 "obj/debug.linux/colorSpheres.c"

#line 155 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct5;

#line 4480 "obj/debug.linux/colorSpheres.c"

#line 155 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct4;

#line 4485 "obj/debug.linux/colorSpheres.c"

#line 154 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct3;

#line 4490 "obj/debug.linux/colorSpheres.c"

#line 154 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct2;

#line 4495 "obj/debug.linux/colorSpheres.c"

#line 152 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 4500 "obj/debug.linux/colorSpheres.c"

#line 152 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0;

#line 4505 "obj/debug.linux/colorSpheres.c"

#line 144 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4510 "obj/debug.linux/colorSpheres.c"

#line 145 "colorSpheres.ec"
int x, y;

#line 4515 "obj/debug.linux/colorSpheres.c"


#line 147 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear(surface, 2);
#line 4520 "obj/debug.linux/colorSpheres.c"


#line 148 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update(camera);
#line 4525 "obj/debug.linux/colorSpheres.c"


#line 150 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition(this, &x, &y);
#line 4530 "obj/debug.linux/colorSpheres.c"


#line 152 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform(specularLight, (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform(specularLight, &__simpleStruct1), __simpleStruct1.position = (__simpleStruct0.x = (double)(double)((__ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize(this, &__simpleStruct3), (x - (__ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize(this, &__simpleStruct2), __simpleStruct2.w / 2)) * 400 / __simpleStruct3.w)), __simpleStruct0.y = (double)(double)((__ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize(this, &__simpleStruct5), (y - (__ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize(this, &__simpleStruct4), __simpleStruct4.h / 2)) * 400 / __simpleStruct5.h)), __simpleStruct0.z = (float)(float)(-2) * (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->cube), &__simpleStruct6), __simpleStruct6.scaling.z) * ((float)1 + 1.0f / ((float)((4) - 1) * ((float)1 + (0.75f)))), __simpleStruct0), &__simpleStruct1));
#line 4535 "obj/debug.linux/colorSpheres.c"


#line 158 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform(specularLight);
#line 4540 "obj/debug.linux/colorSpheres.c"


#line 160 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, camera);
#line 4545 "obj/debug.linux/colorSpheres.c"


#line 162 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0, &diffuseLight);
#line 4550 "obj/debug.linux/colorSpheres.c"


#line 163 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 1, (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_light(specularLight, &__simpleStruct7), &__simpleStruct7));
#line 4555 "obj/debug.linux/colorSpheres.c"


#line 165 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0);
#line 4560 "obj/debug.linux/colorSpheres.c"


#line 166 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), (void *)(__ecerePointer_Test3D->cube));
#line 4565 "obj/debug.linux/colorSpheres.c"


#line 167 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, (((void *)0)));
#line 4570 "obj/debug.linux/colorSpheres.c"


#line 168 "colorSpheres.ec"
}
#line 4575 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_OnLeftButtonDown(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 175 "colorSpheres.ec"
{

#line 178 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct0;

#line 4586 "obj/debug.linux/colorSpheres.c"

#line 175 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4591 "obj/debug.linux/colorSpheres.c"


#line 176 "colorSpheres.ec"
__ecerePointer_Test3D->clickTime = __ecereFunction___ecereNameSpace__ecere__sys__GetTime();
#line 4596 "obj/debug.linux/colorSpheres.c"


#line 177 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture(this);
#line 4601 "obj/debug.linux/colorSpheres.c"


#line 178 "colorSpheres.ec"
__ecerePointer_Test3D->startClick = (__simpleStruct0.x = x, __simpleStruct0.y = y, __simpleStruct0);
#line 4606 "obj/debug.linux/colorSpheres.c"


#line 179 "colorSpheres.ec"
__ecerePointer_Test3D->moving = 1;
#line 4611 "obj/debug.linux/colorSpheres.c"


#line 180 "colorSpheres.ec"
return 1;
#line 4616 "obj/debug.linux/colorSpheres.c"


#line 181 "colorSpheres.ec"
}
#line 4621 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_OnLeftButtonUp(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 184 "colorSpheres.ec"
{

#line 184 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4632 "obj/debug.linux/colorSpheres.c"


#line 185 "colorSpheres.ec"
if(__ecerePointer_Test3D->moving)

#line 186 "colorSpheres.ec"
{

#line 187 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture(this);
#line 4643 "obj/debug.linux/colorSpheres.c"


#line 188 "colorSpheres.ec"
__ecerePointer_Test3D->moving = 0;
#line 4648 "obj/debug.linux/colorSpheres.c"


#line 189 "colorSpheres.ec"
}
#line 4653 "obj/debug.linux/colorSpheres.c"

#line 4655 "obj/debug.linux/colorSpheres.c"


#line 190 "colorSpheres.ec"
return 1;
#line 4660 "obj/debug.linux/colorSpheres.c"


#line 191 "colorSpheres.ec"
}
#line 4665 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_OnMouseMove(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 194 "colorSpheres.ec"
{

#line 194 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4676 "obj/debug.linux/colorSpheres.c"


#line 195 "colorSpheres.ec"
if(__ecerePointer_Test3D->moving)

#line 196 "colorSpheres.ec"
{

#line 200 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct1;

#line 4688 "obj/debug.linux/colorSpheres.c"

#line 197 "colorSpheres.ec"
double __simpleStruct0;

#line 4693 "obj/debug.linux/colorSpheres.c"

#line 197 "colorSpheres.ec"
double time = __ecereFunction___ecereNameSpace__ecere__sys__GetTime(), diffTime = (__simpleStruct0 = time - __ecerePointer_Test3D->clickTime, (__simpleStruct0 > 0.01) ? __simpleStruct0 : 0.01);

#line 4698 "obj/debug.linux/colorSpheres.c"


#line 198 "colorSpheres.ec"
__ecerePointer_Test3D->spin.yaw += ((double)(__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians((double)(x - __ecerePointer_Test3D->startClick.x) / (25.0 * (double)(double)diffTime))));
#line 4703 "obj/debug.linux/colorSpheres.c"


#line 199 "colorSpheres.ec"
__ecerePointer_Test3D->spin.pitch += ((double)(__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians((double)(__ecerePointer_Test3D->startClick.y - y) / (25.0 * (double)(double)diffTime))));
#line 4708 "obj/debug.linux/colorSpheres.c"


#line 200 "colorSpheres.ec"
__ecerePointer_Test3D->startClick = (__simpleStruct1.x = x, __simpleStruct1.y = y, __simpleStruct1);
#line 4713 "obj/debug.linux/colorSpheres.c"


#line 201 "colorSpheres.ec"
__ecerePointer_Test3D->clickTime = time;
#line 4718 "obj/debug.linux/colorSpheres.c"


#line 202 "colorSpheres.ec"
}
#line 4723 "obj/debug.linux/colorSpheres.c"

#line 4725 "obj/debug.linux/colorSpheres.c"


#line 203 "colorSpheres.ec"
return 1;
#line 4730 "obj/debug.linux/colorSpheres.c"


#line 204 "colorSpheres.ec"
}
#line 4735 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_OnKeyHit(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 207 "colorSpheres.ec"
{

#line 207 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4746 "obj/debug.linux/colorSpheres.c"


#line 208 "colorSpheres.ec"
if(key == 0x104LL || key == 0x103LL)

#line 209 "colorSpheres.ec"
{

#line 215 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct4;

#line 4758 "obj/debug.linux/colorSpheres.c"

#line 215 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct3;

#line 4763 "obj/debug.linux/colorSpheres.c"

#line 215 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct2;

#line 4768 "obj/debug.linux/colorSpheres.c"

#line 215 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct1;

#line 4773 "obj/debug.linux/colorSpheres.c"

#line 210 "colorSpheres.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct0;

#line 4778 "obj/debug.linux/colorSpheres.c"

#line 210 "colorSpheres.ec"
int w = (int)(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size(this, &__simpleStruct0), __simpleStruct0).w;

#line 4783 "obj/debug.linux/colorSpheres.c"


#line 211 "colorSpheres.ec"
if(key == 0x104LL)

#line 212 "colorSpheres.ec"
w /= 1.1;
#line 4791 "obj/debug.linux/colorSpheres.c"

else 
#line 213 "colorSpheres.ec"
if(key == 0x103LL)

#line 214 "colorSpheres.ec"
w *= 1.1;
#line 4799 "obj/debug.linux/colorSpheres.c"

#line 4801 "obj/debug.linux/colorSpheres.c"

#line 4803 "obj/debug.linux/colorSpheres.c"


#line 215 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Move(this, (int)((__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position(this, &__simpleStruct1), __simpleStruct1.x + (__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size(this, &__simpleStruct2), __simpleStruct2.w / 2)) - w / 2), (int)((__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position(this, &__simpleStruct3), __simpleStruct3.y + (__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size(this, &__simpleStruct4), __simpleStruct4.h / 2)) - w / 2), w, w);
#line 4808 "obj/debug.linux/colorSpheres.c"


#line 216 "colorSpheres.ec"
}
#line 4813 "obj/debug.linux/colorSpheres.c"

#line 4815 "obj/debug.linux/colorSpheres.c"


#line 217 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 4820 "obj/debug.linux/colorSpheres.c"


#line 218 "colorSpheres.ec"
return 1;
#line 4825 "obj/debug.linux/colorSpheres.c"


#line 219 "colorSpheres.ec"
}
#line 4830 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_OnKeyDown(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 222 "colorSpheres.ec"
{

#line 222 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4841 "obj/debug.linux/colorSpheres.c"


#line 223 "colorSpheres.ec"
if(key == 0x1LL)

#line 223 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy(this, 0);
#line 4849 "obj/debug.linux/colorSpheres.c"

#line 4851 "obj/debug.linux/colorSpheres.c"


#line 224 "colorSpheres.ec"
return 1;
#line 4856 "obj/debug.linux/colorSpheres.c"


#line 225 "colorSpheres.ec"
}
#line 4861 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereConstructor_ColorSpheres(struct ColorSpheres * this)

#line 55 "colorSpheres.ec"
{

#line 55 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 4872 "obj/debug.linux/colorSpheres.c"

#line 55 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df __simpleStruct0 =
{

#line 55 "colorSpheres.ec"
100, 100, 100
}
#line 55 "colorSpheres.ec"
;

#line 4884 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
this->sphere = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere);
#line 4889 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(this), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(this), &__simpleStruct1), __simpleStruct1.scaling = __simpleStruct0, &__simpleStruct1));
#line 4894 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
(__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLat(this->sphere, (50 * 2 / ((4) - 1))), __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLon(this->sphere, (50 * 2 / ((4) - 1))));
#line 4899 "obj/debug.linux/colorSpheres.c"


#line 55 "colorSpheres.ec"
return 1;
#line 4904 "obj/debug.linux/colorSpheres.c"


#line 82 "colorSpheres.ec"
}
#line 4909 "obj/debug.linux/colorSpheres.c"


void __ecereDestructor_ColorSpheres(struct ColorSpheres * this)

#line 55 "colorSpheres.ec"
{

#line 55 "colorSpheres.ec"
((this->sphere ? __extension__ (
#line 52 "colorSpheres.ec"
{

#line 52 "colorSpheres.ec"
void * __ecerePtrToDelete = (this->sphere);

#line 4925 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 4930 "obj/debug.linux/colorSpheres.c"


#line 52 "colorSpheres.ec"
}
#line 4935 "obj/debug.linux/colorSpheres.c"
) : 0), this->sphere = 0);
#line 4937 "obj/debug.linux/colorSpheres.c"


#line 82 "colorSpheres.ec"
}
#line 4942 "obj/debug.linux/colorSpheres.c"


void __ecereDestructor_Test3D(struct __ecereNameSpace__ecere__com__Instance * this)

#line 221 "colorSpheres.ec"
{

#line 221 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4953 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
((__ecerePointer_Test3D->cube ? __extension__ (
#line 96 "colorSpheres.ec"
{

#line 96 "colorSpheres.ec"
void * __ecerePtrToDelete = (__ecerePointer_Test3D->cube);

#line 4964 "obj/debug.linux/colorSpheres.c"


#line 96 "colorSpheres.ec"
__ecereClass_ColorSpheres->Destructor ? __ecereClass_ColorSpheres->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 4969 "obj/debug.linux/colorSpheres.c"


#line 96 "colorSpheres.ec"
}
#line 4974 "obj/debug.linux/colorSpheres.c"
) : 0), __ecerePointer_Test3D->cube = 0);
#line 4976 "obj/debug.linux/colorSpheres.c"


#line 225 "colorSpheres.ec"
}
#line 4981 "obj/debug.linux/colorSpheres.c"


void __ecereDestroyModuleInstances_colorSpheres()

#line 22 "colorSpheres.ec"
{

#line 228 "colorSpheres.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(test3D), test3D = 0);
#line 4991 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
((specularLight ? __extension__ (
#line 37 "colorSpheres.ec"
{

#line 37 "colorSpheres.ec"
void * __ecerePtrToDelete = (specularLight);

#line 5002 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 5007 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
}
#line 5012 "obj/debug.linux/colorSpheres.c"
) : 0), specularLight = 0);
#line 5014 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(camera), camera = 0);
#line 5019 "obj/debug.linux/colorSpheres.c"


#line 28 "colorSpheres.ec"
}
#line 5024 "obj/debug.linux/colorSpheres.c"


void __ecereMethod_ColorSpheres_Create(struct ColorSpheres * this, struct __ecereNameSpace__ecere__com__Instance * displaySystem)

#line 56 "colorSpheres.ec"
{

#line 57 "colorSpheres.ec"
float x, y, z;

#line 5035 "obj/debug.linux/colorSpheres.c"


#line 58 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create(this->sphere, displaySystem);
#line 5040 "obj/debug.linux/colorSpheres.c"


#line 60 "colorSpheres.ec"
for(
#line 60 "colorSpheres.ec"
x = (float)(float)(-1);
#line 5047 "obj/debug.linux/colorSpheres.c"
 
#line 60 "colorSpheres.ec"
x <= (float)1;
#line 5051 "obj/debug.linux/colorSpheres.c"
 
#line 80 "colorSpheres.ec"
x += 2.0f / (float)((4) - 1))

#line 61 "colorSpheres.ec"
for(
#line 61 "colorSpheres.ec"
y = (float)(float)(-1);
#line 5060 "obj/debug.linux/colorSpheres.c"
 
#line 61 "colorSpheres.ec"
y <= (float)1;
#line 5064 "obj/debug.linux/colorSpheres.c"
 
#line 80 "colorSpheres.ec"
y += 2.0f / (float)((4) - 1))

#line 62 "colorSpheres.ec"
for(
#line 62 "colorSpheres.ec"
z = (float)(float)(-1);
#line 5073 "obj/debug.linux/colorSpheres.c"
 
#line 62 "colorSpheres.ec"
z <= (float)1;
#line 5077 "obj/debug.linux/colorSpheres.c"
 
#line 80 "colorSpheres.ec"
z += 2.0f / (float)((4) - 1))

#line 63 "colorSpheres.ec"
{

#line 68 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct6;

#line 5088 "obj/debug.linux/colorSpheres.c"

#line 67 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct5;

#line 5093 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct4;

#line 5098 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct3;

#line 5103 "obj/debug.linux/colorSpheres.c"

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct2;

#line 5108 "obj/debug.linux/colorSpheres.c"

#line 68 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df __simpleStruct1;

#line 5113 "obj/debug.linux/colorSpheres.c"

#line 67 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0;

#line 5118 "obj/debug.linux/colorSpheres.c"

#line 64 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * object = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Object);

#line 5123 "obj/debug.linux/colorSpheres.c"

#line 65 "colorSpheres.ec"
float scaling = 1.0f / ((float)((4) - 1) * ((float)1 + (0.75f)));

#line 5128 "obj/debug.linux/colorSpheres.c"


#line 66 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate(object, (void *)(this->sphere));
#line 5133 "obj/debug.linux/colorSpheres.c"


#line 67 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform(object, (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform(object, &__simpleStruct5), __simpleStruct5.position = (__simpleStruct0.x = x, __simpleStruct0.y = y, __simpleStruct0.z = z, __simpleStruct0), &__simpleStruct5));
#line 5138 "obj/debug.linux/colorSpheres.c"


#line 68 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform(object, (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform(object, &__simpleStruct6), __simpleStruct6.scaling = (__simpleStruct1.x = scaling, __simpleStruct1.y = scaling, __simpleStruct1.z = scaling, __simpleStruct1), &__simpleStruct6));
#line 5143 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material(object, __extension__ (
#line 69 "colorSpheres.ec"
{

#line 69 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * __ecereInstance1 = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Material);

#line 5154 "obj/debug.linux/colorSpheres.c"


#line 69 "colorSpheres.ec"
__ecereInstance1->opacity = 1, __ecereInstance1->diffuse = (__simpleStruct2.r = (x + (float)1) / 2.0f, __simpleStruct2.g = (y + (float)1) / 2.0f, __simpleStruct2.b = (z + (float)1) / 2.0f, __simpleStruct2), __ecereInstance1->ambient = (__simpleStruct3.r = (x + (float)1) / 2.0f, __simpleStruct3.g = (y + (float)1) / 2.0f, __simpleStruct3.b = (z + (float)1) / 2.0f, __simpleStruct3), __ecereInstance1->specular = (__simpleStruct4.r = 1.0000000000000000f, __simpleStruct4.g = 1.0000000000000000f, __simpleStruct4.b = 1.0000000000000000f, __simpleStruct4), __ecereInstance1->power = 32.0f, __ecereInstance1;
#line 5159 "obj/debug.linux/colorSpheres.c"


#line 76 "colorSpheres.ec"
}
#line 5164 "obj/debug.linux/colorSpheres.c"
)
#line 76 "colorSpheres.ec"
);
#line 5168 "obj/debug.linux/colorSpheres.c"


#line 77 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_AddMaterial(displaySystem, __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material(object));
#line 5173 "obj/debug.linux/colorSpheres.c"


#line 78 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency(__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh(object), object);
#line 5178 "obj/debug.linux/colorSpheres.c"


#line 79 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_AddName((void *)(this), object, (((void *)0)));
#line 5183 "obj/debug.linux/colorSpheres.c"


#line 80 "colorSpheres.ec"
}
#line 5188 "obj/debug.linux/colorSpheres.c"

#line 5190 "obj/debug.linux/colorSpheres.c"

#line 5192 "obj/debug.linux/colorSpheres.c"

#line 5194 "obj/debug.linux/colorSpheres.c"


#line 81 "colorSpheres.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(this));
#line 5199 "obj/debug.linux/colorSpheres.c"


#line 82 "colorSpheres.ec"
}
#line 5204 "obj/debug.linux/colorSpheres.c"


void __ecereCreateModuleInstances_colorSpheres()

#line 22 "colorSpheres.ec"
{

#line 37 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct5;

#line 5215 "obj/debug.linux/colorSpheres.c"

#line 37 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct4;

#line 5220 "obj/debug.linux/colorSpheres.c"

#line 37 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx__Light __simpleStruct3 =
{

#line 37 "colorSpheres.ec"
0,
{

#line 37 "colorSpheres.ec"
0, 0, 0
}
#line 37 "colorSpheres.ec"
,
{

#line 37 "colorSpheres.ec"
0, 0, 0
}
#line 37 "colorSpheres.ec"
,
{

#line 37 "colorSpheres.ec"
0, 0, 0
}
#line 37 "colorSpheres.ec"
,
{

#line 37 "colorSpheres.ec"
0, 0, 0
}
#line 37 "colorSpheres.ec"
,
{

#line 37 "colorSpheres.ec"
0, 0, 0, 0
}
#line 37 "colorSpheres.ec"
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
}
#line 37 "colorSpheres.ec"
;

#line 5267 "obj/debug.linux/colorSpheres.c"

#line 37 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct2 =
{

#line 37 "colorSpheres.ec"

{

#line 37 "colorSpheres.ec"
0, 0, 0
}
#line 37 "colorSpheres.ec"
,
{

#line 37 "colorSpheres.ec"
0, 0, 0, 0
}
#line 37 "colorSpheres.ec"
,
{

#line 37 "colorSpheres.ec"
1, 1, 1
}
#line 37 "colorSpheres.ec"

}
#line 37 "colorSpheres.ec"
;

#line 5300 "obj/debug.linux/colorSpheres.c"

#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 5305 "obj/debug.linux/colorSpheres.c"

#line 22 "colorSpheres.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0 =
{

#line 22 "colorSpheres.ec"
0, 0, (float)(float)(-405) - (float)200 / ((float)((4) - 1) * ((float)1 + (0.75f)))
}
#line 22 "colorSpheres.ec"
;

#line 5317 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
(camera = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type(camera, 0), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, &__simpleStruct0), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation(camera, (__simpleStruct1.w = 1.0000000000000000, __simpleStruct1.x = 0.0000000000000000, __simpleStruct1.y = 0.0000000000000000, __simpleStruct1.z = 0.0000000000000000, &__simpleStruct1)), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov(camera, 0.9250245035569946));
#line 5322 "obj/debug.linux/colorSpheres.c"


#line 22 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(camera);
#line 5327 "obj/debug.linux/colorSpheres.c"


#line 37 "colorSpheres.ec"
(specularLight = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Object), __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform(specularLight, &__simpleStruct2), __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_flags(specularLight, ((((unsigned int)(1)) << 8))), __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_light(specularLight, (__simpleStruct3.multiplier = 1, __simpleStruct3.diffuse = (__simpleStruct4.r = 1.0000000000000000f, __simpleStruct4.g = 1.0000000000000000f, __simpleStruct4.b = 1.0000000000000000f, __simpleStruct4), __simpleStruct3.specular = (__simpleStruct5.r = 1.0000000000000000f, __simpleStruct5.g = 1.0000000000000000f, __simpleStruct5.b = 1.0000000000000000f, __simpleStruct5), __simpleStruct3.lightObject = specularLight, &__simpleStruct3)));
#line 5332 "obj/debug.linux/colorSpheres.c"


#line 228 "colorSpheres.ec"
test3D = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_Test3D);
#line 5337 "obj/debug.linux/colorSpheres.c"


#line 228 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(test3D);
#line 5342 "obj/debug.linux/colorSpheres.c"


#line 28 "colorSpheres.ec"
}
#line 5347 "obj/debug.linux/colorSpheres.c"


void __ecereUnregisterModule_colorSpheres(struct __ecereNameSpace__ecere__com__Instance * module)

#line 221 "colorSpheres.ec"
{


#line 225 "colorSpheres.ec"
}
#line 5358 "obj/debug.linux/colorSpheres.c"


unsigned int __ecereMethod_Test3D_OnLoadGraphics(struct __ecereNameSpace__ecere__com__Instance * this)

#line 133 "colorSpheres.ec"
{

#line 133 "colorSpheres.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 5369 "obj/debug.linux/colorSpheres.c"


#line 134 "colorSpheres.ec"
__ecereMethod_ColorSpheres_Create(__ecerePointer_Test3D->cube, __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 5374 "obj/debug.linux/colorSpheres.c"


#line 135 "colorSpheres.ec"
return 1;
#line 5379 "obj/debug.linux/colorSpheres.c"


#line 136 "colorSpheres.ec"
}
#line 5384 "obj/debug.linux/colorSpheres.c"


void __ecereRegisterModule_colorSpheres(struct __ecereNameSpace__ecere__com__Instance * module)

#line 221 "colorSpheres.ec"
{

#line 221 "colorSpheres.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 5395 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterDefine("numSpheres", "4", module, 2);
#line 5400 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterDefine("spacing", "0.75f", module, 2);
#line 5405 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "ColorSpheresApp", "ecere::gui::GuiApplication", 0, 0, (void *)__ecereConstructor_ColorSpheresApp, (void *)0, module, 2, 1);
#line 5410 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 15 "colorSpheres.ec"
__ecereClass_ColorSpheresApp = class;
#line 5418 "obj/debug.linux/colorSpheres.c"

#line 5420 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Cycle", 0, __ecereMethod_ColorSpheresApp_Cycle, 1);
#line 5425 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "ColorSpheres", "ecere::gfx3D::Object", sizeof(struct ColorSpheres), 0, (void *)__ecereConstructor_ColorSpheres, (void *)__ecereDestructor_ColorSpheres, module, 2, 1);
#line 5430 "obj/debug.linux/colorSpheres.c"


#line 15 "colorSpheres.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 15 "colorSpheres.ec"
__ecereClass_ColorSpheres = class;
#line 5438 "obj/debug.linux/colorSpheres.c"

#line 5440 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "Test3D", "ecere::gui::Window", sizeof(struct Test3D), 0, (void *)__ecereConstructor_Test3D, (void *)__ecereDestructor_Test3D, module, 2, 1);
#line 5445 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 221 "colorSpheres.ec"
__ecereClass_Test3D = class;
#line 5453 "obj/debug.linux/colorSpheres.c"

#line 5455 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnResize", 0, __ecereMethod_Test3D_OnResize, 1);
#line 5460 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLoadGraphics", 0, __ecereMethod_Test3D_OnLoadGraphics, 1);
#line 5465 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRedraw", 0, __ecereMethod_Test3D_OnRedraw, 1);
#line 5470 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyDown", 0, __ecereMethod_Test3D_OnKeyDown, 1);
#line 5475 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyHit", 0, __ecereMethod_Test3D_OnKeyHit, 1);
#line 5480 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnMouseMove", 0, __ecereMethod_Test3D_OnMouseMove, 1);
#line 5485 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonDown", 0, __ecereMethod_Test3D_OnLeftButtonDown, 1);
#line 5490 "obj/debug.linux/colorSpheres.c"


#line 221 "colorSpheres.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonUp", 0, __ecereMethod_Test3D_OnLeftButtonUp, 1);
#line 5495 "obj/debug.linux/colorSpheres.c"


#line 225 "colorSpheres.ec"
}
#line 5500 "obj/debug.linux/colorSpheres.c"


