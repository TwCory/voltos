// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vsref.h
 *
 */

#ifndef _VOLTOS_VSREF_H
#define _VOLTOS_VSREF_H

#include <voltos/refcount.h>

struct vsref {
	refcount_t refcount;
};

#define VSREF_INIT(n)

#endif /* _VOLTOS_VSREF_H */
