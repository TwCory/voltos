// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/cofp.h
 *
 * 	Coralt Optimized Forwarding Plane (COFP)
 */

#ifndef _NBAPI_VOLTOS_COFP_H
#define _NBAPI_VOLTOS_COFP_H

typedef unsigned int 				__cofp_fixed_id_t;

enum cofp_protocol_type {
	COFP_PROTOCOL_TYPE_UNSPEC		= 0,
	COFP_PROTOCOL_TYPE_IPV4			= 1,
	COFP_PROTOCOL_TYPE_IPV6			= 2,
	__COFP_PROTOCOL_TYPE_MAX__
};

#define COFP_PROTOCOL_TYPE_MAX			(__COFP_PROTOCOL_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_COFP_H */
