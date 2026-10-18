// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/posix_types.h
 *
 */

#ifndef _NBAPI_VOLTOS_POSIX_TYPES_H
#define _NBAPI_VOLTOS_POSIX_TYPES_H

typedef char					__voltos_char_t;
typedef unsigned char				__voltos_uchar_t;

typedef short					__voltos_short_t;
typedef unsigned short				__voltos_ushort_t;

typedef int					__voltos_int_t;
typedef unsigned int				__voltos_uint_t;

typedef long					__voltos_long_t;
typedef unsigned long				__voltos_ulong_t;

typedef long long				__voltos_llong_t;
typedef unsigned long long			__voltos_ullong_t;

typedef float					__voltos_float32_t;
typedef double					__voltos_float64_t;

typedef struct {
	float					s_float[4];
} __voltos_float128_t;

typedef int					__voltos_fd_t;
typedef unsigned int				__voltos_fiber_t;
typedef unsigned int				__voltos_thread_t;
typedef int					__voltos_timer_t;

typedef struct {
	int 					value[2];
} __voltos_fsid_t;

typedef long long				__voltos_loff_t;
typedef unsigned long long			__voltos_uoff_t;

typedef int					__voltos_time32_t;
typedef long long				__voltos_time64_t;

typedef unsigned short				__voltos_gid16_t;
typedef unsigned short				__voltos_pid16_t;
typedef unsigned short				__voltos_uid16_t;

typedef unsigned int				__voltos_gid32_t;
typedef unsigned int				__voltos_pid32_t;
typedef unsigned int				__voltos_uid32_t;


#endif /* _NBAPI_VOLTOS_POSIX_TYPES_H */
