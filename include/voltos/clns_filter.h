// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/clns_filter.h
 *
 */

#ifndef _VOLTOS_CLNS_FILTER_H
#define _VOLTOS_CLNS_FILTER_H

#include <voltos/refcount.h>
#include <nbapi/voltos/clns_filter.h>

struct clns_filter_expr {
	const char 		name[CLNS_FILTER_EXPR_NAME_SIZE];
	refcount_t 		ref_count;
};

struct clns_filter_set {
	const char 		name[CLNS_FILTER_SET_NAME_SIZE];
	refcount_t 		ref_count;
};

#endif /* _VOLTOS_CLNS_FILTER_H */
