// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/types.h
 *
 * 	Global Data Type Definitions
 */

#ifndef _VOLTOS_TYPES_H
#define _VOLTOS_TYPES_H

#include <nbapi/voltos/types.h>

typedef __s8 						s8;
typedef __u8 						u8;

typedef __s16 						s16;
typedef __u16 						u16;

typedef __s32 						s32;
typedef __u32 						u32;

typedef __s64 						s64;
typedef __u64 						u64;

typedef __s128 						s128;
typedef __u128 						u128;

typedef float 						f16;
typedef float 						f32;
typedef double 						f64;

typedef struct {
	union {
		float 					data32[4];
		double 					data64[2];
	};
} __attribute__ ((packed)) f128;


typedef u32 						__voltos_dev_t;

typedef __voltos_dev_t					dev_t;
typedef __voltos_ulong_t				ino_t;
typedef __voltos_mode_t					mode_t;
typedef __voltos_umode_t				umode_t;
typedef u32						nlink_t;
typedef __voltos_off_t					off_t;
typedef __voltos_pid_t					pid_t;
typedef __voltos_daddr_t				daddr_t;
typedef __voltos_key_t					key_t;
typedef __voltos_index_t				index_t;
typedef __voltos_suseconds_t				suseconds_t;
typedef __voltos_time_t 				time_t;
typedef __voltos_timer_t				timer_t;
typedef __voltos_clockid_t				clockid_t;
typedef __voltos_mqd_t					mqd_t;

typedef _Bool						bool;

typedef __voltos_uid32_t				uid_t;
typedef __voltos_gid32_t				gid_t;
typedef __voltos_uid16_t				uid16_t;
typedef __voltos_gid16_t				gid16_t;

typedef __voltos_uintptr_t				uintptr_t;
typedef __voltos_intptr_t				intptr_t;

#if defined(__GNUC__)
typedef __voltos_loff_t					loff_t;
typedef __voltos_uoff_t					uoff_t;
#endif

#ifndef _SIZE_T
#define _SIZE_T
typedef __voltos_size_t					size_t;
#endif /* _SIZE_T */

#ifndef _SSIZE_T
#define _SSIZE_T
typedef __voltos_ssize_t				ssize_t;
#endif /* _SSIZE_T */

#ifndef _PTRDIFF_T
#define _PTRDIFF_T
typedef __voltos_ptrdiff_t				ptrdiff_t;
#endif /* _PTRDIFF_T */

#ifndef _CLOCK_T
#define _CLOCK_T
typedef __voltos_clock_t				clock_t;
#endif /* _CLOCK_T */

#ifndef _CADDR_T
#define _CADDR_T
typedef __voltos_caddr_t				caddr_t;
#endif /* _CADDR_T */

/* BSD */
typedef unsigned char					u_char;
typedef unsigned short					u_short;
typedef unsigned int					u_int;
typedef unsigned long					u_long;

/* System V */
typedef unsigned char					unchar;
typedef unsigned short					ushort;
typedef unsigned int					uint;
typedef unsigned long					ulong;
typedef unsigned long long				ullong;

#ifndef __BIT_TYPES_DEFINED__
#define __BIT_TYPES_DEFINED__

typedef u8						u_int8_t;
typedef s8						int8_t;
typedef u16						u_int16_t;
typedef s16						int16_t;
typedef u32						u_int32_t;
typedef s32						int32_t;

#endif /* !(__BIT_TYPES_DEFINED__) */

typedef u8						uint8_t;
typedef u16						uint16_t;
typedef u32						uint32_t;

#if defined(__GNUC__)
typedef u64						uint64_t;
typedef u64						u_int64_t;
typedef s64						int64_t;
#endif

typedef u64 						sector_t;
typedef u64 						blkcnt_t;
typedef unsigned long					pgoff_t;

#ifdef VCF_PHY_ADDR_T_64BIT
typedef u64 						phy_addr_t;
#else
typedef u32 						phy_addr_t;
#endif /* VCF_PHY_ADDR_T_64BIT */

typedef struct {
	phy_addr_t 					p_addr;
	size_t 						p_size;
} phy_vec_t;

typedef phy_addr_t 					resource_size_t;

#ifdef VCF_DMA_ADDR_T_64BIT
typedef u64 						dma_addr_t;
#else
typedef u32 						dma_addr_t;
#endif /* VCF_DMA_ADDR_T_64BIT */

#define aligned_s64					__aligned_s64
#define aligned_u64					__aligned_u64
#define aligned_be64					__aligned_be64
#define aligned_le64					__aligned_le64
#define aligned_net64					__aligned_net64
#define aligned_host64					__aligned_host64

typedef void 						(*r_swap_fn_t)	(void *a, void *b, int size, const void *priv);
typedef void 						(*swap_fn_t)	(void *a, void *b, int size);

typedef int 						(*r_cmp_fn_t)	(const void *a, const void *b, const void *priv);
typedef int 						(*cmp_fn_t)	(const void *a, const void *b);

#endif /* _VOLTOS_TYPES_H */
