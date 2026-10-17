// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/line.h
 *
 */

#ifndef _VOLTOS_LINE_H
#define _VOLTOS_LINE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/line.h>

struct line {
	refcount_t refcount;
};

#endif /* _VOLTOS_LINE_H */
