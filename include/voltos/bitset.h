// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitset.h
 *
 * 	Bit sets
 */

#ifndef _VOLTOS_BITSET_H
#define _VOLTOS_BITSET_H

typedef struct {
	unsigned long 		*bs_array;
	size_t 			bs_size;
	size_t 			bs_capacity;
} bitset_t;

#ifndef DEFINE_BITSET
#define DEFINE_BITSET(name)
#endif /* DEFINE_BITSET */

#ifndef DECLARE_BITSET
#define DECLARE_BITSET(name)
#endif /* DECLARE_BITSET */

#endif /* _VOLTOS_BITSET_H */
