// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/prefix_list.h
 *
 */

#ifndef _NBAPI_VOLTOS_PREFIX_LIST_H
#define _NBAPI_VOLTOS_PREFIX_LIST_H

#include <voltos/types.h>

#define PREFIX_LIST_NAME_SIZE				32

enum prefix_list_type {
	PREFIX_LIST_TYPE_T_UNSPEC			= 0,
	PREFIX_LIST_TYPE_T_IPV4				= 1,
	PREFIX_LIST_TYPE_T_IPV6				= 2,
	__PREFIX_LIST_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_PREFIX_LIST_H */
