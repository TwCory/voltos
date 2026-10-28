// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/trunk.h
 *
 */

#ifndef _VOLTOS_TRUNK_H
#define _VOLTOS_TRUNK_H

#include <voltos/refcount.h>
#include <nbapi/voltos/trunk.h>

struct trunk {
	const char 				name[TRUNK_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_TRUNK_H */
