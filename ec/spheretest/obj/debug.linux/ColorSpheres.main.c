/* Code generated from eC source file: ColorSpheres.main.ec */
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

#line 55 "obj/debug.linux/ColorSpheres.main.c"


#line 32 "/usr/include/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/ColorSpheres.main.c"


#line 33 "/usr/include/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/ColorSpheres.main.c"


#line 34 "/usr/include/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/ColorSpheres.main.c"


#line 37 "/usr/include/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/ColorSpheres.main.c"


#line 38 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/ColorSpheres.main.c"


#line 39 "/usr/include/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/ColorSpheres.main.c"


#line 40 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/ColorSpheres.main.c"


#line 41 "/usr/include/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/ColorSpheres.main.c"


#line 42 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/ColorSpheres.main.c"


#line 44 "/usr/include/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/ColorSpheres.main.c"


#line 45 "/usr/include/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/ColorSpheres.main.c"


#line 52 "/usr/include/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/ColorSpheres.main.c"


#line 53 "/usr/include/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/ColorSpheres.main.c"


#line 54 "/usr/include/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/ColorSpheres.main.c"


#line 55 "/usr/include/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/ColorSpheres.main.c"


#line 56 "/usr/include/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/ColorSpheres.main.c"


#line 57 "/usr/include/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/ColorSpheres.main.c"


#line 58 "/usr/include/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/ColorSpheres.main.c"


#line 59 "/usr/include/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/ColorSpheres.main.c"


#line 63 "/usr/include/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/ColorSpheres.main.c"


#line 64 "/usr/include/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/ColorSpheres.main.c"


#line 72 "/usr/include/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/ColorSpheres.main.c"


#line 73 "/usr/include/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/ColorSpheres.main.c"


#line 145 "/usr/include/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/ColorSpheres.main.c"


#line 146 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/ColorSpheres.main.c"


#line 147 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/ColorSpheres.main.c"


#line 148 "/usr/include/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/ColorSpheres.main.c"


#line 149 "/usr/include/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/ColorSpheres.main.c"


#line 150 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/ColorSpheres.main.c"


#line 151 "/usr/include/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/ColorSpheres.main.c"


#line 152 "/usr/include/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/ColorSpheres.main.c"


#line 153 "/usr/include/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/ColorSpheres.main.c"


#line 154 "/usr/include/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/ColorSpheres.main.c"


