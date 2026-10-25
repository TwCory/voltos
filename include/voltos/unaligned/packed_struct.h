// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/packed_struct.h
 *
 */

#ifndef _VOLTOS_UNALIGNED_PACKED_STRUCT_H
#define _VOLTOS_UNALIGNED_PACKED_STRUCT_H

#include <voltos/compiler.h>
#include <voltos/types.h>

typedef struct {
	u16 			value;
} __packed __unaligned_u16;

typedef struct {
	u32 			value;
} __packed __unaligned_u32;

typedef struct {
	u64 			value;
} __packed __unaligned_u64;

#endif /* _VOLTOS_UNALIGNED_PACKED_STRUCT_H */
