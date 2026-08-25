// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/types.h
 *
 * 	General Data Type Definitions
 */

#ifndef _NBAPI_VOLTOS_TYPES_H
#define _NBAPI_VOLTOS_TYPES_H

#include <asm/types.h>
#include <voltos/posix_types.h>

#ifdef __SIZEOF_INT128__
typedef signed __int128 			__s128;
typedef unsigned __int128 			__u128;
#else
#define INT128_BYTE_SIZE 			16
typedef struct {
	signed char 				bytes[INT128_BYTE_SIZE];
} __attribute__ ((packed)) __s128;
typedef struct {
	unsigned char 				bytes[INT128_BYTE_SIZE];
} __attribute__ ((packed)) __u128;
#endif /* __SIZEOF_INT128__ */

typedef __u16 __attribute__ ((bitwise)) 	__be16;
typedef __u32 __attribute__ ((bitwise)) 	__be32;
typedef __u64 __attribute__ ((bitwise)) 	__be64;
typedef __u128 __attribute__ ((bitwise)) 	__be128;

typedef __u16 __attribute__ ((bitwise)) 	__le16;
typedef __u32 __attribute__ ((bitwise)) 	__le32;
typedef __u64 __attribute__ ((bitwise)) 	__le64;
typedef __u128 __attribute__ ((bitwise)) 	__le128;

typedef __be16 					__net16;
typedef __be32 					__net32;
typedef __be64 					__net64;
typedef __be128 				__net128;

typedef __u16 __attribute__ ((bitwise)) 	__host16;
typedef __u32 __attribute__ ((bitwise)) 	__host32;
typedef __u64 __attribute__ ((bitwise)) 	__host64;
typedef __u128 __attribute__ ((bitwise)) 	__host128;

typedef __u16 __attribute__ ((bitwise)) 	__csum16;
typedef __u32 __attribute__ ((bitwise)) 	__csum32;

typedef unsigned char 				__byte;
typedef unsigned char 				__octet;
typedef unsigned short 				__hextet;

#define __aligned_s64				__s64		__attribute__ ((aligned(8)))
#define __aligned_u64				__u64		__attribute__ ((aligned(8)))
#define __aligned_be64				__be64		__attribute__ ((aligned(8)))
#define __aligned_le64				__le64		__attribute__ ((aligned(8)))
#define __aligned_net64				__net64		__attribute__ ((aligned(8)))
#define __aligned_host64			__host64	__attribute__ ((aligned(8)))

#endif /* _NBAPI_VOLTOS_TYPES_H */
