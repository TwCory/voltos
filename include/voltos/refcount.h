// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/refcount.h
 *
 */

#ifndef _VOLTOS_REFCOUNT_H
#define _VOLTOS_REFCOUNT_H

#include <voltos/refcount_types.h>

#define REFCOUNT_INIT(n)
#define REFCOUNT_MAX
#define REFCOUNT_SATURATED

typedef enum {
	REFCOUNT_SATURATION_TYPE_T_UNSPEC		= 0,
	REFCOUNT_SATURATION_TYPE_T_ADD_NOT_ZERO_OVF	= 1,
	REFCOUNT_SATURATION_TYPE_T_ADD_OVF		= 2,
	REFCOUNT_SATURATION_TYPE_T_ADD_UAF		= 3,
	REFCOUNT_SATURATION_TYPE_T_SUB_UAF		= 4,
	REFCOUNT_SATURATION_TYPE_T_DEC_LEAK		= 5,
	__REFCOUNT_SATURATION_TYPE_T_MAX__
} refcount_saturation_type_t;

#endif /* _VOLTOS_REFCOUNT_H */
