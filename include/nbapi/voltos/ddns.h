// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ddns.h
 *
 * 	Dynamic DNS (DDNS) Client
 */

#ifndef _NBAPI_VOLTOS_DDNS_H
#define _NBAPI_VOLTOS_DDNS_H

#define DDNS_UPDATE_METHOD_NAME_SIZE		32

enum ddns_update_method {
	DDNS_UPDATE_METHOD_T_UNSPEC		= 0,
	DDNS_UPDATE_METHOD_T_HTTP		= 1,
	__DDNS_UPDATE_METHOD_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DDNS_H */
