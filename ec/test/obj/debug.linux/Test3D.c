/* Code generated from eC source file: Test3D.ec */
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

#line 55 "obj/debug.linux/Test3D.c"


#line 32 "/usr/include/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/Test3D.c"


#line 33 "/usr/include/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/Test3D.c"


#line 34 "/usr/include/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/Test3D.c"


#line 37 "/usr/include/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/Test3D.c"


#line 38 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/Test3D.c"


#line 39 "/usr/include/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/Test3D.c"


#line 40 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/Test3D.c"


#line 41 "/usr/include/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/Test3D.c"


#line 42 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/Test3D.c"


#line 44 "/usr/include/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/Test3D.c"


#line 45 "/usr/include/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/Test3D.c"


#line 52 "/usr/include/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/Test3D.c"


#line 53 "/usr/include/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/Test3D.c"


#line 54 "/usr/include/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/Test3D.c"


#line 55 "/usr/include/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/Test3D.c"


#line 56 "/usr/include/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/Test3D.c"


#line 57 "/usr/include/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/Test3D.c"


#line 58 "/usr/include/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/Test3D.c"


#line 59 "/usr/include/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/Test3D.c"


#line 63 "/usr/include/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/Test3D.c"


#line 64 "/usr/include/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/Test3D.c"


#line 72 "/usr/include/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/Test3D.c"


#line 73 "/usr/include/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/Test3D.c"


#line 145 "/usr/include/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/Test3D.c"


#line 146 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/Test3D.c"


#line 147 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/Test3D.c"


#line 148 "/usr/include/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/Test3D.c"


#line 149 "/usr/include/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/Test3D.c"


#line 150 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/Test3D.c"


#line 151 "/usr/include/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/Test3D.c"


#line 152 "/usr/include/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/Test3D.c"


#line 153 "/usr/include/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/Test3D.c"


#line 154 "/usr/include/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/Test3D.c"


