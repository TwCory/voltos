// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/control-plane.h
 *
 * 	Control Plane Services
 */

#ifndef _NBAPI_VOLTOS_CONTROL_PLANE_H
#define _NBAPI_VOLTOS_CONTROL_PLANE_H

enum control_traffic_type {
	CONTROL_TRAFFIC_TYPE_T_UNSPEC		= 0,
	CONTROL_TRAFFIC_TYPE_T_COFP_EXCEPTION	= 1,
	CONTROL_TRAFFIC_TYPE_T_HOST		= 2,
	CONTROL_TRAFFIC_TYPE_T_TRANSIT		= 3,
	__CONTROL_TRAFFIC_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CONTROL_PLANE_H */
