// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/types.h
 *
 */

#ifndef _NBAPI_VOLTOS_TYPES_H
#define _NBAPI_VOLTOS_TYPES_H

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>

#ifdef __SIZEOF_INT128__
typedef signed 		__int128 		int128_t;
typedef unsigned 	__int128 		uint128_t;
#else
#define INT128_SIZE8				16
#define INT128_SIZE16				8
#define INT128_SIZE32				4
#define INT128_SIZE64				2
typedef union {
	int8_t					s_int8[INT128_SIZE8];
	int16_t					s_int16[INT128_SIZE16];
	int32_t 				s_int32[INT128_SIZE32];
	int64_t 				s_int64[INT128_SIZE64];
} __attribute__ ((packed)) int128_t;
typedef union {
	uint8_t 				s_int8[INT128_SIZE8];
	uint16_t 				s_int16[INT128_SIZE16];
	uint32_t 				s_int32[INT128_SIZE32];
	uint64_t 				s_int64[INT128_SIZE64];
} __attribute__ ((packed)) uint128_t;
#endif /* __SIZEOF_INT128__ */

#ifdef __CHECKER__
#define __voltos_bitwise			__attribute__ ((bitwise))
#else
#define __voltos_bitwise
#endif /* __CHECKER__ */

typedef uint16_t 	__voltos_bitwise 	__be16;
typedef uint32_t 	__voltos_bitwise 	__be32;
typedef uint64_t 	__voltos_bitwise 	__be64;
typedef uint128_t 	__voltos_bitwise 	__be128;

typedef uint16_t 	__voltos_bitwise 	__le16;
typedef uint32_t 	__voltos_bitwise 	__le32;
typedef uint64_t 	__voltos_bitwise 	__le64;
typedef uint128_t 	__voltos_bitwise 	__le128;

typedef uint16_t 	__voltos_bitwise 	__net16;
typedef uint32_t 	__voltos_bitwise 	__net32;
typedef uint64_t 	__voltos_bitwise 	__net64;
typedef uint128_t 	__voltos_bitwise 	__net128;

typedef uint16_t 	__voltos_bitwise 	__host16;
typedef uint32_t 	__voltos_bitwise 	__host32;
typedef uint64_t 	__voltos_bitwise 	__host64;
typedef uint128_t 	__voltos_bitwise 	__host128;

typedef uint16_t 	__voltos_bitwise 	__csum16;
typedef uint32_t 	__voltos_bitwise 	__csum32;

#define __aligned_i64				int64_t		__attribute__ ((aligned(8)))
#define __aligned_u64				uint64_t	__attribute__ ((aligned(8)))
#define __aligned_be64				__be64		__attribute__ ((aligned(8)))
#define __aligned_le64				__le64		__attribute__ ((aligned(8)))
#define __aligned_net64				__net64		__attribute__ ((aligned(8)))
#define __aligned_host64			__host64	__attribute__ ((aligned(8)))

#endif /* _NBAPI_VOLTOS_TYPES_H */
