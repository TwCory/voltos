// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/control-plane.h
 *
 * 	Control Plane Services
 */

#ifndef _NBAPI_VOLTOS_CONTROL_PLANE_H
#define _NBAPI_VOLTOS_CONTROL_PLANE_H

enum control_traffic_type {
	CONTROL_TRAFFIC_TYPE_UNSPEC		= 0,
	CONTROL_TRAFFIC_TYPE_COFP_EXCEPTION	= 1,
	CONTROL_TRAFFIC_TYPE_HOST		= 2,
	CONTROL_TRAFFIC_TYPE_TRANSIT		= 3,
	__CONTROL_TRAFFIC_TYPE_MAX__
};

#define CONTROL_TRAFFIC_TYPE_MAX		(__CONTROL_TRAFFIC_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_CONTROL_PLANE_H */
