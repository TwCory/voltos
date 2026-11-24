// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/prefix-list.h
 *
 * 	Prefix List
 */

#ifndef _NBAPI_VOLTOS_PREFIX_LIST_H
#define _NBAPI_VOLTOS_PREFIX_LIST_H

#define PREFIX_LIST_NAME_SIZE			(32)

enum prefix_list_type {
	PREFIX_LIST_TYPE_UNSPEC			= 0,
	PREFIX_LIST_TYPE_IPV4			= 1,
	PREFIX_LIST_TYPE_IPV6			= 2,
	__PREFIX_LIST_TYPE_MAX__
};

#define PREFIX_LIST_TYPE_MAX			(__PREFIX_LIST_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_PREFIX_LIST_H */
