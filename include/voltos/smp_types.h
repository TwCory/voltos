// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/smp_types.h
 *
 */

#ifndef _VOLTOS_SMP_TYPES_H
#define _VOLTOS_SMP_TYPES_H

struct __call_single_node {
	struct llist_node 		llist;
	union {
		unsigned int 		u_flags;
		atomic_t 		a_flags;
	};
};

#endif /* _VOLTOS_SMP_TYPES_H */
