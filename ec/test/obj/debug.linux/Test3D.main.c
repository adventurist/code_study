/* Code generated from eC source file: Test3D.main.ec */
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

#line 55 "obj/debug.linux/Test3D.main.c"


#line 32 "/usr/include/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/Test3D.main.c"


#line 33 "/usr/include/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/Test3D.main.c"


#line 34 "/usr/include/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/Test3D.main.c"


#line 37 "/usr/include/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/Test3D.main.c"


#line 38 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/Test3D.main.c"


#line 39 "/usr/include/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/Test3D.main.c"


#line 40 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/Test3D.main.c"


#line 41 "/usr/include/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/Test3D.main.c"


#line 42 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/Test3D.main.c"


#line 44 "/usr/include/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/Test3D.main.c"


#line 45 "/usr/include/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/Test3D.main.c"


#line 52 "/usr/include/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/Test3D.main.c"


#line 53 "/usr/include/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/Test3D.main.c"


#line 54 "/usr/include/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/Test3D.main.c"


#line 55 "/usr/include/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/Test3D.main.c"


#line 56 "/usr/include/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/Test3D.main.c"


#line 57 "/usr/include/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/Test3D.main.c"


#line 58 "/usr/include/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/Test3D.main.c"


#line 59 "/usr/include/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/Test3D.main.c"


#line 63 "/usr/include/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/Test3D.main.c"


#line 64 "/usr/include/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/Test3D.main.c"


#line 72 "/usr/include/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/Test3D.main.c"


#line 73 "/usr/include/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/Test3D.main.c"


#line 145 "/usr/include/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/Test3D.main.c"


#line 146 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/Test3D.main.c"


#line 147 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/Test3D.main.c"


#line 148 "/usr/include/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/Test3D.main.c"


#line 149 "/usr/include/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/Test3D.main.c"


#line 150 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/Test3D.main.c"


#line 151 "/usr/include/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/Test3D.main.c"


#line 152 "/usr/include/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/Test3D.main.c"


#line 153 "/usr/include/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/Test3D.main.c"


#line 154 "/usr/include/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/Test3D.main.c"


