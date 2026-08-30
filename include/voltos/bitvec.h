// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitvec.h
 *
 * 	Bit-Based Vectors
 */

#ifndef _VOLTOS_BITVEC_H
#define _VOLTOS_BITVEC_H

#include <voltos/bits.h>
#include <voltos/types.h>

typedef struct {
	__bit		*bv_data;
	size_t		bv_size;
	size_t		bv_capacity;
} bitvec_t;

#endif /* _VOLTOS_BITVEC_H */
