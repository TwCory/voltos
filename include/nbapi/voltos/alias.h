// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/alias.h
 *
 * 	Generic Alias Definitions
 */

#ifndef _NBAPI_VOLTOS_ALIAS_H
#define _NBAPI_VOLTOS_ALIAS_H

enum alias_type {
	ALIAS_TYPE_UNSPEC	= 0,
	ALIAS_TYPE_COMMAND	= 1,
	ALIAS_TYPE_ADDRESS	= 2,
	__ALIAS_TYPE_MAX__
};

#define ALIAS_TYPE_MAX		(__ALIAS_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ALIAS_H */
