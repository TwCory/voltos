// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/types.h
 *
 */

#ifndef _VOLTOS_TYPES_H
#define _VOLTOS_TYPES_H

#include <nbapi/voltos/types.h>

typedef __i8				i8;
typedef __u8				u8;

typedef __i16				i16;
typedef __u16				u16;

typedef __i32				i32;
typedef __u32				u32;

typedef __i64				i64;
typedef __u64				u64;

typedef __i128				i128;
typedef __u128				u128;

typedef __f16				f16;
typedef __f32				f32;
typedef __f64				f64;
typedef __f128				f128;

#ifndef __SIZE_T
#define __SIZE_T
typedef __voltos_size_t			size_t;
#endif /* __SIZE_T */

#ifndef __SSIZE_T
#define __SSIZE_T
typedef __voltos_ssize_t		ssize_t;
#endif /* __SIZE_T */

#ifndef __PTRDIFF_T
#define __PTRDIFF_T
typedef __voltos_ptrdiff_t		ptrdiff_t;
#endif /* __PTRDIFF_T */

typedef signed long			intptr_t;
typedef unsigned long			uintptr_t;

typedef unsigned char			nibble_t;
typedef uint8_t				byte_t;
typedef uint8_t				octet_t;
typedef uint16_t			hextet_t;

typedef size_t				phy_addr_t;
typedef size_t				dma_addr_t;
typedef size_t				resource_size_t;

typedef struct {
	phy_addr_t 			address;
	size_t				length;
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
