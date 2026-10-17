// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/atomic-fetch.h
 *
 */

#ifndef _VOLTOS_ATOMIC_ATOMIC_FETCH_H
#define _VOLTOS_ATOMIC_ATOMIC_FETCH_H

#define raw_atomic_fetch_add(a, b) 				\
	__sync_fetch_and_add(a, b)

#define raw_atomic_fetch_sub(a, b) 				\
	__sync_fetch_and_sub(a, b)

#define raw_atomic_fetch_and(a, b) 				\
	__sync_fetch_and_and(a, b)

#define raw_atomic_fetch_xor(a, b) 				\
	__sync_fetch_and_xor(a, b)

#define raw_atomic_fetch_or(a, b) 				\
	__sync_fetch_and_or(a, b)

#define raw_atomic_fetch_nand(a, b) 				\
	__sync_fetch_nand(a, b)

#define raw_atomic_add_fetch(a, b) 				\
	__sync_add_and_fetch(a, b)

#define raw_atomic_sub_fetch(a, b) 				\
	__sync_sub_and_fetch(a, b)

#define raw_atomic_and_fetch(a, b) 				\
	__sync_and_and_fetch(a, b)

#define raw_atomic_xor_fetch(a, b) 				\
	__sync_xor_and_fetch(a, b)

#define raw_atomic_or_fetch(a, b) 				\
	__sync_or_and_fetch(a, b)

#define raw_atomic_nand_fetch(a, b) 				\
	__sync_nand_and_fetch(a, b)

#define raw_atomic_fetch_add_rel(a, b) 				\
	__atomic_fetch_add((a), (b), __ATOMIC_RELEASE__)

#define raw_atomic_fetch_sub_rel(a, b) 				\
	__atomic_fetch_sub((a), (b), __ATOMIC_RELEASE__)

#define raw_atomic_fetch_add_relax(a, b) 			\
	__atomic_fetch_add((a), (b), __ATOMIC_RELAXED__)

#define raw_atomic_fetch_sub_relax(a, b) 			\
	__atomic_fetch_sub((a), (b), __ATOMIC_RELAXED__)

#endif /* _VOLTOS_ATOMIC_ATOMIC_FETCH_H */
