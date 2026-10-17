// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/service-routing.h
 *
 */

#ifndef _NBAPI_VOLTOS_SERVICE_ROUTING_H
#define _NBAPI_VOLTOS_SERVICE_ROUTING_H

enum service_routing_type {
	SERVICE_ROUTING_TYPE_T_UNSPEC		= 0,
	SERVICE_ROUTING_TYPE_T_LLMNR		= 1,
	SERVICE_ROUTING_TYPE_T_MDNS		= 2,
	SERVICE_ROUTING_TYPE_T_XMCP		= 3,
	__SERVICE_ROUTING_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_SERVICE_ROUTING_H */