#line 155 "/usr/include/bits/types.h"
typedef struct
{

#line 155 "/usr/include/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/Test3D.main.c"


#line 156 "/usr/include/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/Test3D.main.c"


#line 157 "/usr/include/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/Test3D.main.c"


#line 158 "/usr/include/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/Test3D.main.c"


#line 159 "/usr/include/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/Test3D.main.c"


#line 160 "/usr/include/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/Test3D.main.c"


#line 161 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/Test3D.main.c"


#line 162 "/usr/include/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/Test3D.main.c"


#line 164 "/usr/include/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/Test3D.main.c"


#line 165 "/usr/include/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/Test3D.main.c"


#line 168 "/usr/include/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/Test3D.main.c"


#line 171 "/usr/include/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/Test3D.main.c"


#line 174 "/usr/include/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/Test3D.main.c"


#line 179 "/usr/include/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/Test3D.main.c"


#line 180 "/usr/include/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/Test3D.main.c"


#line 183 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/Test3D.main.c"


#line 184 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/Test3D.main.c"


#line 187 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/Test3D.main.c"


#line 188 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/Test3D.main.c"


#line 191 "/usr/include/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/Test3D.main.c"


#line 193 "/usr/include/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/Test3D.main.c"


#line 196 "/usr/include/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/Test3D.main.c"


#line 198 "/usr/include/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/Test3D.main.c"


#line 202 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/Test3D.main.c"


#line 203 "/usr/include/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/Test3D.main.c"


#line 206 "/usr/include/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/Test3D.main.c"


#line 209 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/Test3D.main.c"


#line 214 "/usr/include/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/Test3D.main.c"


#line 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/Test3D.main.c"


#line 25 "/usr/include/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/Test3D.main.c"


#line 26 "/usr/include/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/Test3D.main.c"


#line 27 "/usr/include/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/Test3D.main.c"


#line 24 "/usr/include/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/Test3D.main.c"


#line 25 "/usr/include/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/Test3D.main.c"


#line 26 "/usr/include/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/Test3D.main.c"


#line 27 "/usr/include/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/Test3D.main.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/Test3D.main.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/Test3D.main.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/Test3D.main.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/Test3D.main.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/Test3D.main.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/Test3D.main.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/Test3D.main.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/Test3D.main.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/Test3D.main.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/Test3D.main.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/Test3D.main.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/Test3D.main.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/Test3D.main.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/Test3D.main.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/Test3D.main.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/Test3D.main.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/Test3D.main.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/Test3D.main.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/Test3D.main.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/Test3D.main.c"


#line 33 "/usr/include/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/Test3D.main.c"


#line 34 "/usr/include/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/Test3D.main.c"


#line 35 "/usr/include/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/Test3D.main.c"


#line 36 "/usr/include/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/Test3D.main.c"


#line 37 "/usr/include/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/Test3D.main.c"


#line 38 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/Test3D.main.c"


#line 39 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/Test3D.main.c"


#line 42 "/usr/include/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/Test3D.main.c"


#line 47 "/usr/include/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/Test3D.main.c"


#line 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/Test3D.main.c"


#line 64 "/usr/include/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/Test3D.main.c"


#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/Test3D.main.c"


#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/Test3D.main.c"


#line 79 "/usr/include/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/Test3D.main.c"


#line 85 "/usr/include/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/Test3D.main.c"


#line 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/Test3D.main.c"


#line 103 "/usr/include/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/Test3D.main.c"


#line 108 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/Test3D.main.c"


#line 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/Test3D.main.c"


#line 115 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/Test3D.main.c"


#line 121 "/usr/include/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/Test3D.main.c"


#line 7 "/usr/include/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/Test3D.main.c"


#line 7 "/usr/include/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/Test3D.main.c"


#line 7 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/Test3D.main.c"


#line 7 "/usr/include/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/Test3D.main.c"


#line 209 "/usr/lib/gcc/x86_64-pc-linux-gnu/9.1.0/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/Test3D.main.c"


#line 148 "/usr/include/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/Test3D.main.c"


#line 149 "/usr/include/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/Test3D.main.c"


#line 150 "/usr/include/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/Test3D.main.c"


#line 158 "/usr/include/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/Test3D.main.c"


#line 159 "/usr/include/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/Test3D.main.c"


#line 160 "/usr/include/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/Test3D.main.c"


#line 161 "/usr/include/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/Test3D.main.c"


#line 164 "/usr/include/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/Test3D.main.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/bits/byteswap.h"
{

#line 37 "/usr/include/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/Test3D.main.c"


#line 41 "/usr/include/bits/byteswap.h"
}
#line 814 "obj/debug.linux/Test3D.main.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/bits/byteswap.h"
{

#line 52 "/usr/include/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/Test3D.main.c"


#line 56 "/usr/include/bits/byteswap.h"
}
#line 829 "obj/debug.linux/Test3D.main.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/bits/byteswap.h"
{

#line 73 "/usr/include/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/Test3D.main.c"


#line 77 "/usr/include/bits/byteswap.h"
}
#line 844 "obj/debug.linux/Test3D.main.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/bits/uintn-identity.h"
{

#line 35 "/usr/include/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/Test3D.main.c"


#line 36 "/usr/include/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/Test3D.main.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/bits/uintn-identity.h"
{

#line 41 "/usr/include/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/Test3D.main.c"


#line 42 "/usr/include/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/Test3D.main.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/bits/uintn-identity.h"
{

#line 47 "/usr/include/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/Test3D.main.c"


#line 48 "/usr/include/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/Test3D.main.c"



#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/Test3D.main.c"


#line 7 "/usr/include/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/Test3D.main.c"


#line 8 "/usr/include/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/Test3D.main.c"

#line 11 "/usr/include/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/Test3D.main.c"


#line 9 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{

#line 11 "/usr/include/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/Test3D.main.c"

#line 12 "/usr/include/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/Test3D.main.c"


#line 43 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/Test3D.main.c"


#line 49 "/usr/include/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/Test3D.main.c"


#line 59 "/usr/include/sys/select.h"
typedef struct
{

#line 67 "/usr/include/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/Test3D.main.c"


#line 77 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/Test3D.main.c"


#line 101 "/usr/include/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/Test3D.main.c"


#line 113 "/usr/include/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/Test3D.main.c"


#line 185 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/Test3D.main.c"


#line 192 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/Test3D.main.c"


#line 196 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/Test3D.main.c"


#line 200 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/Test3D.main.c"


#line 65 "/usr/include/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t
{

#line 67 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __readers;

#line 1022 "obj/debug.linux/Test3D.main.c"

#line 68 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers;

#line 1027 "obj/debug.linux/Test3D.main.c"

#line 69 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __wrphase_futex;

#line 1032 "obj/debug.linux/Test3D.main.c"

#line 70 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers_futex;

#line 1037 "obj/debug.linux/Test3D.main.c"

#line 71 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad3;

#line 1042 "obj/debug.linux/Test3D.main.c"

#line 72 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad4;

#line 1047 "obj/debug.linux/Test3D.main.c"

#line 74 "/usr/include/bits/pthreadtypes-arch.h"
int __cur_writer;

#line 1052 "obj/debug.linux/Test3D.main.c"

#line 75 "/usr/include/bits/pthreadtypes-arch.h"
int __shared;

#line 1057 "obj/debug.linux/Test3D.main.c"

#line 76 "/usr/include/bits/pthreadtypes-arch.h"
signed char __rwelision;

#line 1062 "obj/debug.linux/Test3D.main.c"

#line 81 "/usr/include/bits/pthreadtypes-arch.h"
unsigned char __pad1[7];

#line 1067 "obj/debug.linux/Test3D.main.c"

#line 84 "/usr/include/bits/pthreadtypes-arch.h"
unsigned long int __pad2;

#line 1072 "obj/debug.linux/Test3D.main.c"

#line 87 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __flags;

#line 1077 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1080 "obj/debug.linux/Test3D.main.c"


#line 82 "/usr/include/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 84 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1090 "obj/debug.linux/Test3D.main.c"

#line 85 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1095 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __pthread_list_t;

#line 1098 "obj/debug.linux/Test3D.main.c"


#line 118 "/usr/include/bits/thread-shared-types.h"
struct __pthread_mutex_s
{

#line 120 "/usr/include/bits/thread-shared-types.h"
int __lock;

#line 1108 "obj/debug.linux/Test3D.main.c"

#line 121 "/usr/include/bits/thread-shared-types.h"
unsigned int __count;

#line 1113 "obj/debug.linux/Test3D.main.c"

#line 122 "/usr/include/bits/thread-shared-types.h"
int __owner;

#line 1118 "obj/debug.linux/Test3D.main.c"

#line 124 "/usr/include/bits/thread-shared-types.h"
unsigned int __nusers;

#line 1123 "obj/debug.linux/Test3D.main.c"

#line 148 "/usr/include/bits/thread-shared-types.h"
int __kind;

#line 1128 "obj/debug.linux/Test3D.main.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __spins;

#line 1133 "obj/debug.linux/Test3D.main.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __elision;

#line 1138 "obj/debug.linux/Test3D.main.c"

#line 155 "/usr/include/bits/thread-shared-types.h"
__pthread_list_t __list;

#line 1143 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1146 "obj/debug.linux/Test3D.main.c"


#line 171 "/usr/include/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 173 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 175 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1160 "obj/debug.linux/Test3D.main.c"

#line 176 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 178 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1169 "obj/debug.linux/Test3D.main.c"

#line 179 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1174 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __wseq32;

#line 1177 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1180 "obj/debug.linux/Test3D.main.c"

#line 182 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 184 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1189 "obj/debug.linux/Test3D.main.c"

#line 185 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 187 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1198 "obj/debug.linux/Test3D.main.c"

#line 188 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1203 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __g1_start32;

#line 1206 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1209 "obj/debug.linux/Test3D.main.c"

#line 191 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1214 "obj/debug.linux/Test3D.main.c"

#line 192 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1219 "obj/debug.linux/Test3D.main.c"

#line 193 "/usr/include/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1224 "obj/debug.linux/Test3D.main.c"

#line 194 "/usr/include/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1229 "obj/debug.linux/Test3D.main.c"

#line 195 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1234 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1237 "obj/debug.linux/Test3D.main.c"


#line 27 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1243 "obj/debug.linux/Test3D.main.c"


#line 32 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1253 "obj/debug.linux/Test3D.main.c"

#line 35 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1258 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1261 "obj/debug.linux/Test3D.main.c"


#line 41 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1271 "obj/debug.linux/Test3D.main.c"

#line 44 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1276 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1279 "obj/debug.linux/Test3D.main.c"


#line 49 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1285 "obj/debug.linux/Test3D.main.c"


#line 53 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1291 "obj/debug.linux/Test3D.main.c"


#line 56 "/usr/include/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1301 "obj/debug.linux/Test3D.main.c"

#line 59 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1306 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1309 "obj/debug.linux/Test3D.main.c"


#line 62 "/usr/include/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1315 "obj/debug.linux/Test3D.main.c"


#line 67 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1325 "obj/debug.linux/Test3D.main.c"

#line 70 "/usr/include/bits/pthreadtypes.h"
char __size[40];

#line 1330 "obj/debug.linux/Test3D.main.c"

#line 71 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1335 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1338 "obj/debug.linux/Test3D.main.c"


#line 75 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1348 "obj/debug.linux/Test3D.main.c"

#line 78 "/usr/include/bits/pthreadtypes.h"
char __size[48];

#line 1353 "obj/debug.linux/Test3D.main.c"

#line 79 "/usr/include/bits/pthreadtypes.h"
 long long int __align;

#line 1358 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_cond_t;

#line 1361 "obj/debug.linux/Test3D.main.c"


#line 86 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1371 "obj/debug.linux/Test3D.main.c"

#line 89 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1376 "obj/debug.linux/Test3D.main.c"

#line 90 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1381 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1384 "obj/debug.linux/Test3D.main.c"


#line 93 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/bits/pthreadtypes.h"
char __size[8];

#line 1394 "obj/debug.linux/Test3D.main.c"

#line 96 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1399 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1402 "obj/debug.linux/Test3D.main.c"


#line 103 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1408 "obj/debug.linux/Test3D.main.c"


#line 108 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/bits/pthreadtypes.h"
char __size[32];

#line 1418 "obj/debug.linux/Test3D.main.c"

#line 111 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1423 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1426 "obj/debug.linux/Test3D.main.c"


#line 114 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1436 "obj/debug.linux/Test3D.main.c"

#line 117 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1441 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1444 "obj/debug.linux/Test3D.main.c"


#line 10 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)();

#line 1450 "obj/debug.linux/Test3D.main.c"


#line 11 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();

#line 1456 "obj/debug.linux/Test3D.main.c"


#line 12 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov;

#line 1462 "obj/debug.linux/Test3D.main.c"


#line 13 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov;

#line 1468 "obj/debug.linux/Test3D.main.c"


#line 15 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation;

#line 1474 "obj/debug.linux/Test3D.main.c"


#line 16 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation;

#line 1480 "obj/debug.linux/Test3D.main.c"


#line 18 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position;

#line 1486 "obj/debug.linux/Test3D.main.c"


#line 19 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position;

#line 1492 "obj/debug.linux/Test3D.main.c"


#line 21 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type;

#line 1498 "obj/debug.linux/Test3D.main.c"


#line 22 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type;

#line 1504 "obj/debug.linux/Test3D.main.c"


#line 25 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial)();

#line 1510 "obj/debug.linux/Test3D.main.c"


#line 26 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency)();

#line 1516 "obj/debug.linux/Test3D.main.c"


#line 28 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)();

#line 1522 "obj/debug.linux/Test3D.main.c"


#line 29 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh;

#line 1528 "obj/debug.linux/Test3D.main.c"


#line 30 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh;

#line 1534 "obj/debug.linux/Test3D.main.c"


#line 32 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform;

#line 1540 "obj/debug.linux/Test3D.main.c"


#line 33 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform;

#line 1546 "obj/debug.linux/Test3D.main.c"


#line 36 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)();

#line 1552 "obj/debug.linux/Test3D.main.c"


#line 38 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create)();

#line 1558 "obj/debug.linux/Test3D.main.c"


#line 40 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_bitmap;

#line 1564 "obj/debug.linux/Test3D.main.c"


#line 41 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_bitmap;

#line 1570 "obj/debug.linux/Test3D.main.c"


#line 43 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_fileName;

#line 1576 "obj/debug.linux/Test3D.main.c"


#line 44 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_fileName;

#line 1582 "obj/debug.linux/Test3D.main.c"


#line 46 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_window;

#line 1588 "obj/debug.linux/Test3D.main.c"


#line 48 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)();

#line 1594 "obj/debug.linux/Test3D.main.c"


#line 49 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)();

#line 1600 "obj/debug.linux/Test3D.main.c"


#line 50 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)();

#line 1606 "obj/debug.linux/Test3D.main.c"


#line 51 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity;

#line 1612 "obj/debug.linux/Test3D.main.c"


#line 53 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)();

#line 1618 "obj/debug.linux/Test3D.main.c"


#line 54 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver;

#line 1624 "obj/debug.linux/Test3D.main.c"


#line 55 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver;

#line 1630 "obj/debug.linux/Test3D.main.c"


#line 57 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)();

#line 1636 "obj/debug.linux/Test3D.main.c"


#line 58 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)();

#line 1642 "obj/debug.linux/Test3D.main.c"


#line 59 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition)();

#line 1648 "obj/debug.linux/Test3D.main.c"


#line 60 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Move)();

#line 1654 "obj/debug.linux/Test3D.main.c"


#line 61 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();

#line 1660 "obj/debug.linux/Test3D.main.c"


#line 62 "obj/debug.linux/Test3D.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)();

#line 1666 "obj/debug.linux/Test3D.main.c"


#line 63 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background;

#line 1672 "obj/debug.linux/Test3D.main.c"


#line 64 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background;

#line 1678 "obj/debug.linux/Test3D.main.c"


#line 66 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle;

#line 1684 "obj/debug.linux/Test3D.main.c"


#line 67 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle;

#line 1690 "obj/debug.linux/Test3D.main.c"


#line 69 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display;

#line 1696 "obj/debug.linux/Test3D.main.c"


#line 71 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem;

#line 1702 "obj/debug.linux/Test3D.main.c"


#line 73 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose;

#line 1708 "obj/debug.linux/Test3D.main.c"


#line 74 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose;

#line 1714 "obj/debug.linux/Test3D.main.c"


#line 76 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize;

#line 1720 "obj/debug.linux/Test3D.main.c"


#line 77 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize;

#line 1726 "obj/debug.linux/Test3D.main.c"


#line 79 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize;

#line 1732 "obj/debug.linux/Test3D.main.c"


#line 80 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize;

#line 1738 "obj/debug.linux/Test3D.main.c"


#line 82 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position;

#line 1744 "obj/debug.linux/Test3D.main.c"


#line 83 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position;

#line 1750 "obj/debug.linux/Test3D.main.c"


#line 85 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size;

#line 1756 "obj/debug.linux/Test3D.main.c"


#line 86 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size;

#line 1762 "obj/debug.linux/Test3D.main.c"


#line 88 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_text;

#line 1768 "obj/debug.linux/Test3D.main.c"


#line 89 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_text;

#line 1774 "obj/debug.linux/Test3D.main.c"


#line 91 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians;

#line 1780 "obj/debug.linux/Test3D.main.c"


#line 92 "obj/debug.linux/Test3D.main.ec"
void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians;

#line 1786 "obj/debug.linux/Test3D.main.c"


#line 94 "obj/debug.linux/Test3D.main.ec"
void * __ecereFunction___ecereNameSpace__ecere__sys__GetTime;

#line 1792 "obj/debug.linux/Test3D.main.c"


#line 97 "obj/debug.linux/Test3D.main.ec"
void __ecereCreateModuleInstances_Test3D();

#line 1798 "obj/debug.linux/Test3D.main.c"


#line 98 "obj/debug.linux/Test3D.main.ec"
void __ecereDestroyModuleInstances_Test3D();

#line 1804 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  first;

#line 1814 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  last;

#line 1819 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int count;

#line 1824 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int offset;

#line 1829 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int circ;

#line 1834 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1837 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1843 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 100 "obj/debug.linux/Test3D.main.ec"
union
{

#line 100 "obj/debug.linux/Test3D.main.ec"
char c;

#line 1857 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned char uc;

#line 1862 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
short s;

#line 1867 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned short us;

#line 1872 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int i;

#line 1877 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int ui;

#line 1882 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  p;

#line 1887 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
float f;

#line 1892 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
double d;

#line 1897 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
long long i64;

#line 1902 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
uint64 ui64;

#line 1907 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __anon1;

#line 1910 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1913 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned char *  _buffer;

#line 1923 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
size_t count;

#line 1928 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
size_t _size;

#line 1933 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
size_t pos;

#line 1938 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 1941 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 1947 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 1953 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 1959 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 1965 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 1971 "obj/debug.linux/Test3D.main.c"


#line 115 "obj/debug.linux/Test3D.main.ec"
extern int printf(const char * , ...);

#line 1977 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 1983 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 100 "obj/debug.linux/Test3D.main.ec"
void * *  _vTbl;

#line 1993 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 1998 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int _refCount;

#line 2003 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2006 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2012 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2018 "obj/debug.linux/Test3D.main.c"


#line 8 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 2024 "obj/debug.linux/Test3D.main.c"


#line 9 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 2030 "obj/debug.linux/Test3D.main.c"


#line 24 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 2036 "obj/debug.linux/Test3D.main.c"


#line 27 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 2042 "obj/debug.linux/Test3D.main.c"


#line 35 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 2048 "obj/debug.linux/Test3D.main.c"


#line 37 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere;

#line 2054 "obj/debug.linux/Test3D.main.c"


#line 39 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__BitmapResource;

#line 2060 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2066 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2072 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Evolve(struct __ecereNameSpace__ecere__com__Instance **  instancePtr, struct __ecereNameSpace__ecere__com__Class * _class);

#line 2078 "obj/debug.linux/Test3D.main.c"


#line 256 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2084 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 2090 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 2100 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 2105 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 2110 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int isProperty;

#line 2115 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberAccess;

#line 2120 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int id;

#line 2125 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2130 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  dataTypeString;

#line 2135 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2140 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2145 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void (*  Set)(void * , int);

#line 2150 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int (*  Get)(void * );

#line 2155 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int (*  IsSet)(void * );

#line 2160 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  data;

#line 2165 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  symbol;

#line 2170 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int vid;

#line 2175 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int conversion;

#line 2180 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int watcherOffset;

#line 2185 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  category;

#line 2190 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int compiled;

#line 2195 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int selfWatchable;

#line 2200 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int isWatchable;

#line 2205 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2208 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2214 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 2220 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 2226 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2232 "obj/debug.linux/Test3D.main.c"


#line 14 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2238 "obj/debug.linux/Test3D.main.c"


#line 17 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 2244 "obj/debug.linux/Test3D.main.c"


#line 20 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 2250 "obj/debug.linux/Test3D.main.c"


#line 23 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 2256 "obj/debug.linux/Test3D.main.c"


#line 31 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;

#line 2262 "obj/debug.linux/Test3D.main.c"


#line 34 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 2268 "obj/debug.linux/Test3D.main.c"


#line 42 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_bitmap;

#line 2274 "obj/debug.linux/Test3D.main.c"


#line 45 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_fileName;

#line 2280 "obj/debug.linux/Test3D.main.c"


#line 47 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_window;

#line 2286 "obj/debug.linux/Test3D.main.c"


#line 52 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 2292 "obj/debug.linux/Test3D.main.c"


#line 56 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 2298 "obj/debug.linux/Test3D.main.c"


#line 65 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 2304 "obj/debug.linux/Test3D.main.c"


#line 68 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 2310 "obj/debug.linux/Test3D.main.c"


#line 70 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 2316 "obj/debug.linux/Test3D.main.c"


#line 72 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 2322 "obj/debug.linux/Test3D.main.c"


#line 75 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;

#line 2328 "obj/debug.linux/Test3D.main.c"


#line 78 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;

#line 2334 "obj/debug.linux/Test3D.main.c"


#line 81 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;

#line 2340 "obj/debug.linux/Test3D.main.c"


#line 84 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 2346 "obj/debug.linux/Test3D.main.c"


#line 87 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 2352 "obj/debug.linux/Test3D.main.c"


#line 90 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_text;

#line 2358 "obj/debug.linux/Test3D.main.c"


#line 93 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 2364 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 2370 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 2380 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int count;

#line 2385 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2390 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void (*  FreeKey)(void *  key);

#line 2395 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2398 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 2404 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 2414 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 2419 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 2424 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 2429 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int depth;

#line 2434 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int (*  function)();

#line 2439 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int vid;

#line 2444 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int type;

#line 2449 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2454 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  symbol;

#line 2459 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  dataTypeString;

#line 2464 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2469 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberAccess;

#line 2474 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2477 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 2483 "obj/debug.linux/Test3D.main.c"


#line 4 "obj/debug.linux/Test3D.main.ec"
static struct __ecereNameSpace__ecere__com__Instance * __currentModule;

#line 2489 "obj/debug.linux/Test3D.main.c"


#line 6 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 2495 "obj/debug.linux/Test3D.main.c"


#line 95 "obj/debug.linux/Test3D.main.ec"
void __ecereRegisterModule_Test3D(struct __ecereNameSpace__ecere__com__Instance * module);

#line 2501 "obj/debug.linux/Test3D.main.c"


#line 96 "obj/debug.linux/Test3D.main.ec"
void __ecereUnregisterModule_Test3D(struct __ecereNameSpace__ecere__com__Instance * module);

#line 2507 "obj/debug.linux/Test3D.main.c"


#line 114 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com__eModule_Load(struct __ecereNameSpace__ecere__com__Instance * fromModule, const char *  name, int importAccess);

#line 2513 "obj/debug.linux/Test3D.main.c"


#line 119 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_FindClass(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 2519 "obj/debug.linux/Test3D.main.c"


#line 122 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_FindMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 2525 "obj/debug.linux/Test3D.main.c"


#line 126 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Property * __ecereNameSpace__ecere__com__eClass_FindProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 2531 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Application;

#line 2537 "obj/debug.linux/Test3D.main.c"


#line 111 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com____ecere_COM_Initialize(unsigned int guiApp, int argc, char *  argv[]);

#line 2543 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 2549 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 2559 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 2564 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 2569 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 2574 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int depth;

#line 2579 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 2584 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 2589 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 2594 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 2599 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 2604 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2607 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 100 "obj/debug.linux/Test3D.main.ec"
int argc;

#line 2617 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char * *  argv;

#line 2622 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int exitCode;

#line 2627 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int isGUIApp;

#line 2632 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 2637 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
char *  parsedCommand;

#line 2642 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 2647 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2650 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 2660 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 2665 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 2670 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 2675 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 2680 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 2685 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 2690 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 2695 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  library;

#line 2700 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  Unload;

#line 2705 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int importType;

#line 2710 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int origImportType;

#line 2715 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 2720 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 2725 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2728 "obj/debug.linux/Test3D.main.c"

void __ecereRegisterModule_Test3D_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 100 "obj/debug.linux/Test3D.main.ec"
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 2738 "obj/debug.linux/Test3D.main.c"


#line 258 "obj/debug.linux/Test3D.main.ec"
}
#line 2743 "obj/debug.linux/Test3D.main.c"


void __ecereUnregisterModule_Test3D_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 100 "obj/debug.linux/Test3D.main.ec"
{


#line 258 "obj/debug.linux/Test3D.main.ec"
}
#line 2754 "obj/debug.linux/Test3D.main.c"



#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 2761 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 100 "obj/debug.linux/Test3D.main.ec"
union
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct
{

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  dataTypeString;

#line 2779 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2784 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __anon1;

#line 2787 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 2792 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct
{

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  memberString;

#line 2801 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
union
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 2810 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 2815 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 2820 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __anon1;

#line 2823 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __anon2;

#line 2826 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct __anon1;

#line 2829 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2832 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 2842 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 2847 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 2852 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int isProperty;

#line 2857 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberAccess;

#line 2862 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int id;

#line 2867 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2872 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  dataTypeString;

#line 2877 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2882 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2887 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int type;

#line 2892 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int offset;

#line 2897 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberID;

#line 2902 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 2907 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 2912 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberOffset;

#line 2917 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
short structAlignment;

#line 2922 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
short pointerAlignment;

#line 2927 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 2930 "obj/debug.linux/Test3D.main.c"


#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 2940 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 2945 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 2950 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int offset;

#line 2955 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int structSize;

#line 2960 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void * *  _vTbl;

#line 2965 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int vTblSize;

#line 2970 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int (*  Constructor)(void * );

#line 2975 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void (*  Destructor)(void * );

#line 2980 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int offsetClass;

#line 2985 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int sizeClass;

#line 2990 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 2995 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3000 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3005 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3010 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3015 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3020 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3025 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberID;

#line 3030 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int startMemberID;

#line 3035 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int type;

#line 3040 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3045 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3050 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  dataTypeString;

#line 3055 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3060 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int typeSize;

#line 3065 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int defaultAlignment;

#line 3070 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void (*  Initialize)();

#line 3075 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int memberOffset;

#line 3080 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3085 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  designerClass;

#line 3090 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int noExpansion;

#line 3095 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  defaultProperty;

#line 3100 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int comRedefinition;

#line 3105 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int count;

#line 3110 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int isRemote;

#line 3115 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int internalDecl;

#line 3120 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  data;

#line 3125 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int computeSize;

#line 3130 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
short structAlignment;

#line 3135 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
short pointerAlignment;

#line 3140 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int destructionWatchOffset;

#line 3145 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int fixed;

#line 3150 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 3155 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int inheritanceAccess;

#line 3160 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
const char *  fullName;

#line 3165 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  symbol;

#line 3170 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 3175 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 3180 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 3185 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 3190 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 3195 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
int numParams;

#line 3200 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int isInstanceClass;

#line 3205 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
unsigned int byValueSystemClass;

#line 3210 "obj/debug.linux/Test3D.main.c"

#line 100 "obj/debug.linux/Test3D.main.ec"
void *  bindingsClass;

#line 3215 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 3218 "obj/debug.linux/Test3D.main.c"


#line 250 "obj/debug.linux/Test3D.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 3224 "obj/debug.linux/Test3D.main.c"


#line 255 "obj/debug.linux/Test3D.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Application;

#line 3230 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 3236 "obj/debug.linux/Test3D.main.c"


#line 241 "obj/debug.linux/Test3D.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_FindFunction(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3242 "obj/debug.linux/Test3D.main.c"


#line 108 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction
{

#line 242 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * prev;

#line 3252 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * next;

#line 3257 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
const char *  name;

#line 3262 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
int (*  function)();

#line 3267 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3272 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3277 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
const char *  dataTypeString;

#line 3282 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3287 "obj/debug.linux/Test3D.main.c"

#line 242 "obj/debug.linux/Test3D.main.ec"
void *  symbol;

#line 3292 "obj/debug.linux/Test3D.main.c"
} ecere_gcc_struct;

#line 3295 "obj/debug.linux/Test3D.main.c"

int main(int _argc, char * _argv[])

#line 101 "obj/debug.linux/Test3D.main.ec"
{

#line 102 "obj/debug.linux/Test3D.main.ec"
int exitCode;

#line 3305 "obj/debug.linux/Test3D.main.c"

#line 103 "obj/debug.linux/Test3D.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3310 "obj/debug.linux/Test3D.main.c"

#line 104 "obj/debug.linux/Test3D.main.ec"
unsigned int setThingsUp = !__thisModule;

#line 3315 "obj/debug.linux/Test3D.main.c"

#line 105 "obj/debug.linux/Test3D.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Class * _class;

#line 3320 "obj/debug.linux/Test3D.main.c"

#line 106 "obj/debug.linux/Test3D.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Method * method;

#line 3325 "obj/debug.linux/Test3D.main.c"

#line 107 "obj/debug.linux/Test3D.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * _property;

#line 3330 "obj/debug.linux/Test3D.main.c"

#line 108 "obj/debug.linux/Test3D.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__GlobalFunction * function;

#line 3335 "obj/debug.linux/Test3D.main.c"


#line 110 "obj/debug.linux/Test3D.main.ec"
if(setThingsUp)

#line 111 "obj/debug.linux/Test3D.main.ec"
__thisModule = __ecereNameSpace__ecere__com____ecere_COM_Initialize((unsigned int)1, _argc, (void *)_argv);
#line 3343 "obj/debug.linux/Test3D.main.c"

#line 3345 "obj/debug.linux/Test3D.main.c"


#line 113 "obj/debug.linux/Test3D.main.ec"
__currentModule = module = __thisModule;
#line 3350 "obj/debug.linux/Test3D.main.c"


#line 114 "obj/debug.linux/Test3D.main.ec"
if(!__ecereNameSpace__ecere__com__eModule_Load(module, "ecere", 2))

#line 115 "obj/debug.linux/Test3D.main.ec"
printf("Error loading eC module \"%s\" (shared library -- .so/.dll/.dylib)\nThings might go very wrong.\nCheck installed libraries or PATH (Windows) / (DY)LD_LIBRARY_PATH (Unix / Apple) environment variable.\n", "ecere");
#line 3358 "obj/debug.linux/Test3D.main.c"

#line 3360 "obj/debug.linux/Test3D.main.c"


#line 117 "obj/debug.linux/Test3D.main.ec"
__ecereRegisterModule_Test3D(module);
#line 3365 "obj/debug.linux/Test3D.main.c"


#line 119 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Module = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Module");
#line 3370 "obj/debug.linux/Test3D.main.c"


#line 121 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Camera = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Camera");
#line 3375 "obj/debug.linux/Test3D.main.c"


#line 122 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Setup", module);
#line 3380 "obj/debug.linux/Test3D.main.c"


#line 123 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 123 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup = method->function;
#line 3388 "obj/debug.linux/Test3D.main.c"

#line 3390 "obj/debug.linux/Test3D.main.c"


#line 124 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Update", module);
#line 3395 "obj/debug.linux/Test3D.main.c"


#line 125 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 125 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update = method->function;
#line 3403 "obj/debug.linux/Test3D.main.c"

#line 3405 "obj/debug.linux/Test3D.main.c"


#line 126 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "fov", module);
#line 3410 "obj/debug.linux/Test3D.main.c"


#line 127 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 127 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov = _property->Set;
#line 3418 "obj/debug.linux/Test3D.main.c"

#line 3420 "obj/debug.linux/Test3D.main.c"


#line 128 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 128 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov = _property->Get;
#line 3428 "obj/debug.linux/Test3D.main.c"

#line 3430 "obj/debug.linux/Test3D.main.c"


#line 129 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "orientation", module);
#line 3435 "obj/debug.linux/Test3D.main.c"


#line 130 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 130 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation = _property->Set;
#line 3443 "obj/debug.linux/Test3D.main.c"

#line 3445 "obj/debug.linux/Test3D.main.c"


#line 131 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 131 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation = _property->Get;
#line 3453 "obj/debug.linux/Test3D.main.c"

#line 3455 "obj/debug.linux/Test3D.main.c"


#line 132 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "position", module);
#line 3460 "obj/debug.linux/Test3D.main.c"


#line 133 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 133 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position = _property->Set;
#line 3468 "obj/debug.linux/Test3D.main.c"

#line 3470 "obj/debug.linux/Test3D.main.c"


#line 134 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 134 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position = _property->Get;
#line 3478 "obj/debug.linux/Test3D.main.c"

#line 3480 "obj/debug.linux/Test3D.main.c"


#line 135 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "type", module);
#line 3485 "obj/debug.linux/Test3D.main.c"


#line 136 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 136 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type = _property->Set;
#line 3493 "obj/debug.linux/Test3D.main.c"

#line 3495 "obj/debug.linux/Test3D.main.c"


#line 137 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 137 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type = _property->Get;
#line 3503 "obj/debug.linux/Test3D.main.c"

#line 3505 "obj/debug.linux/Test3D.main.c"


#line 139 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Material");
#line 3510 "obj/debug.linux/Test3D.main.c"


#line 141 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Mesh");
#line 3515 "obj/debug.linux/Test3D.main.c"


#line 142 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ApplyMaterial", module);
#line 3520 "obj/debug.linux/Test3D.main.c"


#line 143 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 143 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial = method->function;
#line 3528 "obj/debug.linux/Test3D.main.c"

#line 3530 "obj/debug.linux/Test3D.main.c"


#line 144 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ApplyTranslucency", module);
#line 3535 "obj/debug.linux/Test3D.main.c"


#line 145 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 145 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency = method->function;
#line 3543 "obj/debug.linux/Test3D.main.c"

#line 3545 "obj/debug.linux/Test3D.main.c"


#line 147 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Object");
#line 3550 "obj/debug.linux/Test3D.main.c"


#line 148 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "UpdateTransform", module);
#line 3555 "obj/debug.linux/Test3D.main.c"


#line 149 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 149 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform = method->function;
#line 3563 "obj/debug.linux/Test3D.main.c"

#line 3565 "obj/debug.linux/Test3D.main.c"


#line 150 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "mesh", module);
#line 3570 "obj/debug.linux/Test3D.main.c"


#line 151 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 151 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh = _property->Set;
#line 3578 "obj/debug.linux/Test3D.main.c"

#line 3580 "obj/debug.linux/Test3D.main.c"


#line 152 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 152 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh = _property->Get;
#line 3588 "obj/debug.linux/Test3D.main.c"

#line 3590 "obj/debug.linux/Test3D.main.c"


#line 153 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "transform", module);
#line 3595 "obj/debug.linux/Test3D.main.c"


#line 154 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 154 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform = _property->Set;
#line 3603 "obj/debug.linux/Test3D.main.c"

#line 3605 "obj/debug.linux/Test3D.main.c"


#line 155 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 155 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform = _property->Get;
#line 3613 "obj/debug.linux/Test3D.main.c"

#line 3615 "obj/debug.linux/Test3D.main.c"


#line 157 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::meshes::Cube");
#line 3620 "obj/debug.linux/Test3D.main.c"


#line 158 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube, "Create", module);
#line 3625 "obj/debug.linux/Test3D.main.c"


#line 159 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 159 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create = method->function;
#line 3633 "obj/debug.linux/Test3D.main.c"

#line 3635 "obj/debug.linux/Test3D.main.c"


#line 161 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::meshes::Sphere");
#line 3640 "obj/debug.linux/Test3D.main.c"


#line 162 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "Create", module);
#line 3645 "obj/debug.linux/Test3D.main.c"


#line 163 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 163 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create = method->function;
#line 3653 "obj/debug.linux/Test3D.main.c"

#line 3655 "obj/debug.linux/Test3D.main.c"


#line 165 "obj/debug.linux/Test3D.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx__BitmapResource = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::BitmapResource");
#line 3660 "obj/debug.linux/Test3D.main.c"


#line 166 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_bitmap = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__BitmapResource, "bitmap", module);
#line 3665 "obj/debug.linux/Test3D.main.c"


#line 167 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 167 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_bitmap = _property->Set;
#line 3673 "obj/debug.linux/Test3D.main.c"

#line 3675 "obj/debug.linux/Test3D.main.c"


#line 168 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 168 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_bitmap = _property->Get;
#line 3683 "obj/debug.linux/Test3D.main.c"

#line 3685 "obj/debug.linux/Test3D.main.c"


#line 169 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_fileName = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__BitmapResource, "fileName", module);
#line 3690 "obj/debug.linux/Test3D.main.c"


#line 170 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 170 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_fileName = _property->Set;
#line 3698 "obj/debug.linux/Test3D.main.c"

#line 3700 "obj/debug.linux/Test3D.main.c"


#line 171 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 171 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Get_fileName = _property->Get;
#line 3708 "obj/debug.linux/Test3D.main.c"

#line 3710 "obj/debug.linux/Test3D.main.c"


#line 172 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_window = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__BitmapResource, "window", module);
#line 3715 "obj/debug.linux/Test3D.main.c"


#line 173 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 173 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__BitmapResource_Set_window = _property->Set;
#line 3723 "obj/debug.linux/Test3D.main.c"

#line 3725 "obj/debug.linux/Test3D.main.c"


#line 175 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Display");
#line 3730 "obj/debug.linux/Test3D.main.c"


#line 176 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "DrawObject", module);
#line 3735 "obj/debug.linux/Test3D.main.c"


#line 177 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 177 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject = method->function;
#line 3743 "obj/debug.linux/Test3D.main.c"

#line 3745 "obj/debug.linux/Test3D.main.c"


#line 178 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetCamera", module);
#line 3750 "obj/debug.linux/Test3D.main.c"


#line 179 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 179 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera = method->function;
#line 3758 "obj/debug.linux/Test3D.main.c"

#line 3760 "obj/debug.linux/Test3D.main.c"


#line 180 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetLight", module);
#line 3765 "obj/debug.linux/Test3D.main.c"


#line 181 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 181 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight = method->function;
#line 3773 "obj/debug.linux/Test3D.main.c"

#line 3775 "obj/debug.linux/Test3D.main.c"


#line 182 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "fogDensity", module);
#line 3780 "obj/debug.linux/Test3D.main.c"


#line 183 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 183 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity = _property->Set;
#line 3788 "obj/debug.linux/Test3D.main.c"

#line 3790 "obj/debug.linux/Test3D.main.c"


#line 185 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Surface");
#line 3795 "obj/debug.linux/Test3D.main.c"


#line 186 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Clear", module);
#line 3800 "obj/debug.linux/Test3D.main.c"


#line 187 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 187 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear = method->function;
#line 3808 "obj/debug.linux/Test3D.main.c"

#line 3810 "obj/debug.linux/Test3D.main.c"


#line 189 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::GuiApplication");
#line 3815 "obj/debug.linux/Test3D.main.c"


#line 190 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "driver", module);
#line 3820 "obj/debug.linux/Test3D.main.c"


#line 191 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 191 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver = _property->Set;
#line 3828 "obj/debug.linux/Test3D.main.c"

#line 3830 "obj/debug.linux/Test3D.main.c"


#line 192 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 192 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver = _property->Get;
#line 3838 "obj/debug.linux/Test3D.main.c"

#line 3840 "obj/debug.linux/Test3D.main.c"


#line 194 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::Window");
#line 3845 "obj/debug.linux/Test3D.main.c"


#line 195 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Capture", module);
#line 3850 "obj/debug.linux/Test3D.main.c"


#line 196 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 196 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture = method->function;
#line 3858 "obj/debug.linux/Test3D.main.c"

#line 3860 "obj/debug.linux/Test3D.main.c"


#line 197 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Destroy", module);
#line 3865 "obj/debug.linux/Test3D.main.c"


#line 198 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 198 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy = method->function;
#line 3873 "obj/debug.linux/Test3D.main.c"

#line 3875 "obj/debug.linux/Test3D.main.c"


#line 199 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "GetMousePosition", module);
#line 3880 "obj/debug.linux/Test3D.main.c"


#line 200 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 200 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition = method->function;
#line 3888 "obj/debug.linux/Test3D.main.c"

#line 3890 "obj/debug.linux/Test3D.main.c"


#line 201 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Move", module);
#line 3895 "obj/debug.linux/Test3D.main.c"


#line 202 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 202 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Move = method->function;
#line 3903 "obj/debug.linux/Test3D.main.c"

#line 3905 "obj/debug.linux/Test3D.main.c"


#line 203 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ReleaseCapture", module);
#line 3910 "obj/debug.linux/Test3D.main.c"


#line 204 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 204 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture = method->function;
#line 3918 "obj/debug.linux/Test3D.main.c"

#line 3920 "obj/debug.linux/Test3D.main.c"


#line 205 "obj/debug.linux/Test3D.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Update", module);
#line 3925 "obj/debug.linux/Test3D.main.c"


#line 206 "obj/debug.linux/Test3D.main.ec"
if(method)

#line 206 "obj/debug.linux/Test3D.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update = method->function;
#line 3933 "obj/debug.linux/Test3D.main.c"

#line 3935 "obj/debug.linux/Test3D.main.c"


#line 207 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_background = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "background", module);
#line 3940 "obj/debug.linux/Test3D.main.c"


#line 208 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 208 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background = _property->Set;
#line 3948 "obj/debug.linux/Test3D.main.c"

#line 3950 "obj/debug.linux/Test3D.main.c"


#line 209 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 209 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_background = _property->Get;
#line 3958 "obj/debug.linux/Test3D.main.c"

#line 3960 "obj/debug.linux/Test3D.main.c"


#line 210 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "borderStyle", module);
#line 3965 "obj/debug.linux/Test3D.main.c"


#line 211 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 211 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle = _property->Set;
#line 3973 "obj/debug.linux/Test3D.main.c"

#line 3975 "obj/debug.linux/Test3D.main.c"


#line 212 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 212 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle = _property->Get;
#line 3983 "obj/debug.linux/Test3D.main.c"

#line 3985 "obj/debug.linux/Test3D.main.c"


#line 213 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_display = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "display", module);
#line 3990 "obj/debug.linux/Test3D.main.c"


#line 214 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 214 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display = _property->Get;
#line 3998 "obj/debug.linux/Test3D.main.c"

#line 4000 "obj/debug.linux/Test3D.main.c"


#line 215 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "displaySystem", module);
#line 4005 "obj/debug.linux/Test3D.main.c"


#line 216 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 216 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem = _property->Get;
#line 4013 "obj/debug.linux/Test3D.main.c"

#line 4015 "obj/debug.linux/Test3D.main.c"


#line 217 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasClose = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasClose", module);
#line 4020 "obj/debug.linux/Test3D.main.c"


#line 218 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 218 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose = _property->Set;
#line 4028 "obj/debug.linux/Test3D.main.c"

#line 4030 "obj/debug.linux/Test3D.main.c"


#line 219 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 219 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose = _property->Get;
#line 4038 "obj/debug.linux/Test3D.main.c"

#line 4040 "obj/debug.linux/Test3D.main.c"


#line 220 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasMaximize", module);
#line 4045 "obj/debug.linux/Test3D.main.c"


#line 221 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 221 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize = _property->Set;
#line 4053 "obj/debug.linux/Test3D.main.c"

#line 4055 "obj/debug.linux/Test3D.main.c"


#line 222 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 222 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize = _property->Get;
#line 4063 "obj/debug.linux/Test3D.main.c"

#line 4065 "obj/debug.linux/Test3D.main.c"


#line 223 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasMinimize", module);
#line 4070 "obj/debug.linux/Test3D.main.c"


#line 224 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 224 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize = _property->Set;
#line 4078 "obj/debug.linux/Test3D.main.c"

#line 4080 "obj/debug.linux/Test3D.main.c"


#line 225 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 225 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize = _property->Get;
#line 4088 "obj/debug.linux/Test3D.main.c"

#line 4090 "obj/debug.linux/Test3D.main.c"


#line 226 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "position", module);
#line 4095 "obj/debug.linux/Test3D.main.c"


#line 227 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 227 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_position = _property->Set;
#line 4103 "obj/debug.linux/Test3D.main.c"

#line 4105 "obj/debug.linux/Test3D.main.c"


#line 228 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 228 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position = _property->Get;
#line 4113 "obj/debug.linux/Test3D.main.c"

#line 4115 "obj/debug.linux/Test3D.main.c"


#line 229 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "size", module);
#line 4120 "obj/debug.linux/Test3D.main.c"


#line 230 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 230 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size = _property->Set;
#line 4128 "obj/debug.linux/Test3D.main.c"

#line 4130 "obj/debug.linux/Test3D.main.c"


#line 231 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 231 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size = _property->Get;
#line 4138 "obj/debug.linux/Test3D.main.c"

#line 4140 "obj/debug.linux/Test3D.main.c"


#line 232 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_text = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "text", module);
#line 4145 "obj/debug.linux/Test3D.main.c"


#line 233 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 233 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_text = _property->Set;
#line 4153 "obj/debug.linux/Test3D.main.c"

#line 4155 "obj/debug.linux/Test3D.main.c"


#line 234 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 234 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_text = _property->Get;
#line 4163 "obj/debug.linux/Test3D.main.c"

#line 4165 "obj/debug.linux/Test3D.main.c"


#line 236 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::sys::Degrees");
#line 4170 "obj/debug.linux/Test3D.main.c"


#line 237 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::sys::Radians", module);
#line 4175 "obj/debug.linux/Test3D.main.c"


#line 238 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 238 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians = _property->Set;
#line 4183 "obj/debug.linux/Test3D.main.c"

#line 4185 "obj/debug.linux/Test3D.main.c"


#line 239 "obj/debug.linux/Test3D.main.ec"
if(_property)

#line 239 "obj/debug.linux/Test3D.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians = _property->Get;
#line 4193 "obj/debug.linux/Test3D.main.c"

#line 4195 "obj/debug.linux/Test3D.main.c"


#line 241 "obj/debug.linux/Test3D.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::GetTime");
#line 4200 "obj/debug.linux/Test3D.main.c"


#line 242 "obj/debug.linux/Test3D.main.ec"
if(function)

#line 242 "obj/debug.linux/Test3D.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetTime = function->function;
#line 4208 "obj/debug.linux/Test3D.main.c"

#line 4210 "obj/debug.linux/Test3D.main.c"


#line 245 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "MyApp");
#line 4215 "obj/debug.linux/Test3D.main.c"


#line 246 "obj/debug.linux/Test3D.main.ec"
if(setThingsUp)

#line 246 "obj/debug.linux/Test3D.main.ec"
__ecereNameSpace__ecere__com__eInstance_Evolve((struct __ecereNameSpace__ecere__com__Instance **)&__currentModule, _class);
#line 4223 "obj/debug.linux/Test3D.main.c"

#line 4225 "obj/debug.linux/Test3D.main.c"


#line 247 "obj/debug.linux/Test3D.main.ec"
__thisModule = __currentModule;
#line 4230 "obj/debug.linux/Test3D.main.c"


#line 248 "obj/debug.linux/Test3D.main.ec"
__ecereCreateModuleInstances_Test3D();
#line 4235 "obj/debug.linux/Test3D.main.c"


#line 250 "obj/debug.linux/Test3D.main.ec"
((void (*)(void *))(void *)((struct __ecereNameSpace__ecere__com__Instance *)(char *)__currentModule)->_vTbl[12])(__currentModule);
#line 4240 "obj/debug.linux/Test3D.main.c"


#line 251 "obj/debug.linux/Test3D.main.ec"
__ecereDestroyModuleInstances_Test3D();
#line 4245 "obj/debug.linux/Test3D.main.c"


#line 254 "obj/debug.linux/Test3D.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "ecere::com::Application");
#line 4250 "obj/debug.linux/Test3D.main.c"


#line 255 "obj/debug.linux/Test3D.main.ec"
exitCode = ((struct __ecereNameSpace__ecere__com__Application *)(((char *)((struct __ecereNameSpace__ecere__com__Instance *)__currentModule) + sizeof(struct __ecereNameSpace__ecere__com__Module) + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->exitCode;
#line 4255 "obj/debug.linux/Test3D.main.c"


#line 256 "obj/debug.linux/Test3D.main.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__currentModule), __currentModule = 0);
#line 4260 "obj/debug.linux/Test3D.main.c"


#line 257 "obj/debug.linux/Test3D.main.ec"
return exitCode;
#line 4265 "obj/debug.linux/Test3D.main.c"


#line 258 "obj/debug.linux/Test3D.main.ec"
}
#line 4270 "obj/debug.linux/Test3D.main.c"


