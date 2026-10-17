// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_async.h
 *
 * 	Asynchronous Serial Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_ASYNC_H
#define _NBAPI_VOLTOS_IF_ASYNC_H

enum async_encapsulation_type {
	ASYNC_ENCAPSULATION_TYPE_T_NONE		= 0,
	ASYNC_ENCAPSULATION_TYPE_T_KISS		= 1,
	ASYNC_ENCAPSULATION_TYPE_T_SLIP		= 2,
	ASYNC_ENCAPSULATION_TYPE_T_CSLIP	= 3,
	ASYNC_ENCAPSULATION_TYPE_T_MAX
};

#endif /* _NBAPI_VOLTOS_IF_ASYNC_H */
