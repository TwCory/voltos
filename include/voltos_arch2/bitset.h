// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitset.h
 *
 * 	Bit Sets
 */

#ifndef _VOLTOS_BITSET_H
#define _VOLTOS_BITSET_H

#include <voltos/types.h>

typedef enum {
	BITSET_TYPE_T_U8		= 1,
	BITSET_TYPE_T_U16		= 2,
	BITSET_TYPE_T_U32		= 3,
	BITSET_TYPE_T_U64		= 4,
	__BITSET_TYPE_T_MAX__
} bitset_type_t;

typedef struct {
	bitset_type_t			type;
	union {
		u8			bs8;
		u16			bs16;
		u32			bs32;
		u64			bs64;
	} data;
} bitset_t;

#endif /* _VOLTOS_BITSET_H */
