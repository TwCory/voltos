// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/types.h
 *
 */

#ifndef _VOLTOS_ATOMIC_TYPES_H
#define _VOLTOS_ATOMIC_TYPES_H

#include <voltos/types.h>

typedef _Atomic _Bool			atomic_bool_t;

typedef _Atomic char			atomic_char_t;
typedef _Atomic signed char		atomic_schar_t;
typedef _Atomic unsigned char		atomic_uchar_t;

typedef _Atomic short			atomic_short_t;
typedef _Atomic unsigned short		atomic_ushort_t;

typedef _Atomic int			atomic_int_t;
typedef _Atomic unsigned int		atomic_uint_t;

typedef _Atomic i8 			atomic_i8;
typedef _Atomic u8 			atomic_u8;

typedef _Atomic i16 			atomic_i16;
typedef _Atomic u16 			atomic_u16;

typedef _Atomic i32 			atomic_i32;
typedef _Atomic u32 			atomic_u32;

typedef _Atomic i64 			atomic_i64;
typedef _Atomic u64 			atomic_u64;

typedef _Atomic i128 			atomic_i128;
typedef _Atomic u128 			atomic_u128;

typedef _Atomic isize 			atomic_isize;
typedef _Atomic usize 			atomic_usize;

typedef _Atomic iword 			atomic_iword;
typedef _Atomic uword 			atomic_uword;

typedef _Atomic imax 			atomic_imax;
typedef _Atomic umax 			atomic_umax;

typedef _Atomic iptr 			atomic_iptr;
typedef _Atomic uptr 			atomic_uptr;

typedef _Atomic f16 			atomic_f16;
typedef _Atomic f32 			atomic_f32;
typedef _Atomic f64 			atomic_f64;
typedef _Atomic f128 			atomic_f128;

typedef struct {
	atomic_i32			counter;
} atomic32_t;

#define ATOMIC32_INIT(i)		{ (i) }

typedef struct {
	atomic_i64			counter;
} atomic64_t;

#define ATOMIC64_INIT(i)		{ (i) }

typedef struct {
	atomic_isize			counter;
} atomic_t;

#define ATOMIC_INIT(i)			{ (i) }

#endif /* _VOLTOS_ATOMIC_TYPES_H */
