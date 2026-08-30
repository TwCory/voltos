// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/fiber_types.h
 *
 */

#ifndef _VOLTOS_FIBER_TYPES_H
#define _VOLTOS_FIBER_TYPES_H

#define FIBER_NAME_SIZE			32

typedef struct fiber {
	const char 			name[FIBER_NAME_SIZE];
	unsigned int 			index;
} fiber_t;

#endif /* _VOLTOS_FIBER_TYPES_H */
