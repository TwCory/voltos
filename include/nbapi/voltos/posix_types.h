// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/posix_types.h
 *
 */

#ifndef _NBAPI_VOLTOS_POSIX_TYPES_H
#define _NBAPI_VOLTOS_POSIX_TYPES_H

typedef signed char			__voltos_schar_t;
typedef unsigned char			__voltos_uchar_t;

typedef signed short			__voltos_sshort_t;
typedef unsigned short			__voltos_ushort_t;

typedef signed int			__voltos_sint_t;
typedef unsigned int			__voltos_uint_t;

typedef signed long			__voltos_slong_t;
typedef unsigned long			__voltos_ulong_t;

typedef signed long long		__voltos_sllong_t;
typedef unsigned long long		__voltos_ullong_t;

typedef float				__voltos_float32_t;
typedef double				__voltos_float64_t;

typedef unsigned short 			__voltos_gid16_t;
typedef unsigned int			__voltos_gid32_t;
typedef unsigned long long		__voltos_gid64_t;

typedef unsigned short			__voltos_uid16_t;
typedef unsigned int			__voltos_uid32_t;
typedef unsigned long long		__voltos_uid64_t;

typedef unsigned short			__voltos_pid16_t;
typedef unsigned int			__voltos_pid32_t;
typedef unsigned long long		__voltos_pid64_t;

typedef int				__voltos_fd_t;
typedef int				__voltos_key_t;
typedef int				__voltos_ptrdiff_t;
typedef signed int			__voltos_ssize_t;
typedef unsigned int			__voltos_size_t;
typedef int				__voltos_time_t;

#ifndef __FD_SET_SIZE
#define __FD_SET_SIZE			(1024)
#endif /* __FD_SET_SIZE */

typedef struct {
	unsigned long 			fds_bits[__FD_SET_SIZE / (8 * sizeof(long))];
} __voltos_fd_set;

typedef void 				(*__voltos_sighandler_t)(int);

#endif /* _NBAPI_VOLTOS_POSIX_TYPES_H */
