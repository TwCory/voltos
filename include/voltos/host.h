// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/host.h
 *
 */

#ifndef _VOLTOS_HOST_H
#define _VOLTOS_HOST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/host.h>

struct host {
	const char 			name;
	refcount_t 			refcount;
};

#endif /* _VOLTOS_HOST_H */
