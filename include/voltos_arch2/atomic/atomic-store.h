// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/atomic-store.h
 *
 */

#ifndef _VOLTOS_ATOMIC_ATOMIC_STORE_H
#define _VOLTOS_ATOMIC_ATOMIC_STORE_H

#define raw_atomic_store_rel_n(a, b) 				\
	__atomic_store_n ((a), (b), __ATOMIC_RELEASE__)
	
#define raw_atomic_store_seq_cst(a, b)				\
	__atomic_store_n ((a), (b), __ATOMIC_SEQ_CST__)

#define raw_atomic_store_relax_n(a, b)          		\
	__atomic_store_n ((a), (b), __ATOMIC_RELAXED__)

#endif /* _VOLTOS_ATOMIC_ATOMIC_STORE_H */
