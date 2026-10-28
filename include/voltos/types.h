// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/types.h
 *
 */

#ifndef _VOLTOS_TYPES_H
#define _VOLTOS_TYPES_H

#include <sys/types.h>
#include <nbapi/voltos/types.h>

typedef int8_t				i8;
typedef uint8_t				u8;

typedef int16_t				i16;
typedef uint16_t			u16;

typedef int32_t				i32;
typedef uint32_t			u32;

typedef int64_t				i64;
typedef uint64_t			u64;

typedef int128_t			i128;
typedef uint128_t			u128;

typedef float				f16;
typedef float				f32;
typedef double				f64;

#define FLOAT128_SIZE32			4
#define FLOAT128_SIZE64			2

typedef union {
	float				s_float32[FLOAT128_SIZE32];
	double				s_float64[FLOAT128_SIZE64];
} __attribute__ ((packed)) f128;

typedef ssize_t				isize;
typedef size_t				usize;

typedef ssize_t				iword;
typedef size_t				uword;

typedef intmax_t			imax;
typedef uintmax_t			umax;

typedef intptr_t			iptr;
typedef uintptr_t			uptr;

typedef unsigned char			nibble_t;
typedef uint8_t				byte_t;
typedef uint8_t				octet_t;
typedef uint16_t			hextet_t;

typedef size_t				phy_addr_t;
typedef size_t				dma_addr_t;
typedef size_t				resource_size_t;

typedef struct {
	phy_addr_t 			address;
	usize				length;
} phy_vec_t;

#define aligned_i64			__aligned_i64
#define aligned_u64			__aligned_u64
#define aligned_be64			__aligned_be64
#define aligned_le64			__aligned_le64
#define aligned_net64			__aligned_net64
#define aligned_host64			__aligned_host64

typedef u64 				sector_t;
typedef unsigned long 			pgoff_t;

typedef i64 				vs_time_t;

typedef void 				(*r_swap_fn_t)(void *a, void *b, int size, const void *priv);
typedef void 				(*swap_fn_t)(void *a, void *b, int size);

typedef int 				(*r_cmp_fn_t)(const void *a, const void *b, const void *priv);
typedef int 				(*cmp_fn_t)(const void *a, const void *b);

#endif /* _VOLTOS_TYPES_H */
