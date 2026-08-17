// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/xref.h
 *
 * 	Cross-Reference (XRef) Data Structures
 */

#ifndef _VOLTOS_XREF_H
#define _VOLTOS_XREF_H

#include <voltos/refcount.h>

struct xref {
	refcount_t refcount;
};

#define XREF_INIT(n)

#endif /* _VOLTOS_XREF_H */
