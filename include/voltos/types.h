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

typedef u64				__voltos_dev_t;

typedef __voltos_fd_set 		fd_set;

typedef __voltos_caddr_t 		caddr_t;
typedef __voltos_clock_t 		clock_t;
typedef __voltos_clockid_t 		clockid_t;
typedef __voltos_daddr_t 		daddr_t;
typedef __voltos_dev_t			dev_t;
typedef __voltos_fd_t 			fd_t;
typedef __voltos_index_t 		index_t;
typedef __voltos_ino_t 			ino_t;
typedef __voltos_key_t 			key_t;
typedef __voltos_loff_t			loff_t;
typedef __voltos_mode_t 		mode_t;
typedef __voltos_nlink_t 		nlink_t;
typedef __voltos_off_t 			off_t;
typedef __voltos_old_gid_t 		old_gid_t;
typedef __voltos_old_uid_t 		old_uid_t;
typedef __voltos_suseconds_t 		suseconds_t;
typedef __voltos_time_t 		time_t;
typedef __voltos_timer_t 		timer_t;
typedef __voltos_uoff_t			uoff_t;

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

typedef signed long			intmax_t;
typedef unsigned long			uintmax_t;

typedef signed int			intfptr_t;
typedef unsigned int			uintfptr_t;

typedef i8				int8_t;
typedef u8				uint8_t;

typedef i16				int16_t;
typedef u16				uint16_t;

typedef i32				int32_t;
typedef u32				uint32_t;

typedef i64				int64_t;
typedef u64				uint64_t;

typedef i8 				int_fast8_t;
typedef u8 				uint_fast8_t;

typedef i16 				int_fast16_t;
typedef u16 				uint_fast16_t;

typedef i32 				int_fast32_t;
typedef u32 				uint_fast32_t;

typedef i64 				int_fast64_t;
typedef u64 				uint_fast64_t;

typedef i8 				int_least8_t;
typedef u8 				uint_least8_t;

typedef i16 				int_least16_t;
typedef u16 				uint_least16_t;

typedef i32 				int_least32_t;
typedef u32 				uint_least32_t;

typedef i64 				int_least64_t;
typedef u64 				uint_least64_t;

typedef unsigned char			nibble_t;
typedef u8				byte_t;
typedef u8				octet_t;
typedef u16				hextet_t;

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

typedef u64				blkcnt_t;
typedef u64 				sector_t;
typedef unsigned long 			pgoff_t;

typedef i64 				vs_time_t;

typedef void 				(*r_swap_fn_t)(void *a, void *b, int size, const void *priv);
typedef void 				(*swap_fn_t)(void *a, void *b, int size);

typedef int 				(*r_cmp_fn_t)(const void *a, const void *b, const void *priv);
typedef int 				(*cmp_fn_t)(const void *a, const void *b);

#endif /* _VOLTOS_TYPES_H */
