// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/alps/circuit.h
 *
 */

#ifndef _ALPS_CIRCUIT_H
#define _ALPS_CIRCUIT_H

#include <voltos/alps.h>
#include <voltos/refcount.h>

struct alps_circuit {
	const char 			name[ALPS_CIRCUIT_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _ALPS_CIRCUIT_H */