#line 155 "/usr/include/bits/types.h"
typedef struct
{

#line 155 "/usr/include/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/Test3D.c"


#line 156 "/usr/include/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/Test3D.c"


#line 157 "/usr/include/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/Test3D.c"


#line 158 "/usr/include/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/Test3D.c"


#line 159 "/usr/include/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/Test3D.c"


#line 160 "/usr/include/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/Test3D.c"


#line 161 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/Test3D.c"


#line 162 "/usr/include/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/Test3D.c"


#line 164 "/usr/include/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/Test3D.c"


#line 165 "/usr/include/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/Test3D.c"


#line 168 "/usr/include/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/Test3D.c"


#line 171 "/usr/include/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/Test3D.c"


#line 174 "/usr/include/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/Test3D.c"


#line 179 "/usr/include/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/Test3D.c"


#line 180 "/usr/include/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/Test3D.c"


#line 183 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/Test3D.c"


#line 184 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/Test3D.c"


#line 187 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/Test3D.c"


#line 188 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/Test3D.c"


#line 191 "/usr/include/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/Test3D.c"


#line 193 "/usr/include/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/Test3D.c"


#line 196 "/usr/include/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/Test3D.c"


#line 198 "/usr/include/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/Test3D.c"


#line 202 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/Test3D.c"


#line 203 "/usr/include/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/Test3D.c"


#line 206 "/usr/include/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/Test3D.c"


#line 209 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/Test3D.c"


#line 214 "/usr/include/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/Test3D.c"


#line 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/Test3D.c"


#line 25 "/usr/include/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/Test3D.c"


#line 26 "/usr/include/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/Test3D.c"


#line 27 "/usr/include/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/Test3D.c"


#line 24 "/usr/include/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/Test3D.c"


#line 25 "/usr/include/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/Test3D.c"


#line 26 "/usr/include/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/Test3D.c"


#line 27 "/usr/include/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/Test3D.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/Test3D.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/Test3D.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/Test3D.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/Test3D.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/Test3D.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/Test3D.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/Test3D.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/Test3D.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/Test3D.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/Test3D.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/Test3D.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/Test3D.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/Test3D.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/Test3D.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/Test3D.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/Test3D.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/Test3D.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/Test3D.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/Test3D.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/Test3D.c"


#line 33 "/usr/include/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/Test3D.c"


#line 34 "/usr/include/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/Test3D.c"


#line 35 "/usr/include/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/Test3D.c"


#line 36 "/usr/include/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/Test3D.c"


#line 37 "/usr/include/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/Test3D.c"


#line 38 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/Test3D.c"


#line 39 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/Test3D.c"


#line 42 "/usr/include/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/Test3D.c"


#line 47 "/usr/include/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/Test3D.c"


#line 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/Test3D.c"


#line 64 "/usr/include/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/Test3D.c"


#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/Test3D.c"


#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/Test3D.c"


#line 79 "/usr/include/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/Test3D.c"


#line 85 "/usr/include/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/Test3D.c"


#line 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/Test3D.c"


#line 103 "/usr/include/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/Test3D.c"


#line 108 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/Test3D.c"


#line 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/Test3D.c"


#line 115 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/Test3D.c"


#line 121 "/usr/include/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/Test3D.c"


#line 7 "/usr/include/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/Test3D.c"


#line 7 "/usr/include/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/Test3D.c"


#line 7 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/Test3D.c"


#line 7 "/usr/include/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/Test3D.c"


#line 209 "/usr/lib/gcc/x86_64-pc-linux-gnu/9.1.0/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/Test3D.c"


#line 148 "/usr/include/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/Test3D.c"


#line 149 "/usr/include/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/Test3D.c"


#line 150 "/usr/include/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/Test3D.c"


#line 158 "/usr/include/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/Test3D.c"


#line 159 "/usr/include/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/Test3D.c"


#line 160 "/usr/include/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/Test3D.c"


#line 161 "/usr/include/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/Test3D.c"


#line 164 "/usr/include/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/Test3D.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/bits/byteswap.h"
{

#line 37 "/usr/include/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/Test3D.c"


#line 41 "/usr/include/bits/byteswap.h"
}
#line 814 "obj/debug.linux/Test3D.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/bits/byteswap.h"
{

#line 52 "/usr/include/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/Test3D.c"


#line 56 "/usr/include/bits/byteswap.h"
}
#line 829 "obj/debug.linux/Test3D.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/bits/byteswap.h"
{

#line 73 "/usr/include/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/Test3D.c"


#line 77 "/usr/include/bits/byteswap.h"
}
#line 844 "obj/debug.linux/Test3D.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/bits/uintn-identity.h"
{

#line 35 "/usr/include/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/Test3D.c"


#line 36 "/usr/include/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/Test3D.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/bits/uintn-identity.h"
{

#line 41 "/usr/include/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/Test3D.c"


#line 42 "/usr/include/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/Test3D.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/bits/uintn-identity.h"
{

#line 47 "/usr/include/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/Test3D.c"


#line 48 "/usr/include/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/Test3D.c"



#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/Test3D.c"


#line 7 "/usr/include/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/Test3D.c"


#line 8 "/usr/include/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/Test3D.c"

#line 11 "/usr/include/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/Test3D.c"


#line 9 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{

#line 11 "/usr/include/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/Test3D.c"

#line 12 "/usr/include/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/Test3D.c"


#line 43 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/Test3D.c"


#line 49 "/usr/include/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/Test3D.c"


#line 59 "/usr/include/sys/select.h"
typedef struct
{

#line 67 "/usr/include/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/Test3D.c"


#line 77 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/Test3D.c"


#line 101 "/usr/include/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/Test3D.c"


#line 113 "/usr/include/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/Test3D.c"


#line 185 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/Test3D.c"


#line 192 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/Test3D.c"


#line 196 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/Test3D.c"


#line 200 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/Test3D.c"


#line 65 "/usr/include/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t
{

#line 67 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __readers;

#line 1022 "obj/debug.linux/Test3D.c"

#line 68 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers;

#line 1027 "obj/debug.linux/Test3D.c"

#line 69 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __wrphase_futex;

#line 1032 "obj/debug.linux/Test3D.c"

#line 70 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers_futex;

#line 1037 "obj/debug.linux/Test3D.c"

#line 71 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad3;

#line 1042 "obj/debug.linux/Test3D.c"

#line 72 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad4;

#line 1047 "obj/debug.linux/Test3D.c"

#line 74 "/usr/include/bits/pthreadtypes-arch.h"
int __cur_writer;

#line 1052 "obj/debug.linux/Test3D.c"

#line 75 "/usr/include/bits/pthreadtypes-arch.h"
int __shared;

#line 1057 "obj/debug.linux/Test3D.c"

#line 76 "/usr/include/bits/pthreadtypes-arch.h"
signed char __rwelision;

#line 1062 "obj/debug.linux/Test3D.c"

#line 81 "/usr/include/bits/pthreadtypes-arch.h"
unsigned char __pad1[7];

#line 1067 "obj/debug.linux/Test3D.c"

#line 84 "/usr/include/bits/pthreadtypes-arch.h"
unsigned long int __pad2;

#line 1072 "obj/debug.linux/Test3D.c"

#line 87 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __flags;

#line 1077 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1080 "obj/debug.linux/Test3D.c"


#line 82 "/usr/include/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 84 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1090 "obj/debug.linux/Test3D.c"

#line 85 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1095 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __pthread_list_t;

#line 1098 "obj/debug.linux/Test3D.c"


#line 118 "/usr/include/bits/thread-shared-types.h"
struct __pthread_mutex_s
{

#line 120 "/usr/include/bits/thread-shared-types.h"
int __lock;

#line 1108 "obj/debug.linux/Test3D.c"

#line 121 "/usr/include/bits/thread-shared-types.h"
unsigned int __count;

#line 1113 "obj/debug.linux/Test3D.c"

#line 122 "/usr/include/bits/thread-shared-types.h"
int __owner;

#line 1118 "obj/debug.linux/Test3D.c"

#line 124 "/usr/include/bits/thread-shared-types.h"
unsigned int __nusers;

#line 1123 "obj/debug.linux/Test3D.c"

#line 148 "/usr/include/bits/thread-shared-types.h"
int __kind;

#line 1128 "obj/debug.linux/Test3D.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __spins;

#line 1133 "obj/debug.linux/Test3D.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __elision;

#line 1138 "obj/debug.linux/Test3D.c"

#line 155 "/usr/include/bits/thread-shared-types.h"
__pthread_list_t __list;

#line 1143 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1146 "obj/debug.linux/Test3D.c"


#line 171 "/usr/include/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 173 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 175 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1160 "obj/debug.linux/Test3D.c"

#line 176 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 178 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1169 "obj/debug.linux/Test3D.c"

#line 179 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1174 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __wseq32;

#line 1177 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1180 "obj/debug.linux/Test3D.c"

#line 182 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 184 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1189 "obj/debug.linux/Test3D.c"

#line 185 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 187 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1198 "obj/debug.linux/Test3D.c"

#line 188 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1203 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __g1_start32;

#line 1206 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1209 "obj/debug.linux/Test3D.c"

#line 191 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1214 "obj/debug.linux/Test3D.c"

#line 192 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1219 "obj/debug.linux/Test3D.c"

#line 193 "/usr/include/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1224 "obj/debug.linux/Test3D.c"

#line 194 "/usr/include/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1229 "obj/debug.linux/Test3D.c"

#line 195 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1234 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1237 "obj/debug.linux/Test3D.c"


#line 27 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1243 "obj/debug.linux/Test3D.c"


#line 32 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1253 "obj/debug.linux/Test3D.c"

#line 35 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1258 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1261 "obj/debug.linux/Test3D.c"


#line 41 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1271 "obj/debug.linux/Test3D.c"

#line 44 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1276 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1279 "obj/debug.linux/Test3D.c"


#line 49 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1285 "obj/debug.linux/Test3D.c"


#line 53 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1291 "obj/debug.linux/Test3D.c"


#line 56 "/usr/include/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1301 "obj/debug.linux/Test3D.c"

#line 59 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1306 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1309 "obj/debug.linux/Test3D.c"


#line 62 "/usr/include/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1315 "obj/debug.linux/Test3D.c"


#line 67 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1325 "obj/debug.linux/Test3D.c"

#line 70 "/usr/include/bits/pthreadtypes.h"
char __size[40];

#line 1330 "obj/debug.linux/Test3D.c"

#line 71 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1335 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1338 "obj/debug.linux/Test3D.c"


#line 75 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1348 "obj/debug.linux/Test3D.c"

#line 78 "/usr/include/bits/pthreadtypes.h"
char __size[48];

#line 1353 "obj/debug.linux/Test3D.c"

#line 79 "/usr/include/bits/pthreadtypes.h"
 long long int __align;

#line 1358 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_cond_t;

#line 1361 "obj/debug.linux/Test3D.c"


#line 86 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1371 "obj/debug.linux/Test3D.c"

#line 89 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1376 "obj/debug.linux/Test3D.c"

#line 90 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1381 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1384 "obj/debug.linux/Test3D.c"


#line 93 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/bits/pthreadtypes.h"
char __size[8];

#line 1394 "obj/debug.linux/Test3D.c"

#line 96 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1399 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1402 "obj/debug.linux/Test3D.c"


#line 103 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1408 "obj/debug.linux/Test3D.c"


#line 108 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/bits/pthreadtypes.h"
char __size[32];

#line 1418 "obj/debug.linux/Test3D.c"

#line 111 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1423 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1426 "obj/debug.linux/Test3D.c"


#line 114 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1436 "obj/debug.linux/Test3D.c"

#line 117 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1441 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1444 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 1450 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_text;

#line 1456 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 1462 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 1468 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;

#line 1474 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;

#line 1480 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;

#line 1486 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 1492 "obj/debug.linux/Test3D.c"


#line 42 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_fileName;

#line 1498 "obj/debug.linux/Test3D.c"


#line 42 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_window;

#line 1504 "obj/debug.linux/Test3D.c"


#line 50 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 1510 "obj/debug.linux/Test3D.c"


#line 51 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;

#line 1516 "obj/debug.linux/Test3D.c"


#line 52 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 1522 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_bitmap;

#line 1528 "obj/debug.linux/Test3D.c"


#line 79 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 1534 "obj/debug.linux/Test3D.c"


#line 81 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 1540 "obj/debug.linux/Test3D.c"


#line 116 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 1546 "obj/debug.linux/Test3D.c"


#line 133 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 1552 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1558 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 5 "Test3D.ec"
void *  first;

#line 1568 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  last;

#line 1573 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int count;

#line 1578 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int offset;

#line 1583 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int circ;

#line 1588 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1591 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 5 "Test3D.ec"
union
{

#line 5 "Test3D.ec"
char c;

#line 1605 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned char uc;

#line 1610 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
short s;

#line 1615 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned short us;

#line 1620 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int i;

#line 1625 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int ui;

#line 1630 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  p;

#line 1635 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
float f;

#line 1640 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
double d;

#line 1645 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
long long i64;

#line 1650 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
uint64 ui64;

#line 1655 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __anon1;

#line 1658 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1661 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 139 "Test3D.ec"
unsigned char *  _buffer;

#line 1671 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
size_t count;

#line 1676 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
size_t _size;

#line 1681 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
size_t pos;

#line 1686 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1689 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 1695 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 1701 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 1707 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 1713 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 1719 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D
{

#line 9 "Test3D.ec"
double x;

#line 1729 "obj/debug.linux/Test3D.c"

#line 9 "Test3D.ec"
double y;

#line 1734 "obj/debug.linux/Test3D.c"

#line 9 "Test3D.ec"
double z;

#line 1739 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1742 "obj/debug.linux/Test3D.c"


#line 13 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler
{

#line 13 "Test3D.ec"
double yaw;

#line 1752 "obj/debug.linux/Test3D.c"

#line 13 "Test3D.ec"
double pitch;

#line 1757 "obj/debug.linux/Test3D.c"

#line 13 "Test3D.ec"
double roll;

#line 1762 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1765 "obj/debug.linux/Test3D.c"


#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB
{

#line 17 "Test3D.ec"
float r;

#line 1775 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
float g;

#line 1780 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
float b;

#line 1785 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1788 "obj/debug.linux/Test3D.c"


#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion
{

#line 17 "Test3D.ec"
double w;

#line 1798 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double x;

#line 1803 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double y;

#line 1808 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double z;

#line 1813 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1816 "obj/debug.linux/Test3D.c"


#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Object;

#line 1822 "obj/debug.linux/Test3D.c"


#line 43 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere;

#line 1828 "obj/debug.linux/Test3D.c"


#line 44 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 1834 "obj/debug.linux/Test3D.c"


#line 88 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point
{

#line 88 "Test3D.ec"
int x;

#line 1844 "obj/debug.linux/Test3D.c"

#line 88 "Test3D.ec"
int y;

#line 1849 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1852 "obj/debug.linux/Test3D.c"


#line 39 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Size
{

#line 39 "Test3D.ec"
int w;

#line 1862 "obj/debug.linux/Test3D.c"

#line 39 "Test3D.ec"
int h;

#line 1867 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1870 "obj/debug.linux/Test3D.c"


#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df
{

#line 52 "Test3D.ec"
float x;

#line 1880 "obj/debug.linux/Test3D.c"

#line 52 "Test3D.ec"
float y;

#line 1885 "obj/debug.linux/Test3D.c"

#line 52 "Test3D.ec"
float z;

#line 1890 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1893 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__DisplaySystem
{

#line 56 "Test3D.ec"
unsigned char __ecerePrivateData0[24];

#line 1903 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
int pixelFormat;

#line 1908 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int flags;

#line 1913 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
char __ecere_padding3[160];

#line 1918 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1921 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__drivers__Shader
{

#line 56 "Test3D.ec"
unsigned char __ecerePrivateData0[24];

#line 1931 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
uint64 state;

#line 1936 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int modifiedUniforms;

#line 1941 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
char __ecere_padding2[44];

#line 1946 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1949 "obj/debug.linux/Test3D.c"


#line 85 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Box
{

#line 85 "Test3D.ec"
int left;

#line 1959 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
int top;

#line 1964 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
int right;

#line 1969 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
int bottom;

#line 1974 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 1977 "obj/debug.linux/Test3D.c"


#line 94 "Test3D.ec"
extern double (* __ecereFunction___ecereNameSpace__ecere__sys__GetTime)(void);

#line 1983 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 1989 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 1995 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 2001 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2007 "obj/debug.linux/Test3D.c"


#line 51 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Mesh;

#line 2013 "obj/debug.linux/Test3D.c"


#line 79 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Display
{

#line 79 "Test3D.ec"
int width;

#line 2023 "obj/debug.linux/Test3D.c"

#line 79 "Test3D.ec"
int height;

#line 2028 "obj/debug.linux/Test3D.c"

#line 79 "Test3D.ec"
void *  driverData;

#line 2033 "obj/debug.linux/Test3D.c"

#line 79 "Test3D.ec"
char __ecere_padding1[64];

#line 2038 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2041 "obj/debug.linux/Test3D.c"


#line 116 "Test3D.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians)(double this);

#line 2047 "obj/debug.linux/Test3D.c"


#line 116 "Test3D.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians)(double value);

#line 2053 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Camera
{

#line 9 "Test3D.ec"
unsigned char __ecerePrivateData0[24];

#line 2063 "obj/debug.linux/Test3D.c"

#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 2068 "obj/debug.linux/Test3D.c"

#line 9 "Test3D.ec"
char __ecere_padding1[1056];

#line 2073 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2076 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * camera;

#line 2082 "obj/debug.linux/Test3D.c"


#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Light
{

#line 17 "Test3D.ec"
unsigned int flags;

#line 2092 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 2097 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 2102 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 2107 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D direction;

#line 2112 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 2117 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * lightObject;

#line 2122 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * target;

#line 2127 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double fallOff;

#line 2132 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double hotSpot;

#line 2137 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
float Kc;

#line 2142 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
float Kl;

#line 2147 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
float Kq;

#line 2152 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double start;

#line 2157 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
double end;

#line 2162 "obj/debug.linux/Test3D.c"

#line 17 "Test3D.ec"
float multiplier;

#line 2167 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2170 "obj/debug.linux/Test3D.c"


#line 54 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2176 "obj/debug.linux/Test3D.c"


#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform
{

#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 2186 "obj/debug.linux/Test3D.c"

#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 2191 "obj/debug.linux/Test3D.c"

#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df scaling;

#line 2196 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2199 "obj/debug.linux/Test3D.c"


#line 85 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Surface
{

#line 85 "Test3D.ec"
int width;

#line 2209 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
int height;

#line 2214 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point offset;

#line 2219 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Box box;

#line 2224 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Box unclippedBox;

#line 2229 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
void *  driverData;

#line 2234 "obj/debug.linux/Test3D.c"

#line 85 "Test3D.ec"
char __ecere_padding1[64];

#line 2239 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2242 "obj/debug.linux/Test3D.c"


#line 51 "Test3D.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Mesh * (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2248 "obj/debug.linux/Test3D.c"


#line 51 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Mesh * value);

#line 2254 "obj/debug.linux/Test3D.c"


#line 60 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency)(struct __ecereNameSpace__ecere__gfx3D__Mesh * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 2260 "obj/debug.linux/Test3D.c"


#line 17 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Light light =
{

#line 17 "Test3D.ec"
0,
{

#line 17 "Test3D.ec"
0, 0, 0
}
#line 17 "Test3D.ec"
,
{

#line 17 "Test3D.ec"
0, 0, 0
}
#line 17 "Test3D.ec"
,
{

#line 17 "Test3D.ec"
1.0000000000000000f, 1.0000000000000000f, 1.0000000000000000f
}
#line 17 "Test3D.ec"
,
{

#line 17 "Test3D.ec"
0, 0, 0
}
#line 17 "Test3D.ec"
,
{

#line 17 "Test3D.ec"
0.9622501868990583, 0.0841859828293692, 0.2578341604962995, 0.0225575661131498
}
#line 17 "Test3D.ec"
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
}
#line 17 "Test3D.ec"
;

#line 2308 "obj/debug.linux/Test3D.c"


#line 24 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Light light2 =
{

#line 24 "Test3D.ec"
0,
{

#line 24 "Test3D.ec"
0, 0, 0
}
#line 24 "Test3D.ec"
,
{

#line 24 "Test3D.ec"
1.0000000000000000f, 1.0000000000000000f, 1.0000000000000000f
}
#line 24 "Test3D.ec"
,
{

#line 24 "Test3D.ec"
0, 0, 0
}
#line 24 "Test3D.ec"
,
{

#line 24 "Test3D.ec"
0, 0, 0
}
#line 24 "Test3D.ec"
,
{

#line 24 "Test3D.ec"
0.9512512425641977, 0.1677312594965206, -0.2548870022441788, -0.0449434555275478
}
#line 24 "Test3D.ec"
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
}
#line 24 "Test3D.ec"
;

#line 2356 "obj/debug.linux/Test3D.c"


#line 52 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 2362 "obj/debug.linux/Test3D.c"


#line 52 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 2368 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2374 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 5 "Test3D.ec"
void * *  _vTbl;

#line 2384 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2389 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int _refCount;

#line 2394 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2397 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2403 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2409 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

#line 2415 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2421 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2427 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2433 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2439 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_text)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2445 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_text)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2451 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2457 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2463 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2469 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2475 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2481 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2487 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2493 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2499 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2505 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2511 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2517 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2523 "obj/debug.linux/Test3D.c"


#line 42 "Test3D.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_fileName)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2529 "obj/debug.linux/Test3D.c"


#line 42 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_fileName)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2535 "obj/debug.linux/Test3D.c"


#line 42 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_window)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 2541 "obj/debug.linux/Test3D.c"


#line 42 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2547 "obj/debug.linux/Test3D.c"


#line 50 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2553 "obj/debug.linux/Test3D.c"


#line 50 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create)(struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere * this, struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 2559 "obj/debug.linux/Test3D.c"


#line 58 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)(struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * this, struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 2565 "obj/debug.linux/Test3D.c"


#line 70 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)(struct __ecereNameSpace__ecere__com__Instance * this, int width, int height, struct __ecereNameSpace__ecere__sys__Point * origin);

#line 2571 "obj/debug.linux/Test3D.c"


#line 76 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition)(struct __ecereNameSpace__ecere__com__Instance * this, int *  x, int *  y);

#line 2577 "obj/debug.linux/Test3D.c"


#line 77 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)(struct __ecereNameSpace__ecere__com__Instance * this, int type);

#line 2583 "obj/debug.linux/Test3D.c"


#line 78 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();

#line 2589 "obj/debug.linux/Test3D.c"


#line 79 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2595 "obj/debug.linux/Test3D.c"


#line 79 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)(struct __ecereNameSpace__ecere__com__Instance * this, int id, struct __ecereNameSpace__ecere__gfx__Light * light);

#line 2601 "obj/debug.linux/Test3D.c"


#line 81 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 2607 "obj/debug.linux/Test3D.c"


#line 82 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface, struct __ecereNameSpace__ecere__com__Instance * camera);

#line 2613 "obj/debug.linux/Test3D.c"


#line 83 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 2619 "obj/debug.linux/Test3D.c"


#line 95 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2625 "obj/debug.linux/Test3D.c"


#line 105 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();

#line 2631 "obj/debug.linux/Test3D.c"


#line 133 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 2637 "obj/debug.linux/Test3D.c"


#line 133 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 2643 "obj/debug.linux/Test3D.c"


#line 133 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Move)(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, int w, int h);

#line 2649 "obj/debug.linux/Test3D.c"


#line 135 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)(struct __ecereNameSpace__ecere__com__Instance * this, const struct __ecereNameSpace__ecere__sys__Box * region);

#line 2655 "obj/debug.linux/Test3D.c"


#line 141 "Test3D.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)(struct __ecereNameSpace__ecere__com__Instance * this, long long code);

#line 2661 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern int (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2667 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type)(struct __ecereNameSpace__ecere__com__Instance * this, int value);

#line 2673 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 2679 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 2685 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2691 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2697 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2703 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov)(struct __ecereNameSpace__ecere__com__Instance * this, double value);

#line 2709 "obj/debug.linux/Test3D.c"

unsigned int __ecereConstructor_MyApp(struct __ecereNameSpace__ecere__com__Instance * this)

#line 5 "Test3D.ec"
{

#line 5 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver(this, "OpenGL");
#line 2718 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
return 1;
#line 2723 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
}
#line 2728 "obj/debug.linux/Test3D.c"



#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 2735 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 2745 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int count;

#line 2750 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2755 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void (*  FreeKey)(void *  key);

#line 2760 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2763 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Material;

#line 2769 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
struct Test3D
{

#line 40 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler spin;

#line 2779 "obj/debug.linux/Test3D.c"

#line 42 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * texture;

#line 2784 "obj/debug.linux/Test3D.c"

#line 43 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Sphere * sphere;

#line 2789 "obj/debug.linux/Test3D.c"

#line 44 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * cube;

#line 2794 "obj/debug.linux/Test3D.c"

#line 45 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * sphereMat;

#line 2799 "obj/debug.linux/Test3D.c"

#line 46 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * cubeMat;

#line 2804 "obj/debug.linux/Test3D.c"

#line 88 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point startClick;

#line 2809 "obj/debug.linux/Test3D.c"

#line 89 "Test3D.ec"
unsigned int moving;

#line 2814 "obj/debug.linux/Test3D.c"

#line 90 "Test3D.ec"
double clickTime;

#line 2819 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2822 "obj/debug.linux/Test3D.c"


#line 51 "Test3D.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial)(struct __ecereNameSpace__ecere__gfx3D__Mesh * this, struct __ecereNameSpace__ecere__gfx3D__Material * material);

#line 2828 "obj/debug.linux/Test3D.c"


#line 146 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * test3D;

#line 2834 "obj/debug.linux/Test3D.c"

void __ecereDestroyModuleInstances_Test3D()

#line 9 "Test3D.ec"
{

#line 146 "Test3D.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(test3D), test3D = 0);
#line 2843 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(camera), camera = 0);
#line 2848 "obj/debug.linux/Test3D.c"


#line 15 "Test3D.ec"
}
#line 2853 "obj/debug.linux/Test3D.c"



#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 2860 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 2870 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 2875 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
const char *  name;

#line 2880 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int isProperty;

#line 2885 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int memberAccess;

#line 2890 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int id;

#line 2895 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2900 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
const char *  dataTypeString;

#line 2905 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2910 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2915 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int type;

#line 2920 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int offset;

#line 2925 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int memberID;

#line 2930 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 2935 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 2940 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int memberOffset;

#line 2945 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
short structAlignment;

#line 2950 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
short pointerAlignment;

#line 2955 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 2958 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 2964 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 139 "Test3D.ec"
const char *  name;

#line 2974 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 2979 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 2984 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 2989 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int depth;

#line 2994 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int (*  function)();

#line 2999 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int vid;

#line 3004 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int type;

#line 3009 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3014 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
void *  symbol;

#line 3019 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
const char *  dataTypeString;

#line 3024 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3029 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int memberAccess;

#line 3034 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3037 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

#line 3043 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 3049 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 5 "Test3D.ec"
union
{

#line 5 "Test3D.ec"
struct
{

#line 5 "Test3D.ec"
const char *  dataTypeString;

#line 3067 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3072 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __anon1;

#line 3075 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 3080 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct
{

#line 5 "Test3D.ec"
const char *  memberString;

#line 3089 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
union
{

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 3098 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 3103 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 3108 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __anon1;

#line 3111 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __anon2;

#line 3114 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct __anon1;

#line 3117 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3120 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 3130 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 3135 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
const char *  name;

#line 3140 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int isProperty;

#line 3145 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int memberAccess;

#line 3150 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int id;

#line 3155 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3160 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
const char *  dataTypeString;

#line 3165 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3170 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3175 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
void (*  Set)(void * , int);

#line 3180 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int (*  Get)(void * );

#line 3185 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int (*  IsSet)(void * );

#line 3190 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
void *  data;

#line 3195 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
void *  symbol;

#line 3200 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
int vid;

#line 3205 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int conversion;

#line 3210 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int watcherOffset;

#line 3215 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
const char *  category;

#line 3220 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int compiled;

#line 3225 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int selfWatchable;

#line 3230 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
unsigned int isWatchable;

#line 3235 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3238 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 3244 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 3250 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 3256 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 3262 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap;

#line 3268 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap
{

#line 56 "Test3D.ec"
int width;

#line 3278 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
int height;

#line 3283 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
int pixelFormat;

#line 3288 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned char *  picture;

#line 3293 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int stride;

#line 3298 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int size;

#line 3303 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int sizeBytes;

#line 3308 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int *  palette;

#line 3313 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int allocatePalette;

#line 3318 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int transparent;

#line 3323 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
int shadeShift;

#line 3328 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned char *  paletteShades;

#line 3333 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int alphaBlend;

#line 3338 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * displaySystem;

#line 3343 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * driver;

#line 3348 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
void *  driverData;

#line 3353 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int keepData;

#line 3358 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int mipMaps;

#line 3363 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int sRGB2Linear;

#line 3368 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
int numMipMaps;

#line 3373 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * *  bitmaps;

#line 3378 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3381 "obj/debug.linux/Test3D.c"


#line 45 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Material
{

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * prev;

#line 3391 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * next;

#line 3396 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
char *  name;

#line 3401 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float opacity;

#line 3406 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 3411 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 3416 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 3421 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB emissive;

#line 3426 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float power;

#line 3431 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * baseMap;

#line 3436 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * bumpMap;

#line 3441 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * specularMap;

#line 3446 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * reflectMap;

#line 3451 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * envMap;

#line 3456 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float reflectivity;

#line 3461 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float refractiveIndex;

#line 3466 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float refractiveIndexContainer;

#line 3471 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
unsigned int flags;

#line 3476 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float uScale;

#line 3481 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
float vScale;

#line 3486 "obj/debug.linux/Test3D.c"

#line 56 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * shader;

#line 3491 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3494 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_bitmap)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3500 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_bitmap)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 3506 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 3512 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

#line 3518 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 3524 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 3530 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 5 "Test3D.ec"
const char *  name;

#line 3540 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 3545 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 3550 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 3555 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int depth;

#line 3560 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 3565 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 3570 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 3575 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 3580 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 3585 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3588 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 3598 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 3603 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char *  name;

#line 3608 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int offset;

#line 3613 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int structSize;

#line 3618 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void * *  _vTbl;

#line 3623 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int vTblSize;

#line 3628 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int (*  Constructor)(void * );

#line 3633 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void (*  Destructor)(void * );

#line 3638 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int offsetClass;

#line 3643 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int sizeClass;

#line 3648 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 3653 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3658 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3663 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3668 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3673 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3678 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3683 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int memberID;

#line 3688 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int startMemberID;

#line 3693 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int type;

#line 3698 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3703 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3708 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char *  dataTypeString;

#line 3713 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3718 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int typeSize;

#line 3723 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int defaultAlignment;

#line 3728 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void (*  Initialize)();

#line 3733 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int memberOffset;

#line 3738 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3743 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char *  designerClass;

#line 3748 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int noExpansion;

#line 3753 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char *  defaultProperty;

#line 3758 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int comRedefinition;

#line 3763 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int count;

#line 3768 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int isRemote;

#line 3773 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int internalDecl;

#line 3778 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  data;

#line 3783 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int computeSize;

#line 3788 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
short structAlignment;

#line 3793 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
short pointerAlignment;

#line 3798 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int destructionWatchOffset;

#line 3803 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int fixed;

#line 3808 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 3813 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int inheritanceAccess;

#line 3818 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char *  fullName;

#line 3823 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  symbol;

#line 3828 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 3833 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 3838 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 3843 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 3848 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 3853 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int numParams;

#line 3858 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int isInstanceClass;

#line 3863 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int byValueSystemClass;

#line 3868 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  bindingsClass;

#line 3873 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3876 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 5 "Test3D.ec"
int argc;

#line 3886 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char * *  argv;

#line 3891 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int exitCode;

#line 3896 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
unsigned int isGUIApp;

#line 3901 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 3906 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
char *  parsedCommand;

#line 3911 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 3916 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 3919 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MyApp;

#line 3925 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_Test3D;

#line 3931 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__BitmapResource;

#line 3937 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere;

#line 3943 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 3949 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 3955 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 3961 "obj/debug.linux/Test3D.c"


#line 43 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 3967 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 3973 "obj/debug.linux/Test3D.c"


#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 3983 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 3988 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 3993 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 3998 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 4003 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 4008 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 4013 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
const char *  name;

#line 4018 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  library;

#line 4023 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
void *  Unload;

#line 4028 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int importType;

#line 4033 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
int origImportType;

#line 4038 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 4043 "obj/debug.linux/Test3D.c"

#line 5 "Test3D.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 4048 "obj/debug.linux/Test3D.c"
} ecere_gcc_struct;

#line 4051 "obj/debug.linux/Test3D.c"

unsigned int __ecereMethod_Test3D_OnLoadGraphics(struct __ecereNameSpace__ecere__com__Instance * this)

#line 49 "Test3D.ec"
{

#line 63 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct9;

#line 4061 "obj/debug.linux/Test3D.c"

#line 62 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct8;

#line 4066 "obj/debug.linux/Test3D.c"

#line 61 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct7;

#line 4071 "obj/debug.linux/Test3D.c"

#line 53 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct6;

#line 4076 "obj/debug.linux/Test3D.c"

#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct5;

#line 4081 "obj/debug.linux/Test3D.c"

#line 63 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct4;

#line 4086 "obj/debug.linux/Test3D.c"

#line 62 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct3 =
{

#line 62 "Test3D.ec"
(double)(double)(-100), 0, 0
}
#line 62 "Test3D.ec"
;

#line 4098 "obj/debug.linux/Test3D.c"

#line 61 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df __simpleStruct2 =
{

#line 61 "Test3D.ec"
100, 100, 100
}
#line 61 "Test3D.ec"
;

#line 4110 "obj/debug.linux/Test3D.c"

#line 53 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct1 =
{

#line 53 "Test3D.ec"
100, 0, 0
}
#line 53 "Test3D.ec"
;

#line 4122 "obj/debug.linux/Test3D.c"

#line 52 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df __simpleStruct0 =
{

#line 52 "Test3D.ec"
75, 75, 75
}
#line 52 "Test3D.ec"
;

#line 4134 "obj/debug.linux/Test3D.c"

#line 49 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4139 "obj/debug.linux/Test3D.c"


#line 50 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create(__ecerePointer_Test3D->sphere, __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 4144 "obj/debug.linux/Test3D.c"


#line 51 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial(__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh((void *)(__ecerePointer_Test3D->sphere)), __ecerePointer_Test3D->sphereMat);
#line 4149 "obj/debug.linux/Test3D.c"


#line 52 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_Test3D->sphere), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->sphere), &__simpleStruct5), __simpleStruct5.scaling = __simpleStruct0, &__simpleStruct5));
#line 4154 "obj/debug.linux/Test3D.c"


#line 53 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_Test3D->sphere), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->sphere), &__simpleStruct6), __simpleStruct6.position = __simpleStruct1, &__simpleStruct6));
#line 4159 "obj/debug.linux/Test3D.c"


#line 54 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(__ecerePointer_Test3D->sphere));
#line 4164 "obj/debug.linux/Test3D.c"


#line 56 "Test3D.ec"
__ecerePointer_Test3D->cubeMat->baseMap = __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_bitmap(__ecerePointer_Test3D->texture);
#line 4169 "obj/debug.linux/Test3D.c"


#line 58 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create(__ecerePointer_Test3D->cube, __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 4174 "obj/debug.linux/Test3D.c"


#line 59 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial(__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh((void *)(__ecerePointer_Test3D->cube)), __ecerePointer_Test3D->cubeMat);
#line 4179 "obj/debug.linux/Test3D.c"


#line 60 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency(__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh((void *)(__ecerePointer_Test3D->cube)), (void *)(__ecerePointer_Test3D->cube));
#line 4184 "obj/debug.linux/Test3D.c"


#line 61 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_Test3D->cube), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->cube), &__simpleStruct7), __simpleStruct7.scaling = __simpleStruct2, &__simpleStruct7));
#line 4189 "obj/debug.linux/Test3D.c"


#line 62 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_Test3D->cube), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->cube), &__simpleStruct8), __simpleStruct8.position = __simpleStruct3, &__simpleStruct8));
#line 4194 "obj/debug.linux/Test3D.c"


#line 63 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_Test3D->cube), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_Test3D->cube), &__simpleStruct9), __simpleStruct9.orientation = (__simpleStruct4.w = 0.8213938048432696, __simpleStruct4.x = 0.3830222215594890, __simpleStruct4.y = 0.3830222215594890, __simpleStruct4.z = 0.1786061951567303, __simpleStruct4), &__simpleStruct9));
#line 4199 "obj/debug.linux/Test3D.c"


#line 64 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(__ecerePointer_Test3D->cube));
#line 4204 "obj/debug.linux/Test3D.c"


#line 65 "Test3D.ec"
return 1;
#line 4209 "obj/debug.linux/Test3D.c"


#line 66 "Test3D.ec"
}
#line 4214 "obj/debug.linux/Test3D.c"


void __ecereMethod_Test3D_OnResize(struct __ecereNameSpace__ecere__com__Instance * this, int w, int h)

#line 69 "Test3D.ec"
{

#line 69 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4225 "obj/debug.linux/Test3D.c"


#line 70 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup(camera, w, h, (((void *)0)));
#line 4230 "obj/debug.linux/Test3D.c"


#line 71 "Test3D.ec"
}
#line 4235 "obj/debug.linux/Test3D.c"


void __ecereMethod_Test3D_OnRedraw(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface)

#line 74 "Test3D.ec"
{

#line 74 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4246 "obj/debug.linux/Test3D.c"

#line 75 "Test3D.ec"
int x, y;

#line 4251 "obj/debug.linux/Test3D.c"


#line 76 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition(this, &x, &y);
#line 4256 "obj/debug.linux/Test3D.c"


#line 77 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear(surface, 1);
#line 4261 "obj/debug.linux/Test3D.c"


#line 78 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update(camera);
#line 4266 "obj/debug.linux/Test3D.c"


#line 79 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0, &light);
#line 4271 "obj/debug.linux/Test3D.c"


#line 80 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 1, &light2);
#line 4276 "obj/debug.linux/Test3D.c"


#line 81 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0);
#line 4281 "obj/debug.linux/Test3D.c"


#line 82 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, camera);
#line 4286 "obj/debug.linux/Test3D.c"


#line 83 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), (void *)(__ecerePointer_Test3D->cube));
#line 4291 "obj/debug.linux/Test3D.c"


#line 84 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), (void *)(__ecerePointer_Test3D->sphere));
#line 4296 "obj/debug.linux/Test3D.c"


#line 85 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, (((void *)0)));
#line 4301 "obj/debug.linux/Test3D.c"


#line 86 "Test3D.ec"
}
#line 4306 "obj/debug.linux/Test3D.c"


unsigned int __ecereMethod_Test3D_OnLeftButtonDown(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 93 "Test3D.ec"
{

#line 96 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct0;

#line 4317 "obj/debug.linux/Test3D.c"

#line 93 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4322 "obj/debug.linux/Test3D.c"


#line 94 "Test3D.ec"
__ecerePointer_Test3D->clickTime = __ecereFunction___ecereNameSpace__ecere__sys__GetTime();
#line 4327 "obj/debug.linux/Test3D.c"


#line 95 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture(this);
#line 4332 "obj/debug.linux/Test3D.c"


#line 96 "Test3D.ec"
__ecerePointer_Test3D->startClick = (__simpleStruct0.x = x, __simpleStruct0.y = y, __simpleStruct0);
#line 4337 "obj/debug.linux/Test3D.c"


#line 97 "Test3D.ec"
__ecerePointer_Test3D->moving = 1;
#line 4342 "obj/debug.linux/Test3D.c"


#line 98 "Test3D.ec"
return 1;
#line 4347 "obj/debug.linux/Test3D.c"


#line 99 "Test3D.ec"
}
#line 4352 "obj/debug.linux/Test3D.c"


unsigned int __ecereMethod_Test3D_OnLeftButtonUp(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 102 "Test3D.ec"
{

#line 102 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4363 "obj/debug.linux/Test3D.c"


#line 103 "Test3D.ec"
if(__ecerePointer_Test3D->moving)

#line 104 "Test3D.ec"
{

#line 105 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture(this);
#line 4374 "obj/debug.linux/Test3D.c"


#line 106 "Test3D.ec"
__ecerePointer_Test3D->moving = 0;
#line 4379 "obj/debug.linux/Test3D.c"


#line 107 "Test3D.ec"
}
#line 4384 "obj/debug.linux/Test3D.c"

#line 4386 "obj/debug.linux/Test3D.c"


#line 108 "Test3D.ec"
return 1;
#line 4391 "obj/debug.linux/Test3D.c"


#line 109 "Test3D.ec"
}
#line 4396 "obj/debug.linux/Test3D.c"


unsigned int __ecereMethod_Test3D_OnMouseMove(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 112 "Test3D.ec"
{

#line 112 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4407 "obj/debug.linux/Test3D.c"


#line 113 "Test3D.ec"
if(__ecerePointer_Test3D->moving)

#line 114 "Test3D.ec"
{

#line 118 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct1;

#line 4419 "obj/debug.linux/Test3D.c"

#line 115 "Test3D.ec"
double __simpleStruct0;

#line 4424 "obj/debug.linux/Test3D.c"

#line 115 "Test3D.ec"
double time = __ecereFunction___ecereNameSpace__ecere__sys__GetTime(), diffTime = (__simpleStruct0 = time - __ecerePointer_Test3D->clickTime, (__simpleStruct0 > 0.01) ? __simpleStruct0 : 0.01);

#line 4429 "obj/debug.linux/Test3D.c"


#line 116 "Test3D.ec"
__ecerePointer_Test3D->spin.yaw += ((double)(__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians((double)(x - __ecerePointer_Test3D->startClick.x) / (25.0 * (double)(double)diffTime))));
#line 4434 "obj/debug.linux/Test3D.c"


#line 117 "Test3D.ec"
__ecerePointer_Test3D->spin.pitch += ((double)(__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians((double)(__ecerePointer_Test3D->startClick.y - y) / (25.0 * (double)(double)diffTime))));
#line 4439 "obj/debug.linux/Test3D.c"


#line 118 "Test3D.ec"
__ecerePointer_Test3D->startClick = (__simpleStruct1.x = x, __simpleStruct1.y = y, __simpleStruct1);
#line 4444 "obj/debug.linux/Test3D.c"


#line 119 "Test3D.ec"
__ecerePointer_Test3D->clickTime = time;
#line 4449 "obj/debug.linux/Test3D.c"


#line 120 "Test3D.ec"
}
#line 4454 "obj/debug.linux/Test3D.c"

#line 4456 "obj/debug.linux/Test3D.c"


#line 121 "Test3D.ec"
return 1;
#line 4461 "obj/debug.linux/Test3D.c"


#line 122 "Test3D.ec"
}
#line 4466 "obj/debug.linux/Test3D.c"


unsigned int __ecereMethod_Test3D_OnKeyHit(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 125 "Test3D.ec"
{

#line 125 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4477 "obj/debug.linux/Test3D.c"


#line 126 "Test3D.ec"
if(key == 0x104LL || key == 0x103LL)

#line 127 "Test3D.ec"
{

#line 133 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct4;

#line 4489 "obj/debug.linux/Test3D.c"

#line 133 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct3;

#line 4494 "obj/debug.linux/Test3D.c"

#line 133 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct2;

#line 4499 "obj/debug.linux/Test3D.c"

#line 133 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct1;

#line 4504 "obj/debug.linux/Test3D.c"

#line 128 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct0;

#line 4509 "obj/debug.linux/Test3D.c"

#line 128 "Test3D.ec"
int w = (int)(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size(this, &__simpleStruct0), __simpleStruct0).w;

#line 4514 "obj/debug.linux/Test3D.c"


#line 129 "Test3D.ec"
if(key == 0x104LL)

#line 130 "Test3D.ec"
w /= 1.1;
#line 4522 "obj/debug.linux/Test3D.c"

else 
#line 131 "Test3D.ec"
if(key == 0x103LL)

#line 132 "Test3D.ec"
w *= 1.1;
#line 4530 "obj/debug.linux/Test3D.c"

#line 4532 "obj/debug.linux/Test3D.c"

#line 4534 "obj/debug.linux/Test3D.c"


#line 133 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Move(this, (int)((__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position(this, &__simpleStruct1), __simpleStruct1.x + (__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size(this, &__simpleStruct2), __simpleStruct2.w / 2)) - w / 2), (int)((__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position(this, &__simpleStruct3), __simpleStruct3.y + (__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size(this, &__simpleStruct4), __simpleStruct4.h / 2)) - w / 2), w, w);
#line 4539 "obj/debug.linux/Test3D.c"


#line 134 "Test3D.ec"
}
#line 4544 "obj/debug.linux/Test3D.c"

#line 4546 "obj/debug.linux/Test3D.c"


#line 135 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 4551 "obj/debug.linux/Test3D.c"


#line 136 "Test3D.ec"
return 1;
#line 4556 "obj/debug.linux/Test3D.c"


#line 137 "Test3D.ec"
}
#line 4561 "obj/debug.linux/Test3D.c"


unsigned int __ecereMethod_Test3D_OnKeyDown(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 140 "Test3D.ec"
{

#line 140 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4572 "obj/debug.linux/Test3D.c"


#line 141 "Test3D.ec"
if(key == 0x1LL)

#line 141 "Test3D.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy(this, 0);
#line 4580 "obj/debug.linux/Test3D.c"

#line 4582 "obj/debug.linux/Test3D.c"


#line 142 "Test3D.ec"
return 1;
#line 4587 "obj/debug.linux/Test3D.c"


#line 143 "Test3D.ec"
}
#line 4592 "obj/debug.linux/Test3D.c"


unsigned int __ecereConstructor_Test3D(struct __ecereNameSpace__ecere__com__Instance * this)

#line 139 "Test3D.ec"
{

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct5;

#line 4603 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct4;

#line 4608 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct3;

#line 4613 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct2;

#line 4618 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct1;

#line 4623 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct0 =
{

#line 139 "Test3D.ec"
640, 480
}
#line 139 "Test3D.ec"
;

#line 4635 "obj/debug.linux/Test3D.c"

#line 139 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4640 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecerePointer_Test3D->texture = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx__BitmapResource);
#line 4645 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_Test3D->texture);
#line 4650 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecerePointer_Test3D->sphere = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere);
#line 4655 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecerePointer_Test3D->cube = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube);
#line 4660 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecerePointer_Test3D->sphereMat = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Material);
#line 4665 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecerePointer_Test3D->cubeMat = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Material);
#line 4670 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_text(this, "Form1");
#line 4675 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background(this, 0x0LL);
#line 4680 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle(this, 7);
#line 4685 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize(this, 1);
#line 4690 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize(this, 1);
#line 4695 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose(this, 1);
#line 4700 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(this, &__simpleStruct0);
#line 4705 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
;
#line 4710 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
(__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_fileName(__ecerePointer_Test3D->texture, "https://info.ribboncommunications.com/images/logo/rib_logo_hor_1_color_101.png"), __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_window(__ecerePointer_Test3D->texture, this));
#line 4715 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
(__ecerePointer_Test3D->sphereMat->diffuse = (__simpleStruct1.r = 1.0000000000000000f, __simpleStruct1.g = 1.0000000000000000f, __simpleStruct1.b = 1.0000000000000000f, __simpleStruct1), __ecerePointer_Test3D->sphereMat->ambient = (__simpleStruct2.r = 0.0000000000000000f, __simpleStruct2.g = 0.0000000000000000f, __simpleStruct2.b = 1.0000000000000000f, __simpleStruct2), __ecerePointer_Test3D->sphereMat->specular = (__simpleStruct3.r = 1.0000000000000000f, __simpleStruct3.g = 0.0000000000000000f, __simpleStruct3.b = 0.0000000000000000f, __simpleStruct3), __ecerePointer_Test3D->sphereMat->power = 8);
#line 4720 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
(__ecerePointer_Test3D->cubeMat->opacity = 1.0f, __ecerePointer_Test3D->cubeMat->diffuse = (__simpleStruct4.r = 1.0000000000000000f, __simpleStruct4.g = 1.0000000000000000f, __simpleStruct4.b = 1.0000000000000000f, __simpleStruct4), __ecerePointer_Test3D->cubeMat->ambient = (__simpleStruct5.r = 1.0000000000000000f, __simpleStruct5.g = 1.0000000000000000f, __simpleStruct5.b = 1.0000000000000000f, __simpleStruct5), __ecerePointer_Test3D->cubeMat->flags = (((unsigned int)(1)) | (((unsigned int)(1)) << 1)));
#line 4725 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
return 1;
#line 4730 "obj/debug.linux/Test3D.c"


#line 143 "Test3D.ec"
}
#line 4735 "obj/debug.linux/Test3D.c"


void __ecereCreateModuleInstances_Test3D()

#line 9 "Test3D.ec"
{

#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 4746 "obj/debug.linux/Test3D.c"

#line 9 "Test3D.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0 =
{

#line 9 "Test3D.ec"
0, 0, (double)(double)(-300)
}
#line 9 "Test3D.ec"
;

#line 4758 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
(camera = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type(camera, 0), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, &__simpleStruct0), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation(camera, (__simpleStruct1.w = 1.0000000000000000, __simpleStruct1.x = 0.0000000000000000, __simpleStruct1.y = 0.0000000000000000, __simpleStruct1.z = 0.0000000000000000, &__simpleStruct1)), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov(camera, 1.2217304763960306));
#line 4763 "obj/debug.linux/Test3D.c"


#line 9 "Test3D.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(camera);
#line 4768 "obj/debug.linux/Test3D.c"


#line 146 "Test3D.ec"
test3D = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_Test3D);
#line 4773 "obj/debug.linux/Test3D.c"


#line 146 "Test3D.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(test3D);
#line 4778 "obj/debug.linux/Test3D.c"


#line 15 "Test3D.ec"
}
#line 4783 "obj/debug.linux/Test3D.c"


void __ecereDestructor_Test3D(struct __ecereNameSpace__ecere__com__Instance * this)

#line 139 "Test3D.ec"
{

#line 139 "Test3D.ec"
__attribute__((unused)) struct Test3D * __ecerePointer_Test3D = (struct Test3D *)(this ? (((char *)this) + __ecereClass_Test3D->offset) : 0);

#line 4794 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_Test3D->texture), __ecerePointer_Test3D->texture = 0);
#line 4799 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
((__ecerePointer_Test3D->sphere ? __extension__ (
#line 43 "Test3D.ec"
{

#line 43 "Test3D.ec"
void * __ecerePtrToDelete = (__ecerePointer_Test3D->sphere);

#line 4810 "obj/debug.linux/Test3D.c"


#line 43 "Test3D.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 4815 "obj/debug.linux/Test3D.c"


#line 43 "Test3D.ec"
}
#line 4820 "obj/debug.linux/Test3D.c"
) : 0), __ecerePointer_Test3D->sphere = 0);
#line 4822 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
((__ecerePointer_Test3D->cube ? __extension__ (
#line 44 "Test3D.ec"
{

#line 44 "Test3D.ec"
void * __ecerePtrToDelete = (__ecerePointer_Test3D->cube);

#line 4833 "obj/debug.linux/Test3D.c"


#line 44 "Test3D.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 4838 "obj/debug.linux/Test3D.c"


#line 44 "Test3D.ec"
}
#line 4843 "obj/debug.linux/Test3D.c"
) : 0), __ecerePointer_Test3D->cube = 0);
#line 4845 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
((__ecerePointer_Test3D->sphereMat ? __extension__ (
#line 45 "Test3D.ec"
{

#line 45 "Test3D.ec"
void * __ecerePtrToDelete = (__ecerePointer_Test3D->sphereMat);

#line 4856 "obj/debug.linux/Test3D.c"


#line 45 "Test3D.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Material->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 4861 "obj/debug.linux/Test3D.c"


#line 45 "Test3D.ec"
}
#line 4866 "obj/debug.linux/Test3D.c"
) : 0), __ecerePointer_Test3D->sphereMat = 0);
#line 4868 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
((__ecerePointer_Test3D->cubeMat ? __extension__ (
#line 46 "Test3D.ec"
{

#line 46 "Test3D.ec"
void * __ecerePtrToDelete = (__ecerePointer_Test3D->cubeMat);

#line 4879 "obj/debug.linux/Test3D.c"


#line 46 "Test3D.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Material->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 4884 "obj/debug.linux/Test3D.c"


#line 46 "Test3D.ec"
}
#line 4889 "obj/debug.linux/Test3D.c"
) : 0), __ecerePointer_Test3D->cubeMat = 0);
#line 4891 "obj/debug.linux/Test3D.c"


#line 143 "Test3D.ec"
}
#line 4896 "obj/debug.linux/Test3D.c"


void __ecereUnregisterModule_Test3D(struct __ecereNameSpace__ecere__com__Instance * module)

#line 139 "Test3D.ec"
{


#line 143 "Test3D.ec"
}
#line 4907 "obj/debug.linux/Test3D.c"


void __ecereRegisterModule_Test3D(struct __ecereNameSpace__ecere__com__Instance * module)

#line 139 "Test3D.ec"
{

#line 139 "Test3D.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 4918 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "MyApp", "ecere::gui::GuiApplication", 0, 0, (void *)__ecereConstructor_MyApp, (void *)0, module, 2, 1);
#line 4923 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 139 "Test3D.ec"
__ecereClass_MyApp = class;
#line 4931 "obj/debug.linux/Test3D.c"

#line 4933 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "Test3D", "ecere::gui::Window", sizeof(struct Test3D), 0, (void *)__ecereConstructor_Test3D, (void *)__ecereDestructor_Test3D, module, 2, 1);
#line 4938 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 139 "Test3D.ec"
__ecereClass_Test3D = class;
#line 4946 "obj/debug.linux/Test3D.c"

#line 4948 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnResize", 0, __ecereMethod_Test3D_OnResize, 1);
#line 4953 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLoadGraphics", 0, __ecereMethod_Test3D_OnLoadGraphics, 1);
#line 4958 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRedraw", 0, __ecereMethod_Test3D_OnRedraw, 1);
#line 4963 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyDown", 0, __ecereMethod_Test3D_OnKeyDown, 1);
#line 4968 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyHit", 0, __ecereMethod_Test3D_OnKeyHit, 1);
#line 4973 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnMouseMove", 0, __ecereMethod_Test3D_OnMouseMove, 1);
#line 4978 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonDown", 0, __ecereMethod_Test3D_OnLeftButtonDown, 1);
#line 4983 "obj/debug.linux/Test3D.c"


#line 139 "Test3D.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonUp", 0, __ecereMethod_Test3D_OnLeftButtonUp, 1);
#line 4988 "obj/debug.linux/Test3D.c"


#line 143 "Test3D.ec"
}
#line 4993 "obj/debug.linux/Test3D.c"


