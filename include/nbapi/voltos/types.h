// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/types.h
 *
 */

#ifndef _NBAPI_VOLTOS_TYPES_H
#define _NBAPI_VOLTOS_TYPES_H

#include <voltos/posix_types.h>

typedef signed char			__i8;
typedef unsigned char			__u8;

typedef signed short			__i16;
typedef unsigned short			__u16;

typedef signed int			__i32;
typedef unsigned int			__u32;

typedef signed long long		__i64;
typedef unsigned long long		__u64;

#ifdef HAVE_INT128_TYPE
typedef signed __int128			__i128;
typedef unsigned __int128		__u128;
#else
#define INT128_SIZE			(16)
typedef struct {
	signed char 			s_bytes[INT128_SIZE];
} __attribute__ ((packed)) __i128;
typedef struct {
	unsigned char 			s_bytes[INT128_SIZE];
} __attribute__ ((packed)) __u128;
#endif /* HAVE_INT128_TYPE */

typedef float				__f16;
typedef float				__f32;
typedef double				__f64;

#define FLOAT128_SIZE32			(4)
#define FLOAT128_SIZE64			(2)
typedef union {
	float				s_float32[FLOAT128_SIZE32];
	double				s_float64[FLOAT128_SIZE64];
} __attribute__ ((packed)) __f128;

typedef __u16				__be16;
typedef __u32				__be32;
typedef __u64				__be64;
typedef __u128				__be128;

typedef __u16				__le16;
typedef __u32				__le32;
typedef __u64				__le64;
typedef __u128				__le128;

typedef __u16				__net16;
typedef __u32				__net32;
typedef __u64				__net64;
typedef __u128				__net128;

typedef __u16				__host16;
typedef __u32				__host32;
typedef __u64				__host64;
typedef __u128				__host128;

typedef __u16				__csum16;
typedef __u32				__csum32;

#define __aligned_i64			__i64		__attribute__ ((aligned(8)))
#define __aligned_u64			__u64		__attribute__ ((aligned(8)))
#define __aligned_be64			__be64		__attribute__ ((aligned(8)))
#define __aligned_le64			__le64		__attribute__ ((aligned(8)))
#define __aligned_net64			__net64		__attribute__ ((aligned(8)))
#define __aligned_host64		__host64	__attribute__ ((aligned(8)))

#endif /* _NBAPI_VOLTOS_TYPES_H */
