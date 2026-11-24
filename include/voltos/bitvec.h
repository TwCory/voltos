// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitvec.h
 *
 * 	Bit vectors
 */

#ifndef _VOLTOS_BITVEC_H
#define _VOLTOS_BITVEC_H

#include <voltos/bits.h>
#include <voltos/types.h>

typedef struct {
	bit_t 			*data;
	size_t 			length;
	size_t 			capacity;
} bitvec_t;

#ifndef DEFINE_BITVEC
#define DEFINE_BITVEC(name)
#endif /* DEFINE_BITVEC */

#ifndef DECLARE_BITVEC
#define DECLARE_BITVEC(name)
#endif /* DECLARE_BITVEC */

#endif /* _VOLTOS_BITVEC_H */
