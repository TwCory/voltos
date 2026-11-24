// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ddns.h
 *
 * 	Dynamic DNS (DDNS) Client
 */

#ifndef _NBAPI_VOLTOS_DDNS_H
#define _NBAPI_VOLTOS_DDNS_H

#define DDNS_UPDATE_METHOD_NAME_SIZE		(32)

enum ddns_update_method {
	DDNS_UPDATE_METHOD_UNSPEC		= 0,
	DDNS_UPDATE_METHOD_Cloudflare		= 1,
	DDNS_UPDATE_METHOD_DuckDNS		= 2,
	DDNS_UPDATE_METHOD_HTTP			= 3,
	DDNS_UPDATE_METHOD_NoIP			= 4,
	__DDNS_UPDATE_METHOD_MAX__
};

#define DDNS_UPDATE_METHOD_MAX			(__DDNS_UPDATE_METHOD_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_DDNS_H */
