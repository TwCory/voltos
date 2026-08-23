// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/types.h
 *
 * 	Global Data Type Definitions
 */

#ifndef _VOLTOS_TYPES_H
#define _VOLTOS_TYPES_H

#include <nbapi/voltos/types.h>

#ifdef VCC_CADDR_T_64BIT
typedef __voltos_caddr64_t 				caddr_t;
#else
typedef __voltos_caddr32_t 				caddr_t;
#endif /* VCC_CADDR_T_64BIT */

#ifdef VCC_CLOCK_T_64BIT
typedef __voltos_clock64_t 				clock_t;
#else
typedef __voltos_clock32_t 				clock_t;
#endif /* VCC_CLOCK_T_64BIT */

#ifdef VCC_GID_T_64BIT
typedef __voltos_gid64_t 				gid_t;
#else
typedef __voltos_gid32_t 				gid_t;
#endif /* VCC_GID_T_64BIT */

#ifdef VCC_PID_T_64BIT
typedef __voltos_pid64_t 				pid_t;
#else
typedef __voltos_pid32_t 				pid_t;
#endif /* VCC_PID_T_64BIT */

#ifdef VCC_PTRDIFF_T_64BIT
typedef __voltos_ptrdiff64_t 				ptrdiff_t;
#else
typedef __voltos_ptrdiff32_t 				ptrdiff_t;
#endif /* VCC_PTRDIFF_T_64BIT */

#ifdef VCC_SIZE_T_64BIT
typedef __voltos_size64_t 				size_t;
typedef __voltos_ssize64_t 				ssize_t;
#else
typedef __voltos_size32_t 				size_t;
typedef __voltos_ssize32_t 				ssize_t;
#endif /* VCC_SIZE_T_64BIT */

#ifdef VCC_TIME_T_64BIT
typedef __voltos_time64_t 				time_t;
#else
typedef __voltos_time32_t 				time_t;
#endif /* VCC_TIME_T_64BIT */

#ifdef VCC_UID_T_64BIT
typedef __voltos_uid64_t 				uid_t;
#else
typedef __voltos_uid32_t 				uid_t;
#endif /* VCC_UID_T_64BIT */

typedef _Bool 						bool;

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

typedef __u64 						sector_t;
typedef __u64 						blkcnt_t;

#ifdef VCC_PHY_ADDR_64BIT
typedef __u64 						phy_addr_t;
#else
typedef __u32 						phy_addr_t;
#endif /* VCC_PHY_ADDR_64BIT */

typedef struct {
	phy_addr_t 					p_addr;
	size_t 						p_size;
} phy_vec_t;

typedef phy_addr_t 					resource_size_t;

#ifdef VCC_DMA_ADDR_64BIT
typedef __u64 						dma_addr_t;
#else
typedef __u32 						dma_addr_t;
#endif /* VCC_DMA_ADDR_64BIT */

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
