// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/types.h
 *
 */

#ifndef _VOLTOS_ATOMIC_TYPES_H
#define _VOLTOS_ATOMIC_TYPES_H

#include <voltos/types.h>

#ifndef __atomic__
#define __atomic__				_Atomic
#endif /* __atomic__ */

typedef struct {
	__atomic__ __s32			counter;
} atomic32_t;

typedef struct {
	__atomic__ __s64			counter;
} atomic64_t;

typedef struct {
	union {
		__atomic__ __s16 		counter16;
		__atomic__ __s32 		counter32;
		__atomic__ __s64 		counter64;
	};
} atomic_t;

typedef __atomic__ _Bool			atomic_bool_t;

typedef __atomic__ char 			atomic_char_t;
typedef __atomic__ signed char 			atomic_schar_t;
typedef __atomic__ unsigned char 		atomic_uchar_t;

typedef __atomic__ short 			atomic_short_t;
typedef __atomic__ unsigned short 		atomic_ushort_t;

typedef __atomic__ int 				atomic_int_t;
typedef __atomic__ unsigned int 		atomic_uint_t;

typedef __atomic__ long 			atomic_long_t;
typedef __atomic__ unsigned long 		atomic_ulong_t;

typedef __atomic__ long long 			atomic_llong_t;
typedef __atomic__ unsigned long long 		atomic_ullong_t;

#endif /* _VOLTOS_ATOMIC_TYPES_H */