#line 155 "/usr/include/bits/types.h"
typedef struct
{

#line 155 "/usr/include/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/ColorSpheres.main.c"


#line 156 "/usr/include/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/ColorSpheres.main.c"


#line 157 "/usr/include/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/ColorSpheres.main.c"


#line 158 "/usr/include/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/ColorSpheres.main.c"


#line 159 "/usr/include/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/ColorSpheres.main.c"


#line 160 "/usr/include/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/ColorSpheres.main.c"


#line 161 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/ColorSpheres.main.c"


#line 162 "/usr/include/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/ColorSpheres.main.c"


#line 164 "/usr/include/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/ColorSpheres.main.c"


#line 165 "/usr/include/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/ColorSpheres.main.c"


#line 168 "/usr/include/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/ColorSpheres.main.c"


#line 171 "/usr/include/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/ColorSpheres.main.c"


#line 174 "/usr/include/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/ColorSpheres.main.c"


#line 179 "/usr/include/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/ColorSpheres.main.c"


#line 180 "/usr/include/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/ColorSpheres.main.c"


#line 183 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/ColorSpheres.main.c"


#line 184 "/usr/include/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/ColorSpheres.main.c"


#line 187 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/ColorSpheres.main.c"


#line 188 "/usr/include/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/ColorSpheres.main.c"


#line 191 "/usr/include/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/ColorSpheres.main.c"


#line 193 "/usr/include/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/ColorSpheres.main.c"


#line 196 "/usr/include/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/ColorSpheres.main.c"


#line 198 "/usr/include/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/ColorSpheres.main.c"


#line 202 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/ColorSpheres.main.c"


#line 203 "/usr/include/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/ColorSpheres.main.c"


#line 206 "/usr/include/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/ColorSpheres.main.c"


#line 209 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/ColorSpheres.main.c"


#line 214 "/usr/include/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/ColorSpheres.main.c"


#line 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/ColorSpheres.main.c"


#line 25 "/usr/include/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/ColorSpheres.main.c"


#line 26 "/usr/include/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/ColorSpheres.main.c"


#line 27 "/usr/include/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/ColorSpheres.main.c"


#line 24 "/usr/include/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/ColorSpheres.main.c"


#line 25 "/usr/include/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/ColorSpheres.main.c"


#line 26 "/usr/include/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/ColorSpheres.main.c"


#line 27 "/usr/include/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/ColorSpheres.main.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/ColorSpheres.main.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/ColorSpheres.main.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/ColorSpheres.main.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/ColorSpheres.main.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/ColorSpheres.main.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/ColorSpheres.main.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/ColorSpheres.main.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/ColorSpheres.main.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/ColorSpheres.main.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/ColorSpheres.main.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/ColorSpheres.main.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/ColorSpheres.main.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/ColorSpheres.main.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/ColorSpheres.main.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/ColorSpheres.main.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/ColorSpheres.main.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/ColorSpheres.main.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/ColorSpheres.main.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/ColorSpheres.main.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/ColorSpheres.main.c"


#line 33 "/usr/include/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/ColorSpheres.main.c"


#line 34 "/usr/include/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/ColorSpheres.main.c"


#line 35 "/usr/include/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/ColorSpheres.main.c"


#line 36 "/usr/include/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/ColorSpheres.main.c"


#line 37 "/usr/include/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/ColorSpheres.main.c"


#line 38 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/ColorSpheres.main.c"


#line 39 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/ColorSpheres.main.c"


#line 42 "/usr/include/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/ColorSpheres.main.c"


#line 47 "/usr/include/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/ColorSpheres.main.c"


#line 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/ColorSpheres.main.c"


#line 64 "/usr/include/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/ColorSpheres.main.c"


#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/ColorSpheres.main.c"


#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/ColorSpheres.main.c"


#line 79 "/usr/include/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/ColorSpheres.main.c"


#line 85 "/usr/include/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/ColorSpheres.main.c"


#line 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/ColorSpheres.main.c"


#line 103 "/usr/include/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/ColorSpheres.main.c"


#line 108 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/ColorSpheres.main.c"


#line 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/ColorSpheres.main.c"


#line 115 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/ColorSpheres.main.c"


#line 121 "/usr/include/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/ColorSpheres.main.c"


#line 7 "/usr/include/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/ColorSpheres.main.c"


#line 7 "/usr/include/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/ColorSpheres.main.c"


#line 7 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/ColorSpheres.main.c"


#line 7 "/usr/include/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/ColorSpheres.main.c"


#line 209 "/usr/lib/gcc/x86_64-pc-linux-gnu/9.1.0/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/ColorSpheres.main.c"


#line 148 "/usr/include/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/ColorSpheres.main.c"


#line 149 "/usr/include/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/ColorSpheres.main.c"


#line 150 "/usr/include/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/ColorSpheres.main.c"


#line 158 "/usr/include/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/ColorSpheres.main.c"


#line 159 "/usr/include/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/ColorSpheres.main.c"


#line 160 "/usr/include/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/ColorSpheres.main.c"


#line 161 "/usr/include/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/ColorSpheres.main.c"


#line 164 "/usr/include/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/ColorSpheres.main.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/bits/byteswap.h"
{

#line 37 "/usr/include/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/ColorSpheres.main.c"


#line 41 "/usr/include/bits/byteswap.h"
}
#line 814 "obj/debug.linux/ColorSpheres.main.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/bits/byteswap.h"
{

#line 52 "/usr/include/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/ColorSpheres.main.c"


#line 56 "/usr/include/bits/byteswap.h"
}
#line 829 "obj/debug.linux/ColorSpheres.main.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/bits/byteswap.h"
{

#line 73 "/usr/include/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/ColorSpheres.main.c"


#line 77 "/usr/include/bits/byteswap.h"
}
#line 844 "obj/debug.linux/ColorSpheres.main.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/bits/uintn-identity.h"
{

#line 35 "/usr/include/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/ColorSpheres.main.c"


#line 36 "/usr/include/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/ColorSpheres.main.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/bits/uintn-identity.h"
{

#line 41 "/usr/include/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/ColorSpheres.main.c"


#line 42 "/usr/include/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/ColorSpheres.main.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/bits/uintn-identity.h"
{

#line 47 "/usr/include/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/ColorSpheres.main.c"


#line 48 "/usr/include/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/ColorSpheres.main.c"



#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/ColorSpheres.main.c"


#line 7 "/usr/include/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/ColorSpheres.main.c"


#line 8 "/usr/include/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/ColorSpheres.main.c"

#line 11 "/usr/include/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/ColorSpheres.main.c"


#line 9 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{

#line 11 "/usr/include/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/ColorSpheres.main.c"

#line 12 "/usr/include/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/ColorSpheres.main.c"


#line 43 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/ColorSpheres.main.c"


#line 49 "/usr/include/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/ColorSpheres.main.c"


#line 59 "/usr/include/sys/select.h"
typedef struct
{

#line 67 "/usr/include/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/ColorSpheres.main.c"


#line 77 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/ColorSpheres.main.c"


#line 101 "/usr/include/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/ColorSpheres.main.c"


#line 113 "/usr/include/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/ColorSpheres.main.c"


#line 185 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/ColorSpheres.main.c"


#line 192 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/ColorSpheres.main.c"


#line 196 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/ColorSpheres.main.c"


#line 200 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/ColorSpheres.main.c"


#line 65 "/usr/include/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t
{

#line 67 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __readers;

#line 1022 "obj/debug.linux/ColorSpheres.main.c"

#line 68 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers;

#line 1027 "obj/debug.linux/ColorSpheres.main.c"

#line 69 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __wrphase_futex;

#line 1032 "obj/debug.linux/ColorSpheres.main.c"

#line 70 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __writers_futex;

#line 1037 "obj/debug.linux/ColorSpheres.main.c"

#line 71 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad3;

#line 1042 "obj/debug.linux/ColorSpheres.main.c"

#line 72 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __pad4;

#line 1047 "obj/debug.linux/ColorSpheres.main.c"

#line 74 "/usr/include/bits/pthreadtypes-arch.h"
int __cur_writer;

#line 1052 "obj/debug.linux/ColorSpheres.main.c"

#line 75 "/usr/include/bits/pthreadtypes-arch.h"
int __shared;

#line 1057 "obj/debug.linux/ColorSpheres.main.c"

#line 76 "/usr/include/bits/pthreadtypes-arch.h"
signed char __rwelision;

#line 1062 "obj/debug.linux/ColorSpheres.main.c"

#line 81 "/usr/include/bits/pthreadtypes-arch.h"
unsigned char __pad1[7];

#line 1067 "obj/debug.linux/ColorSpheres.main.c"

#line 84 "/usr/include/bits/pthreadtypes-arch.h"
unsigned long int __pad2;

#line 1072 "obj/debug.linux/ColorSpheres.main.c"

#line 87 "/usr/include/bits/pthreadtypes-arch.h"
unsigned int __flags;

#line 1077 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1080 "obj/debug.linux/ColorSpheres.main.c"


#line 82 "/usr/include/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 84 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1090 "obj/debug.linux/ColorSpheres.main.c"

#line 85 "/usr/include/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1095 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __pthread_list_t;

#line 1098 "obj/debug.linux/ColorSpheres.main.c"


#line 118 "/usr/include/bits/thread-shared-types.h"
struct __pthread_mutex_s
{

#line 120 "/usr/include/bits/thread-shared-types.h"
int __lock;

#line 1108 "obj/debug.linux/ColorSpheres.main.c"

#line 121 "/usr/include/bits/thread-shared-types.h"
unsigned int __count;

#line 1113 "obj/debug.linux/ColorSpheres.main.c"

#line 122 "/usr/include/bits/thread-shared-types.h"
int __owner;

#line 1118 "obj/debug.linux/ColorSpheres.main.c"

#line 124 "/usr/include/bits/thread-shared-types.h"
unsigned int __nusers;

#line 1123 "obj/debug.linux/ColorSpheres.main.c"

#line 148 "/usr/include/bits/thread-shared-types.h"
int __kind;

#line 1128 "obj/debug.linux/ColorSpheres.main.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __spins;

#line 1133 "obj/debug.linux/ColorSpheres.main.c"

#line 154 "/usr/include/bits/thread-shared-types.h"
short __elision;

#line 1138 "obj/debug.linux/ColorSpheres.main.c"

#line 155 "/usr/include/bits/thread-shared-types.h"
__pthread_list_t __list;

#line 1143 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1146 "obj/debug.linux/ColorSpheres.main.c"


#line 171 "/usr/include/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 173 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 175 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1160 "obj/debug.linux/ColorSpheres.main.c"

#line 176 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 178 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1169 "obj/debug.linux/ColorSpheres.main.c"

#line 179 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1174 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __wseq32;

#line 1177 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1180 "obj/debug.linux/ColorSpheres.main.c"

#line 182 "/usr/include/bits/thread-shared-types.h"
 union
{

#line 184 "/usr/include/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1189 "obj/debug.linux/ColorSpheres.main.c"

#line 185 "/usr/include/bits/thread-shared-types.h"
struct
{

#line 187 "/usr/include/bits/thread-shared-types.h"
unsigned int __low;

#line 1198 "obj/debug.linux/ColorSpheres.main.c"

#line 188 "/usr/include/bits/thread-shared-types.h"
unsigned int __high;

#line 1203 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __g1_start32;

#line 1206 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1209 "obj/debug.linux/ColorSpheres.main.c"

#line 191 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1214 "obj/debug.linux/ColorSpheres.main.c"

#line 192 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1219 "obj/debug.linux/ColorSpheres.main.c"

#line 193 "/usr/include/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1224 "obj/debug.linux/ColorSpheres.main.c"

#line 194 "/usr/include/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1229 "obj/debug.linux/ColorSpheres.main.c"

#line 195 "/usr/include/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1234 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1237 "obj/debug.linux/ColorSpheres.main.c"


#line 27 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1243 "obj/debug.linux/ColorSpheres.main.c"


#line 32 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1253 "obj/debug.linux/ColorSpheres.main.c"

#line 35 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1258 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1261 "obj/debug.linux/ColorSpheres.main.c"


#line 41 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1271 "obj/debug.linux/ColorSpheres.main.c"

#line 44 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1276 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1279 "obj/debug.linux/ColorSpheres.main.c"


#line 49 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1285 "obj/debug.linux/ColorSpheres.main.c"


#line 53 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1291 "obj/debug.linux/ColorSpheres.main.c"


#line 56 "/usr/include/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1301 "obj/debug.linux/ColorSpheres.main.c"

#line 59 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1306 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1309 "obj/debug.linux/ColorSpheres.main.c"


#line 62 "/usr/include/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1315 "obj/debug.linux/ColorSpheres.main.c"


#line 67 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1325 "obj/debug.linux/ColorSpheres.main.c"

#line 70 "/usr/include/bits/pthreadtypes.h"
char __size[40];

#line 1330 "obj/debug.linux/ColorSpheres.main.c"

#line 71 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1335 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1338 "obj/debug.linux/ColorSpheres.main.c"


#line 75 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1348 "obj/debug.linux/ColorSpheres.main.c"

#line 78 "/usr/include/bits/pthreadtypes.h"
char __size[48];

#line 1353 "obj/debug.linux/ColorSpheres.main.c"

#line 79 "/usr/include/bits/pthreadtypes.h"
 long long int __align;

#line 1358 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_cond_t;

#line 1361 "obj/debug.linux/ColorSpheres.main.c"


#line 86 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1371 "obj/debug.linux/ColorSpheres.main.c"

#line 89 "/usr/include/bits/pthreadtypes.h"
char __size[56];

#line 1376 "obj/debug.linux/ColorSpheres.main.c"

#line 90 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1381 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1384 "obj/debug.linux/ColorSpheres.main.c"


#line 93 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/bits/pthreadtypes.h"
char __size[8];

#line 1394 "obj/debug.linux/ColorSpheres.main.c"

#line 96 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1399 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1402 "obj/debug.linux/ColorSpheres.main.c"


#line 103 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1408 "obj/debug.linux/ColorSpheres.main.c"


#line 108 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/bits/pthreadtypes.h"
char __size[32];

#line 1418 "obj/debug.linux/ColorSpheres.main.c"

#line 111 "/usr/include/bits/pthreadtypes.h"
long int __align;

#line 1423 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1426 "obj/debug.linux/ColorSpheres.main.c"


#line 114 "/usr/include/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/bits/pthreadtypes.h"
char __size[4];

#line 1436 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "/usr/include/bits/pthreadtypes.h"
int __align;

#line 1441 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1444 "obj/debug.linux/ColorSpheres.main.c"


#line 10 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)();

#line 1450 "obj/debug.linux/ColorSpheres.main.c"


#line 11 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();

#line 1456 "obj/debug.linux/ColorSpheres.main.c"


#line 12 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov;

#line 1462 "obj/debug.linux/ColorSpheres.main.c"


#line 13 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov;

#line 1468 "obj/debug.linux/ColorSpheres.main.c"


#line 15 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation;

#line 1474 "obj/debug.linux/ColorSpheres.main.c"


#line 16 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation;

#line 1480 "obj/debug.linux/ColorSpheres.main.c"


#line 18 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position;

#line 1486 "obj/debug.linux/ColorSpheres.main.c"


#line 19 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position;

#line 1492 "obj/debug.linux/ColorSpheres.main.c"


#line 21 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type;

#line 1498 "obj/debug.linux/ColorSpheres.main.c"


#line 22 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type;

#line 1504 "obj/debug.linux/ColorSpheres.main.c"


#line 24 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1510 "obj/debug.linux/ColorSpheres.main.c"


#line 25 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1516 "obj/debug.linux/ColorSpheres.main.c"


#line 28 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency)();

#line 1522 "obj/debug.linux/ColorSpheres.main.c"


#line 30 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_AddName)();

#line 1528 "obj/debug.linux/ColorSpheres.main.c"


#line 31 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)();

#line 1534 "obj/debug.linux/ColorSpheres.main.c"


#line 32 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)();

#line 1540 "obj/debug.linux/ColorSpheres.main.c"


#line 33 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_flags;

#line 1546 "obj/debug.linux/ColorSpheres.main.c"


#line 34 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_flags;

#line 1552 "obj/debug.linux/ColorSpheres.main.c"


#line 36 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_light;

#line 1558 "obj/debug.linux/ColorSpheres.main.c"


#line 37 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_light;

#line 1564 "obj/debug.linux/ColorSpheres.main.c"


#line 39 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material;

#line 1570 "obj/debug.linux/ColorSpheres.main.c"


#line 40 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material;

#line 1576 "obj/debug.linux/ColorSpheres.main.c"


#line 42 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh;

#line 1582 "obj/debug.linux/ColorSpheres.main.c"


#line 43 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh;

#line 1588 "obj/debug.linux/ColorSpheres.main.c"


#line 45 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform;

#line 1594 "obj/debug.linux/ColorSpheres.main.c"


#line 46 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform;

#line 1600 "obj/debug.linux/ColorSpheres.main.c"


#line 48 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Multiply)();

#line 1606 "obj/debug.linux/ColorSpheres.main.c"


#line 49 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Normalize)();

#line 1612 "obj/debug.linux/ColorSpheres.main.c"


#line 51 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create)();

#line 1618 "obj/debug.linux/ColorSpheres.main.c"


#line 52 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLat;

#line 1624 "obj/debug.linux/ColorSpheres.main.c"


#line 54 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLon;

#line 1630 "obj/debug.linux/ColorSpheres.main.c"


#line 56 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)();

#line 1636 "obj/debug.linux/ColorSpheres.main.c"


#line 57 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)();

#line 1642 "obj/debug.linux/ColorSpheres.main.c"


#line 58 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)();

#line 1648 "obj/debug.linux/ColorSpheres.main.c"


#line 59 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity;

#line 1654 "obj/debug.linux/ColorSpheres.main.c"


#line 61 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_AddMaterial)();

#line 1660 "obj/debug.linux/ColorSpheres.main.c"


#line 62 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)();

#line 1666 "obj/debug.linux/ColorSpheres.main.c"


#line 63 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver;

#line 1672 "obj/debug.linux/ColorSpheres.main.c"


#line 64 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver;

#line 1678 "obj/debug.linux/ColorSpheres.main.c"


#line 66 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_timerResolution;

#line 1684 "obj/debug.linux/ColorSpheres.main.c"


#line 68 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)();

#line 1690 "obj/debug.linux/ColorSpheres.main.c"


#line 69 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)();

#line 1696 "obj/debug.linux/ColorSpheres.main.c"


#line 70 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition)();

#line 1702 "obj/debug.linux/ColorSpheres.main.c"


#line 71 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Move)();

#line 1708 "obj/debug.linux/ColorSpheres.main.c"


#line 72 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();

#line 1714 "obj/debug.linux/ColorSpheres.main.c"


#line 73 "obj/debug.linux/ColorSpheres.main.ec"
int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)();

#line 1720 "obj/debug.linux/ColorSpheres.main.c"


#line 74 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_alphaBlend;

#line 1726 "obj/debug.linux/ColorSpheres.main.c"


#line 75 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_alphaBlend;

#line 1732 "obj/debug.linux/ColorSpheres.main.c"


#line 77 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background;

#line 1738 "obj/debug.linux/ColorSpheres.main.c"


#line 78 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background;

#line 1744 "obj/debug.linux/ColorSpheres.main.c"


#line 80 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle;

#line 1750 "obj/debug.linux/ColorSpheres.main.c"


#line 81 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle;

#line 1756 "obj/debug.linux/ColorSpheres.main.c"


#line 83 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_clientSize;

#line 1762 "obj/debug.linux/ColorSpheres.main.c"


#line 84 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize;

#line 1768 "obj/debug.linux/ColorSpheres.main.c"


#line 86 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display;

#line 1774 "obj/debug.linux/ColorSpheres.main.c"


#line 88 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem;

#line 1780 "obj/debug.linux/ColorSpheres.main.c"


#line 90 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_moveable;

#line 1786 "obj/debug.linux/ColorSpheres.main.c"


#line 91 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_moveable;

#line 1792 "obj/debug.linux/ColorSpheres.main.c"


#line 93 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity;

#line 1798 "obj/debug.linux/ColorSpheres.main.c"


#line 94 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity;

#line 1804 "obj/debug.linux/ColorSpheres.main.c"


#line 96 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position;

#line 1810 "obj/debug.linux/ColorSpheres.main.c"


#line 97 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position;

#line 1816 "obj/debug.linux/ColorSpheres.main.c"


#line 99 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size;

#line 1822 "obj/debug.linux/ColorSpheres.main.c"


#line 100 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size;

#line 1828 "obj/debug.linux/ColorSpheres.main.c"


#line 102 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_stayOnTop;

#line 1834 "obj/debug.linux/ColorSpheres.main.c"


#line 103 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_stayOnTop;

#line 1840 "obj/debug.linux/ColorSpheres.main.c"


#line 105 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_text;

#line 1846 "obj/debug.linux/ColorSpheres.main.c"


#line 106 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_text;

#line 1852 "obj/debug.linux/ColorSpheres.main.c"


#line 108 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians;

#line 1858 "obj/debug.linux/ColorSpheres.main.c"


#line 109 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians;

#line 1864 "obj/debug.linux/ColorSpheres.main.c"


#line 111 "obj/debug.linux/ColorSpheres.main.ec"
void * __ecereFunction___ecereNameSpace__ecere__sys__GetTime;

#line 1870 "obj/debug.linux/ColorSpheres.main.c"


#line 114 "obj/debug.linux/ColorSpheres.main.ec"
void __ecereCreateModuleInstances_colorSpheres();

#line 1876 "obj/debug.linux/ColorSpheres.main.c"


#line 115 "obj/debug.linux/ColorSpheres.main.ec"
void __ecereDestroyModuleInstances_colorSpheres();

#line 1882 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  first;

#line 1892 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  last;

#line 1897 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int count;

#line 1902 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int offset;

#line 1907 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int circ;

#line 1912 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1915 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1921 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
union
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
char c;

#line 1935 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned char uc;

#line 1940 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
short s;

#line 1945 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned short us;

#line 1950 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int i;

#line 1955 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int ui;

#line 1960 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  p;

#line 1965 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
float f;

#line 1970 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
double d;

#line 1975 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
long long i64;

#line 1980 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
uint64 ui64;

#line 1985 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __anon1;

#line 1988 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 1991 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned char *  _buffer;

#line 2001 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
size_t count;

#line 2006 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
size_t _size;

#line 2011 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
size_t pos;

#line 2016 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2019 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 2025 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 2031 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 2037 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 2043 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 2049 "obj/debug.linux/ColorSpheres.main.c"


#line 132 "obj/debug.linux/ColorSpheres.main.ec"
extern int printf(const char * , ...);

#line 2055 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2061 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void * *  _vTbl;

#line 2071 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2076 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int _refCount;

#line 2081 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2084 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2090 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2096 "obj/debug.linux/ColorSpheres.main.c"


#line 8 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 2102 "obj/debug.linux/ColorSpheres.main.c"


#line 9 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 2108 "obj/debug.linux/ColorSpheres.main.c"


#line 27 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 2114 "obj/debug.linux/ColorSpheres.main.c"


#line 29 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 2120 "obj/debug.linux/ColorSpheres.main.c"


#line 50 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere;

#line 2126 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2132 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2138 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Evolve(struct __ecereNameSpace__ecere__com__Instance **  instancePtr, struct __ecereNameSpace__ecere__com__Class * _class);

#line 2144 "obj/debug.linux/ColorSpheres.main.c"


#line 297 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2150 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 2156 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 2166 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 2171 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 2176 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int isProperty;

#line 2181 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberAccess;

#line 2186 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int id;

#line 2191 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2196 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  dataTypeString;

#line 2201 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2206 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2211 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void (*  Set)(void * , int);

#line 2216 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int (*  Get)(void * );

#line 2221 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int (*  IsSet)(void * );

#line 2226 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  data;

#line 2231 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  symbol;

#line 2236 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int vid;

#line 2241 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int conversion;

#line 2246 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int watcherOffset;

#line 2251 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  category;

#line 2256 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int compiled;

#line 2261 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int selfWatchable;

#line 2266 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int isWatchable;

#line 2271 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2274 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2280 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 2286 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 2292 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2298 "obj/debug.linux/ColorSpheres.main.c"


#line 14 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2304 "obj/debug.linux/ColorSpheres.main.c"


#line 17 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 2310 "obj/debug.linux/ColorSpheres.main.c"


#line 20 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 2316 "obj/debug.linux/ColorSpheres.main.c"


#line 23 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 2322 "obj/debug.linux/ColorSpheres.main.c"


#line 26 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 2328 "obj/debug.linux/ColorSpheres.main.c"


#line 35 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_flags;

#line 2334 "obj/debug.linux/ColorSpheres.main.c"


#line 38 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_light;

#line 2340 "obj/debug.linux/ColorSpheres.main.c"


#line 41 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;

#line 2346 "obj/debug.linux/ColorSpheres.main.c"


#line 44 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;

#line 2352 "obj/debug.linux/ColorSpheres.main.c"


#line 47 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 2358 "obj/debug.linux/ColorSpheres.main.c"


#line 53 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLat;

#line 2364 "obj/debug.linux/ColorSpheres.main.c"


#line 55 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLon;

#line 2370 "obj/debug.linux/ColorSpheres.main.c"


#line 60 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 2376 "obj/debug.linux/ColorSpheres.main.c"


#line 65 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 2382 "obj/debug.linux/ColorSpheres.main.c"


#line 67 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_timerResolution;

#line 2388 "obj/debug.linux/ColorSpheres.main.c"


#line 76 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_alphaBlend;

#line 2394 "obj/debug.linux/ColorSpheres.main.c"


#line 79 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 2400 "obj/debug.linux/ColorSpheres.main.c"


#line 82 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 2406 "obj/debug.linux/ColorSpheres.main.c"


#line 85 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_clientSize;

#line 2412 "obj/debug.linux/ColorSpheres.main.c"


#line 87 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 2418 "obj/debug.linux/ColorSpheres.main.c"


#line 89 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 2424 "obj/debug.linux/ColorSpheres.main.c"


#line 92 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_moveable;

#line 2430 "obj/debug.linux/ColorSpheres.main.c"


#line 95 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;

#line 2436 "obj/debug.linux/ColorSpheres.main.c"


#line 98 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 2442 "obj/debug.linux/ColorSpheres.main.c"


#line 101 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 2448 "obj/debug.linux/ColorSpheres.main.c"


#line 104 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_stayOnTop;

#line 2454 "obj/debug.linux/ColorSpheres.main.c"


#line 107 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_text;

#line 2460 "obj/debug.linux/ColorSpheres.main.c"


#line 110 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 2466 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 2472 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 2482 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int count;

#line 2487 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2492 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void (*  FreeKey)(void *  key);

#line 2497 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2500 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 2506 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 2516 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 2521 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 2526 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 2531 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int depth;

#line 2536 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int (*  function)();

#line 2541 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int vid;

#line 2546 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int type;

#line 2551 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2556 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  symbol;

#line 2561 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  dataTypeString;

#line 2566 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2571 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberAccess;

#line 2576 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2579 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 2585 "obj/debug.linux/ColorSpheres.main.c"


#line 4 "obj/debug.linux/ColorSpheres.main.ec"
static struct __ecereNameSpace__ecere__com__Instance * __currentModule;

#line 2591 "obj/debug.linux/ColorSpheres.main.c"


#line 6 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 2597 "obj/debug.linux/ColorSpheres.main.c"


#line 112 "obj/debug.linux/ColorSpheres.main.ec"
void __ecereRegisterModule_colorSpheres(struct __ecereNameSpace__ecere__com__Instance * module);

#line 2603 "obj/debug.linux/ColorSpheres.main.c"


#line 113 "obj/debug.linux/ColorSpheres.main.ec"
void __ecereUnregisterModule_colorSpheres(struct __ecereNameSpace__ecere__com__Instance * module);

#line 2609 "obj/debug.linux/ColorSpheres.main.c"


#line 131 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com__eModule_Load(struct __ecereNameSpace__ecere__com__Instance * fromModule, const char *  name, int importAccess);

#line 2615 "obj/debug.linux/ColorSpheres.main.c"


#line 136 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_FindClass(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 2621 "obj/debug.linux/ColorSpheres.main.c"


#line 139 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_FindMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 2627 "obj/debug.linux/ColorSpheres.main.c"


#line 143 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Property * __ecereNameSpace__ecere__com__eClass_FindProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 2633 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Application;

#line 2639 "obj/debug.linux/ColorSpheres.main.c"


#line 128 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com____ecere_COM_Initialize(unsigned int guiApp, int argc, char *  argv[]);

#line 2645 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 2651 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 2661 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 2666 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 2671 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 2676 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int depth;

#line 2681 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 2686 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 2691 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 2696 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 2701 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 2706 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2709 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int argc;

#line 2719 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char * *  argv;

#line 2724 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int exitCode;

#line 2729 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int isGUIApp;

#line 2734 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 2739 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
char *  parsedCommand;

#line 2744 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 2749 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2752 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 2762 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 2767 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 2772 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 2777 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 2782 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 2787 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 2792 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 2797 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  library;

#line 2802 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  Unload;

#line 2807 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int importType;

#line 2812 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int origImportType;

#line 2817 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 2822 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 2827 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2830 "obj/debug.linux/ColorSpheres.main.c"

void __ecereRegisterModule_ColorSpheres_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 2840 "obj/debug.linux/ColorSpheres.main.c"


#line 299 "obj/debug.linux/ColorSpheres.main.ec"
}
#line 2845 "obj/debug.linux/ColorSpheres.main.c"


void __ecereUnregisterModule_ColorSpheres_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
{


#line 299 "obj/debug.linux/ColorSpheres.main.ec"
}
#line 2856 "obj/debug.linux/ColorSpheres.main.c"



#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 2863 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
union
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  dataTypeString;

#line 2881 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2886 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __anon1;

#line 2889 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 2894 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  memberString;

#line 2903 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
union
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 2912 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 2917 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 2922 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __anon1;

#line 2925 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __anon2;

#line 2928 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct __anon1;

#line 2931 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 2934 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 2944 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 2949 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 2954 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int isProperty;

#line 2959 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberAccess;

#line 2964 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int id;

#line 2969 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2974 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  dataTypeString;

#line 2979 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2984 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2989 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int type;

#line 2994 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int offset;

#line 2999 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberID;

#line 3004 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 3009 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 3014 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberOffset;

#line 3019 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
short structAlignment;

#line 3024 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
short pointerAlignment;

#line 3029 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 3032 "obj/debug.linux/ColorSpheres.main.c"


#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 3042 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 3047 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 3052 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int offset;

#line 3057 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int structSize;

#line 3062 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void * *  _vTbl;

#line 3067 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int vTblSize;

#line 3072 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int (*  Constructor)(void * );

#line 3077 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void (*  Destructor)(void * );

#line 3082 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int offsetClass;

#line 3087 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int sizeClass;

#line 3092 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 3097 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3102 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3107 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3112 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3117 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3122 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3127 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberID;

#line 3132 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int startMemberID;

#line 3137 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int type;

#line 3142 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3147 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3152 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  dataTypeString;

#line 3157 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3162 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int typeSize;

#line 3167 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int defaultAlignment;

#line 3172 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void (*  Initialize)();

#line 3177 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int memberOffset;

#line 3182 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3187 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  designerClass;

#line 3192 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int noExpansion;

#line 3197 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  defaultProperty;

#line 3202 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int comRedefinition;

#line 3207 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int count;

#line 3212 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int isRemote;

#line 3217 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int internalDecl;

#line 3222 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  data;

#line 3227 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int computeSize;

#line 3232 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
short structAlignment;

#line 3237 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
short pointerAlignment;

#line 3242 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int destructionWatchOffset;

#line 3247 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int fixed;

#line 3252 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 3257 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int inheritanceAccess;

#line 3262 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
const char *  fullName;

#line 3267 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  symbol;

#line 3272 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 3277 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 3282 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 3287 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 3292 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 3297 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
int numParams;

#line 3302 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int isInstanceClass;

#line 3307 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int byValueSystemClass;

#line 3312 "obj/debug.linux/ColorSpheres.main.c"

#line 117 "obj/debug.linux/ColorSpheres.main.ec"
void *  bindingsClass;

#line 3317 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 3320 "obj/debug.linux/ColorSpheres.main.c"


#line 291 "obj/debug.linux/ColorSpheres.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 3326 "obj/debug.linux/ColorSpheres.main.c"


#line 296 "obj/debug.linux/ColorSpheres.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Application;

#line 3332 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 3338 "obj/debug.linux/ColorSpheres.main.c"


#line 282 "obj/debug.linux/ColorSpheres.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_FindFunction(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3344 "obj/debug.linux/ColorSpheres.main.c"


#line 125 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction
{

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * prev;

#line 3354 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * next;

#line 3359 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
const char *  name;

#line 3364 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
int (*  function)();

#line 3369 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3374 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3379 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
const char *  dataTypeString;

#line 3384 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3389 "obj/debug.linux/ColorSpheres.main.c"

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
void *  symbol;

#line 3394 "obj/debug.linux/ColorSpheres.main.c"
} ecere_gcc_struct;

#line 3397 "obj/debug.linux/ColorSpheres.main.c"

int main(int _argc, char * _argv[])

#line 118 "obj/debug.linux/ColorSpheres.main.ec"
{

#line 119 "obj/debug.linux/ColorSpheres.main.ec"
int exitCode;

#line 3407 "obj/debug.linux/ColorSpheres.main.c"

#line 120 "obj/debug.linux/ColorSpheres.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3412 "obj/debug.linux/ColorSpheres.main.c"

#line 121 "obj/debug.linux/ColorSpheres.main.ec"
unsigned int setThingsUp = !__thisModule;

#line 3417 "obj/debug.linux/ColorSpheres.main.c"

#line 122 "obj/debug.linux/ColorSpheres.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Class * _class;

#line 3422 "obj/debug.linux/ColorSpheres.main.c"

#line 123 "obj/debug.linux/ColorSpheres.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Method * method;

#line 3427 "obj/debug.linux/ColorSpheres.main.c"

#line 124 "obj/debug.linux/ColorSpheres.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * _property;

#line 3432 "obj/debug.linux/ColorSpheres.main.c"

#line 125 "obj/debug.linux/ColorSpheres.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__GlobalFunction * function;

#line 3437 "obj/debug.linux/ColorSpheres.main.c"


#line 127 "obj/debug.linux/ColorSpheres.main.ec"
if(setThingsUp)

#line 128 "obj/debug.linux/ColorSpheres.main.ec"
__thisModule = __ecereNameSpace__ecere__com____ecere_COM_Initialize((unsigned int)1, _argc, (void *)_argv);
#line 3445 "obj/debug.linux/ColorSpheres.main.c"

#line 3447 "obj/debug.linux/ColorSpheres.main.c"


#line 130 "obj/debug.linux/ColorSpheres.main.ec"
__currentModule = module = __thisModule;
#line 3452 "obj/debug.linux/ColorSpheres.main.c"


#line 131 "obj/debug.linux/ColorSpheres.main.ec"
if(!__ecereNameSpace__ecere__com__eModule_Load(module, "ecere", 2))

#line 132 "obj/debug.linux/ColorSpheres.main.ec"
printf("Error loading eC module \"%s\" (shared library -- .so/.dll/.dylib)\nThings might go very wrong.\nCheck installed libraries or PATH (Windows) / (DY)LD_LIBRARY_PATH (Unix / Apple) environment variable.\n", "ecere");
#line 3460 "obj/debug.linux/ColorSpheres.main.c"

#line 3462 "obj/debug.linux/ColorSpheres.main.c"


#line 134 "obj/debug.linux/ColorSpheres.main.ec"
__ecereRegisterModule_colorSpheres(module);
#line 3467 "obj/debug.linux/ColorSpheres.main.c"


#line 136 "obj/debug.linux/ColorSpheres.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Module = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Module");
#line 3472 "obj/debug.linux/ColorSpheres.main.c"


#line 138 "obj/debug.linux/ColorSpheres.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Camera = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Camera");
#line 3477 "obj/debug.linux/ColorSpheres.main.c"


#line 139 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Setup", module);
#line 3482 "obj/debug.linux/ColorSpheres.main.c"


#line 140 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 140 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup = method->function;
#line 3490 "obj/debug.linux/ColorSpheres.main.c"

#line 3492 "obj/debug.linux/ColorSpheres.main.c"


#line 141 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Update", module);
#line 3497 "obj/debug.linux/ColorSpheres.main.c"


#line 142 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 142 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update = method->function;
#line 3505 "obj/debug.linux/ColorSpheres.main.c"

#line 3507 "obj/debug.linux/ColorSpheres.main.c"


#line 143 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "fov", module);
#line 3512 "obj/debug.linux/ColorSpheres.main.c"


#line 144 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 144 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov = _property->Set;
#line 3520 "obj/debug.linux/ColorSpheres.main.c"

#line 3522 "obj/debug.linux/ColorSpheres.main.c"


#line 145 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 145 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov = _property->Get;
#line 3530 "obj/debug.linux/ColorSpheres.main.c"

#line 3532 "obj/debug.linux/ColorSpheres.main.c"


#line 146 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "orientation", module);
#line 3537 "obj/debug.linux/ColorSpheres.main.c"


#line 147 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 147 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation = _property->Set;
#line 3545 "obj/debug.linux/ColorSpheres.main.c"

#line 3547 "obj/debug.linux/ColorSpheres.main.c"


#line 148 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 148 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation = _property->Get;
#line 3555 "obj/debug.linux/ColorSpheres.main.c"

#line 3557 "obj/debug.linux/ColorSpheres.main.c"


#line 149 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "position", module);
#line 3562 "obj/debug.linux/ColorSpheres.main.c"


#line 150 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 150 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position = _property->Set;
#line 3570 "obj/debug.linux/ColorSpheres.main.c"

#line 3572 "obj/debug.linux/ColorSpheres.main.c"


#line 151 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 151 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position = _property->Get;
#line 3580 "obj/debug.linux/ColorSpheres.main.c"

#line 3582 "obj/debug.linux/ColorSpheres.main.c"


#line 152 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "type", module);
#line 3587 "obj/debug.linux/ColorSpheres.main.c"


#line 153 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 153 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type = _property->Set;
#line 3595 "obj/debug.linux/ColorSpheres.main.c"

#line 3597 "obj/debug.linux/ColorSpheres.main.c"


#line 154 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 154 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type = _property->Get;
#line 3605 "obj/debug.linux/ColorSpheres.main.c"

#line 3607 "obj/debug.linux/ColorSpheres.main.c"


#line 156 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Euler");
#line 3612 "obj/debug.linux/ColorSpheres.main.c"


#line 157 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::gfx3D::Quaternion", module);
#line 3617 "obj/debug.linux/ColorSpheres.main.c"


#line 158 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 158 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion = _property->Set;
#line 3625 "obj/debug.linux/ColorSpheres.main.c"

#line 3627 "obj/debug.linux/ColorSpheres.main.c"


#line 159 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 159 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion = _property->Get;
#line 3635 "obj/debug.linux/ColorSpheres.main.c"

#line 3637 "obj/debug.linux/ColorSpheres.main.c"


#line 161 "obj/debug.linux/ColorSpheres.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Material");
#line 3642 "obj/debug.linux/ColorSpheres.main.c"


#line 163 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Mesh");
#line 3647 "obj/debug.linux/ColorSpheres.main.c"


#line 164 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ApplyTranslucency", module);
#line 3652 "obj/debug.linux/ColorSpheres.main.c"


#line 165 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 165 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency = method->function;
#line 3660 "obj/debug.linux/ColorSpheres.main.c"

#line 3662 "obj/debug.linux/ColorSpheres.main.c"


#line 167 "obj/debug.linux/ColorSpheres.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Object");
#line 3667 "obj/debug.linux/ColorSpheres.main.c"


#line 168 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "AddName", module);
#line 3672 "obj/debug.linux/ColorSpheres.main.c"


#line 169 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 169 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_AddName = method->function;
#line 3680 "obj/debug.linux/ColorSpheres.main.c"

#line 3682 "obj/debug.linux/ColorSpheres.main.c"


#line 170 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Duplicate", module);
#line 3687 "obj/debug.linux/ColorSpheres.main.c"


#line 171 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 171 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate = method->function;
#line 3695 "obj/debug.linux/ColorSpheres.main.c"

#line 3697 "obj/debug.linux/ColorSpheres.main.c"


#line 172 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "UpdateTransform", module);
#line 3702 "obj/debug.linux/ColorSpheres.main.c"


#line 173 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 173 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform = method->function;
#line 3710 "obj/debug.linux/ColorSpheres.main.c"

#line 3712 "obj/debug.linux/ColorSpheres.main.c"


#line 174 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_flags = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "flags", module);
#line 3717 "obj/debug.linux/ColorSpheres.main.c"


#line 175 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 175 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_flags = _property->Set;
#line 3725 "obj/debug.linux/ColorSpheres.main.c"

#line 3727 "obj/debug.linux/ColorSpheres.main.c"


#line 176 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 176 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_flags = _property->Get;
#line 3735 "obj/debug.linux/ColorSpheres.main.c"

#line 3737 "obj/debug.linux/ColorSpheres.main.c"


#line 177 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_light = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "light", module);
#line 3742 "obj/debug.linux/ColorSpheres.main.c"


#line 178 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 178 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_light = _property->Set;
#line 3750 "obj/debug.linux/ColorSpheres.main.c"

#line 3752 "obj/debug.linux/ColorSpheres.main.c"


#line 179 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 179 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_light = _property->Get;
#line 3760 "obj/debug.linux/ColorSpheres.main.c"

#line 3762 "obj/debug.linux/ColorSpheres.main.c"


#line 180 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_material = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "material", module);
#line 3767 "obj/debug.linux/ColorSpheres.main.c"


#line 181 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 181 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material = _property->Set;
#line 3775 "obj/debug.linux/ColorSpheres.main.c"

#line 3777 "obj/debug.linux/ColorSpheres.main.c"


#line 182 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 182 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material = _property->Get;
#line 3785 "obj/debug.linux/ColorSpheres.main.c"

#line 3787 "obj/debug.linux/ColorSpheres.main.c"


#line 183 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "mesh", module);
#line 3792 "obj/debug.linux/ColorSpheres.main.c"


#line 184 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 184 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh = _property->Set;
#line 3800 "obj/debug.linux/ColorSpheres.main.c"

#line 3802 "obj/debug.linux/ColorSpheres.main.c"


#line 185 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 185 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh = _property->Get;
#line 3810 "obj/debug.linux/ColorSpheres.main.c"

#line 3812 "obj/debug.linux/ColorSpheres.main.c"


#line 186 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "transform", module);
#line 3817 "obj/debug.linux/ColorSpheres.main.c"


#line 187 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 187 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform = _property->Set;
#line 3825 "obj/debug.linux/ColorSpheres.main.c"

#line 3827 "obj/debug.linux/ColorSpheres.main.c"


#line 188 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 188 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform = _property->Get;
#line 3835 "obj/debug.linux/ColorSpheres.main.c"

#line 3837 "obj/debug.linux/ColorSpheres.main.c"


#line 190 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Quaternion");
#line 3842 "obj/debug.linux/ColorSpheres.main.c"


#line 191 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Multiply", module);
#line 3847 "obj/debug.linux/ColorSpheres.main.c"


#line 192 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 192 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Multiply = method->function;
#line 3855 "obj/debug.linux/ColorSpheres.main.c"

#line 3857 "obj/debug.linux/ColorSpheres.main.c"


#line 193 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Normalize", module);
#line 3862 "obj/debug.linux/ColorSpheres.main.c"


#line 194 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 194 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Normalize = method->function;
#line 3870 "obj/debug.linux/ColorSpheres.main.c"

#line 3872 "obj/debug.linux/ColorSpheres.main.c"


#line 196 "obj/debug.linux/ColorSpheres.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::meshes::Sphere");
#line 3877 "obj/debug.linux/ColorSpheres.main.c"


#line 197 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "Create", module);
#line 3882 "obj/debug.linux/ColorSpheres.main.c"


#line 198 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 198 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create = method->function;
#line 3890 "obj/debug.linux/ColorSpheres.main.c"

#line 3892 "obj/debug.linux/ColorSpheres.main.c"


#line 199 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLat = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "numLat", module);
#line 3897 "obj/debug.linux/ColorSpheres.main.c"


#line 200 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 200 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLat = _property->Set;
#line 3905 "obj/debug.linux/ColorSpheres.main.c"

#line 3907 "obj/debug.linux/ColorSpheres.main.c"


#line 201 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLon = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "numLon", module);
#line 3912 "obj/debug.linux/ColorSpheres.main.c"


#line 202 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 202 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLon = _property->Set;
#line 3920 "obj/debug.linux/ColorSpheres.main.c"

#line 3922 "obj/debug.linux/ColorSpheres.main.c"


#line 204 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Display");
#line 3927 "obj/debug.linux/ColorSpheres.main.c"


#line 205 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "DrawObject", module);
#line 3932 "obj/debug.linux/ColorSpheres.main.c"


#line 206 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 206 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject = method->function;
#line 3940 "obj/debug.linux/ColorSpheres.main.c"

#line 3942 "obj/debug.linux/ColorSpheres.main.c"


#line 207 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetCamera", module);
#line 3947 "obj/debug.linux/ColorSpheres.main.c"


#line 208 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 208 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera = method->function;
#line 3955 "obj/debug.linux/ColorSpheres.main.c"

#line 3957 "obj/debug.linux/ColorSpheres.main.c"


#line 209 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetLight", module);
#line 3962 "obj/debug.linux/ColorSpheres.main.c"


#line 210 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 210 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight = method->function;
#line 3970 "obj/debug.linux/ColorSpheres.main.c"

#line 3972 "obj/debug.linux/ColorSpheres.main.c"


#line 211 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "fogDensity", module);
#line 3977 "obj/debug.linux/ColorSpheres.main.c"


#line 212 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 212 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity = _property->Set;
#line 3985 "obj/debug.linux/ColorSpheres.main.c"

#line 3987 "obj/debug.linux/ColorSpheres.main.c"


#line 214 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::DisplaySystem");
#line 3992 "obj/debug.linux/ColorSpheres.main.c"


#line 215 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "AddMaterial", module);
#line 3997 "obj/debug.linux/ColorSpheres.main.c"


#line 216 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 216 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_AddMaterial = method->function;
#line 4005 "obj/debug.linux/ColorSpheres.main.c"

#line 4007 "obj/debug.linux/ColorSpheres.main.c"


#line 218 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Surface");
#line 4012 "obj/debug.linux/ColorSpheres.main.c"


#line 219 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Clear", module);
#line 4017 "obj/debug.linux/ColorSpheres.main.c"


#line 220 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 220 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear = method->function;
#line 4025 "obj/debug.linux/ColorSpheres.main.c"

#line 4027 "obj/debug.linux/ColorSpheres.main.c"


#line 222 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::GuiApplication");
#line 4032 "obj/debug.linux/ColorSpheres.main.c"


#line 223 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "driver", module);
#line 4037 "obj/debug.linux/ColorSpheres.main.c"


#line 224 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 224 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver = _property->Set;
#line 4045 "obj/debug.linux/ColorSpheres.main.c"

#line 4047 "obj/debug.linux/ColorSpheres.main.c"


#line 225 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 225 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver = _property->Get;
#line 4055 "obj/debug.linux/ColorSpheres.main.c"

#line 4057 "obj/debug.linux/ColorSpheres.main.c"


#line 226 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_timerResolution = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "timerResolution", module);
#line 4062 "obj/debug.linux/ColorSpheres.main.c"


#line 227 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 227 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_timerResolution = _property->Set;
#line 4070 "obj/debug.linux/ColorSpheres.main.c"

#line 4072 "obj/debug.linux/ColorSpheres.main.c"


#line 229 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::Window");
#line 4077 "obj/debug.linux/ColorSpheres.main.c"


#line 230 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Capture", module);
#line 4082 "obj/debug.linux/ColorSpheres.main.c"


#line 231 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 231 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture = method->function;
#line 4090 "obj/debug.linux/ColorSpheres.main.c"

#line 4092 "obj/debug.linux/ColorSpheres.main.c"


#line 232 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Destroy", module);
#line 4097 "obj/debug.linux/ColorSpheres.main.c"


#line 233 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 233 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy = method->function;
#line 4105 "obj/debug.linux/ColorSpheres.main.c"

#line 4107 "obj/debug.linux/ColorSpheres.main.c"


#line 234 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "GetMousePosition", module);
#line 4112 "obj/debug.linux/ColorSpheres.main.c"


#line 235 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 235 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition = method->function;
#line 4120 "obj/debug.linux/ColorSpheres.main.c"

#line 4122 "obj/debug.linux/ColorSpheres.main.c"


#line 236 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Move", module);
#line 4127 "obj/debug.linux/ColorSpheres.main.c"


#line 237 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 237 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Move = method->function;
#line 4135 "obj/debug.linux/ColorSpheres.main.c"

#line 4137 "obj/debug.linux/ColorSpheres.main.c"


#line 238 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ReleaseCapture", module);
#line 4142 "obj/debug.linux/ColorSpheres.main.c"


#line 239 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 239 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture = method->function;
#line 4150 "obj/debug.linux/ColorSpheres.main.c"

#line 4152 "obj/debug.linux/ColorSpheres.main.c"


#line 240 "obj/debug.linux/ColorSpheres.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Update", module);
#line 4157 "obj/debug.linux/ColorSpheres.main.c"


#line 241 "obj/debug.linux/ColorSpheres.main.ec"
if(method)

#line 241 "obj/debug.linux/ColorSpheres.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update = method->function;
#line 4165 "obj/debug.linux/ColorSpheres.main.c"

#line 4167 "obj/debug.linux/ColorSpheres.main.c"


#line 242 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_alphaBlend = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "alphaBlend", module);
#line 4172 "obj/debug.linux/ColorSpheres.main.c"


#line 243 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 243 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_alphaBlend = _property->Set;
#line 4180 "obj/debug.linux/ColorSpheres.main.c"

#line 4182 "obj/debug.linux/ColorSpheres.main.c"


#line 244 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 244 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_alphaBlend = _property->Get;
#line 4190 "obj/debug.linux/ColorSpheres.main.c"

#line 4192 "obj/debug.linux/ColorSpheres.main.c"


#line 245 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_background = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "background", module);
#line 4197 "obj/debug.linux/ColorSpheres.main.c"


#line 246 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 246 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background = _property->Set;
#line 4205 "obj/debug.linux/ColorSpheres.main.c"

#line 4207 "obj/debug.linux/ColorSpheres.main.c"


#line 247 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 247 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_background = _property->Get;
#line 4215 "obj/debug.linux/ColorSpheres.main.c"

#line 4217 "obj/debug.linux/ColorSpheres.main.c"


#line 248 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "borderStyle", module);
#line 4222 "obj/debug.linux/ColorSpheres.main.c"


#line 249 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 249 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle = _property->Set;
#line 4230 "obj/debug.linux/ColorSpheres.main.c"

#line 4232 "obj/debug.linux/ColorSpheres.main.c"


#line 250 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 250 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle = _property->Get;
#line 4240 "obj/debug.linux/ColorSpheres.main.c"

#line 4242 "obj/debug.linux/ColorSpheres.main.c"


#line 251 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_clientSize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "clientSize", module);
#line 4247 "obj/debug.linux/ColorSpheres.main.c"


#line 252 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 252 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_clientSize = _property->Set;
#line 4255 "obj/debug.linux/ColorSpheres.main.c"

#line 4257 "obj/debug.linux/ColorSpheres.main.c"


#line 253 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 253 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize = _property->Get;
#line 4265 "obj/debug.linux/ColorSpheres.main.c"

#line 4267 "obj/debug.linux/ColorSpheres.main.c"


#line 254 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_display = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "display", module);
#line 4272 "obj/debug.linux/ColorSpheres.main.c"


#line 255 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 255 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display = _property->Get;
#line 4280 "obj/debug.linux/ColorSpheres.main.c"

#line 4282 "obj/debug.linux/ColorSpheres.main.c"


#line 256 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "displaySystem", module);
#line 4287 "obj/debug.linux/ColorSpheres.main.c"


#line 257 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 257 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem = _property->Get;
#line 4295 "obj/debug.linux/ColorSpheres.main.c"

#line 4297 "obj/debug.linux/ColorSpheres.main.c"


#line 258 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_moveable = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "moveable", module);
#line 4302 "obj/debug.linux/ColorSpheres.main.c"


#line 259 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 259 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_moveable = _property->Set;
#line 4310 "obj/debug.linux/ColorSpheres.main.c"

#line 4312 "obj/debug.linux/ColorSpheres.main.c"


#line 260 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 260 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_moveable = _property->Get;
#line 4320 "obj/debug.linux/ColorSpheres.main.c"

#line 4322 "obj/debug.linux/ColorSpheres.main.c"


#line 261 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_opacity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "opacity", module);
#line 4327 "obj/debug.linux/ColorSpheres.main.c"


#line 262 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 262 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity = _property->Set;
#line 4335 "obj/debug.linux/ColorSpheres.main.c"

#line 4337 "obj/debug.linux/ColorSpheres.main.c"


#line 263 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 263 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity = _property->Get;
#line 4345 "obj/debug.linux/ColorSpheres.main.c"

#line 4347 "obj/debug.linux/ColorSpheres.main.c"


#line 264 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "position", module);
#line 4352 "obj/debug.linux/ColorSpheres.main.c"


#line 265 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 265 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_position = _property->Set;
#line 4360 "obj/debug.linux/ColorSpheres.main.c"

#line 4362 "obj/debug.linux/ColorSpheres.main.c"


#line 266 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 266 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position = _property->Get;
#line 4370 "obj/debug.linux/ColorSpheres.main.c"

#line 4372 "obj/debug.linux/ColorSpheres.main.c"


#line 267 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "size", module);
#line 4377 "obj/debug.linux/ColorSpheres.main.c"


#line 268 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 268 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size = _property->Set;
#line 4385 "obj/debug.linux/ColorSpheres.main.c"

#line 4387 "obj/debug.linux/ColorSpheres.main.c"


#line 269 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 269 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size = _property->Get;
#line 4395 "obj/debug.linux/ColorSpheres.main.c"

#line 4397 "obj/debug.linux/ColorSpheres.main.c"


#line 270 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_stayOnTop = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "stayOnTop", module);
#line 4402 "obj/debug.linux/ColorSpheres.main.c"


#line 271 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 271 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_stayOnTop = _property->Set;
#line 4410 "obj/debug.linux/ColorSpheres.main.c"

#line 4412 "obj/debug.linux/ColorSpheres.main.c"


#line 272 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 272 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_stayOnTop = _property->Get;
#line 4420 "obj/debug.linux/ColorSpheres.main.c"

#line 4422 "obj/debug.linux/ColorSpheres.main.c"


#line 273 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_text = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "text", module);
#line 4427 "obj/debug.linux/ColorSpheres.main.c"


#line 274 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 274 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_text = _property->Set;
#line 4435 "obj/debug.linux/ColorSpheres.main.c"

#line 4437 "obj/debug.linux/ColorSpheres.main.c"


#line 275 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 275 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_text = _property->Get;
#line 4445 "obj/debug.linux/ColorSpheres.main.c"

#line 4447 "obj/debug.linux/ColorSpheres.main.c"


#line 277 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::sys::Degrees");
#line 4452 "obj/debug.linux/ColorSpheres.main.c"


#line 278 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::sys::Radians", module);
#line 4457 "obj/debug.linux/ColorSpheres.main.c"


#line 279 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 279 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians = _property->Set;
#line 4465 "obj/debug.linux/ColorSpheres.main.c"

#line 4467 "obj/debug.linux/ColorSpheres.main.c"


#line 280 "obj/debug.linux/ColorSpheres.main.ec"
if(_property)

#line 280 "obj/debug.linux/ColorSpheres.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians = _property->Get;
#line 4475 "obj/debug.linux/ColorSpheres.main.c"

#line 4477 "obj/debug.linux/ColorSpheres.main.c"


#line 282 "obj/debug.linux/ColorSpheres.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::GetTime");
#line 4482 "obj/debug.linux/ColorSpheres.main.c"


#line 283 "obj/debug.linux/ColorSpheres.main.ec"
if(function)

#line 283 "obj/debug.linux/ColorSpheres.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetTime = function->function;
#line 4490 "obj/debug.linux/ColorSpheres.main.c"

#line 4492 "obj/debug.linux/ColorSpheres.main.c"


#line 286 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "ColorSpheresApp");
#line 4497 "obj/debug.linux/ColorSpheres.main.c"


#line 287 "obj/debug.linux/ColorSpheres.main.ec"
if(setThingsUp)

#line 287 "obj/debug.linux/ColorSpheres.main.ec"
__ecereNameSpace__ecere__com__eInstance_Evolve((struct __ecereNameSpace__ecere__com__Instance **)&__currentModule, _class);
#line 4505 "obj/debug.linux/ColorSpheres.main.c"

#line 4507 "obj/debug.linux/ColorSpheres.main.c"


#line 288 "obj/debug.linux/ColorSpheres.main.ec"
__thisModule = __currentModule;
#line 4512 "obj/debug.linux/ColorSpheres.main.c"


#line 289 "obj/debug.linux/ColorSpheres.main.ec"
__ecereCreateModuleInstances_colorSpheres();
#line 4517 "obj/debug.linux/ColorSpheres.main.c"


#line 291 "obj/debug.linux/ColorSpheres.main.ec"
((void (*)(void *))(void *)((struct __ecereNameSpace__ecere__com__Instance *)(char *)__currentModule)->_vTbl[12])(__currentModule);
#line 4522 "obj/debug.linux/ColorSpheres.main.c"


#line 292 "obj/debug.linux/ColorSpheres.main.ec"
__ecereDestroyModuleInstances_colorSpheres();
#line 4527 "obj/debug.linux/ColorSpheres.main.c"


#line 295 "obj/debug.linux/ColorSpheres.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "ecere::com::Application");
#line 4532 "obj/debug.linux/ColorSpheres.main.c"


#line 296 "obj/debug.linux/ColorSpheres.main.ec"
exitCode = ((struct __ecereNameSpace__ecere__com__Application *)(((char *)((struct __ecereNameSpace__ecere__com__Instance *)__currentModule) + sizeof(struct __ecereNameSpace__ecere__com__Module) + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->exitCode;
#line 4537 "obj/debug.linux/ColorSpheres.main.c"


#line 297 "obj/debug.linux/ColorSpheres.main.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__currentModule), __currentModule = 0);
#line 4542 "obj/debug.linux/ColorSpheres.main.c"


#line 298 "obj/debug.linux/ColorSpheres.main.ec"
return exitCode;
#line 4547 "obj/debug.linux/ColorSpheres.main.c"


#line 299 "obj/debug.linux/ColorSpheres.main.ec"
}
#line 4552 "obj/debug.linux/ColorSpheres.main.c"


