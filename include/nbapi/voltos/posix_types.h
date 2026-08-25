// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/posix_types.h
 *
 * 	POSIX-Compliant Data Type Definitions
 */

#ifndef _NBAPI_VOLTOS_POSIX_TYPES_H
#define _NBAPI_VOLTOS_POSIX_TYPES_H

#include <asm/posix_types.h>

#ifndef __voltos_char_t
typedef char 					__voltos_char_t;
typedef signed char 				__voltos_schar_t;
typedef unsigned char 				__voltos_uchar_t;
#endif /* __voltos_char_t */

#ifndef __voltos_short_t
typedef signed short 				__voltos_short_t;
typedef unsigned short				__voltos_ushort_t;
#endif /* __voltos_short_t */

#ifndef __voltos_int_t
typedef signed int 				__voltos_int_t;
typedef unsigned int 				__voltos_uint_t;
#endif /* __voltos_int_t */

#ifndef __voltos_long_t
typedef __kernel_long_t				__voltos_long_t;
typedef __kernel_ulong_t			__voltos_ulong_t;
#endif /* __voltos_long_t */

#ifndef __voltos_llong_t
typedef signed long long 			__voltos_llong_t;
typedef unsigned long long 			__voltos_ullong_t;
#endif /* __voltos_llong_t */

#ifndef __voltos_float_t
typedef float 					__voltos_float_t;
typedef double					__voltos_double_t;
#endif /* __voltos_float_t */

#ifndef __voltos_ino_t
typedef __kernel_ino_t 				__voltos_ino_t;
#endif /* __voltos_ino_t */

#ifndef __voltos_mode_t
typedef __kernel_mode_t 			__voltos_mode_t;
#endif /* __voltos_mode_t */

#ifndef __voltos_umode_t
typedef unsigned short 				__voltos_umode_t;
#endif /* __voltos_umode_t */

#ifndef __voltos_pid_t
typedef __kernel_pid_t 				__voltos_pid_t;
#endif /* __voltos_pid_t */

#ifndef __voltos_ipc_pid_t
typedef __kernel_ipc_pid_t 			__voltos_ipc_pid_t;
#endif /* __voltos_ipc_pid_t */

#ifndef __voltos_uid_t
typedef __kernel_uid_t 				__voltos_uid_t;
typedef __kernel_gid_t 				__voltos_gid_t;
#endif /* __voltos_uid_t */

#ifndef __voltos_suseconds_t
typedef __kernel_suseconds_t 			__voltos_suseconds_t;
#endif /* __voltos_suseconds_t */

#ifndef __voltos_daddr_t
typedef __kernel_daddr_t 			__voltos_daddr_t;
#endif /* __voltos_daddr_t */

#ifndef __voltos_uid32_t
typedef __kernel_uid32_t 			__voltos_uid32_t;
typedef __kernel_gid32_t 			__voltos_gid32_t;
#endif /* __voltos_uid32_t */

#ifndef __voltos_old_uid_t
typedef __kernel_old_uid_t 			__voltos_old_uid_t;
typedef __kernel_old_gid_t 			__voltos_old_gid_t;
#endif /* __voltos_old_uid_t */

#ifndef __voltos_size_t
typedef __kernel_size_t 			__voltos_size_t;
typedef __kernel_ssize_t			__voltos_ssize_t;
typedef __kernel_ptrdiff_t			__voltos_ptrdiff_t;
#endif /* __voltos_size_t */

#ifndef __voltos_fsid_t
typedef __kernel_fsid_t 			__voltos_fsid_t;
#endif /* __voltos_fsid_t */

#ifndef __voltos_intptr_t
typedef long					__voltos_intptr_t;
typedef unsigned long				__voltos_uintptr_t;
#endif /* __voltos_intptr_t */

#ifndef __voltos_key_t
typedef unsigned int 				__voltos_key_t;
#endif /* __voltos_key_t */

#ifndef __voltos_index_t
typedef unsigned int 				__voltos_index_t;
#endif /* __voltos_index_t */

#ifndef __voltos_fd_t
typedef signed int 				__voltos_fd_t;
#endif /* __voltos_fd_t */

#ifndef __voltos_mqd_t
typedef unsigned int 				__voltos_mqd_t;
#endif /* __voltos_mqd_t */

typedef __kernel_off_t				__voltos_off_t;
typedef __kernel_loff_t				__voltos_loff_t;
typedef unsigned int 				__voltos_uoff_t;
typedef __kernel_old_time_t			__voltos_old_time_t;
typedef __kernel_time_t				__voltos_time_t;
typedef __kernel_time64_t			__voltos_time64_t;
typedef __kernel_clock_t			__voltos_clock_t;
typedef __kernel_timer_t			__voltos_timer_t;
typedef __kernel_clockid_t			__voltos_clockid_t;
typedef __kernel_caddr_t			__voltos_caddr_t;
typedef __kernel_uid16_t			__voltos_uid16_t;
typedef __kernel_gid16_t			__voltos_gid16_t;

typedef void 					(*__voltos_sighandler_t)(int);

#endif /* _NBAPI_VOLTOS_POSIX_TYPES_H */
