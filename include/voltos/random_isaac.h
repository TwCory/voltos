// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/random_isaac.h
 *
 */

#ifndef _VOLTOS_RANDOM_ISAAC_H
#define _VOLTOS_RANDOM_ISAAC_H

#include <voltos/types.h>

#define ISAAC_LOG2_SIZE		(4)
#define ISAAC_SIZE		(1 << ISAAC_LOG2_SIZE)

struct isaac {
	size_t memory[ISAAC_SIZE];
	size_t value1;
	size_t value2;
	size_t value3;
};

#endif /* _VOLTOS_RANDOM_ISAAC_H */
