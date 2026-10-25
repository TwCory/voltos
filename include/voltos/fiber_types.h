// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/fiber_types.h
 *
 */

#ifndef _VOLTOS_FIBER_TYPES_H
#define _VOLTOS_FIBER_TYPES_H

typedef unsigned int 		fiber_oid_t;

typedef struct fiber {
	fiber_oid_t 		f_oid;
} fiber_t;

#endif /* _VOLTOS_FIBER_TYPES_H */
