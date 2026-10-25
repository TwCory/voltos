// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ncia.h
 *
 * 	IBM Native Client Interface Architecture (NCIA)
 */

#ifndef _NBAPI_VOLTOS_NCIA_H
#define _NBAPI_VOLTOS_NCIA_H

#define NCIA_SERVER_ID			1

enum ncia_cmd {
	NCIA_CMD_T_UNSPEC		= 0,
	NCIA_CMD_T_START		= 1,
	NCIA_CMD_T_STOP			= 2,
	__NCIA_CMD_T_MAX__
};

enum ncia_traffic_type {
	NCIA_TRAFFIC_TYPE_T_UNSPEC	= 0,
	NCIA_TRAFFIC_TYPE_T_SNA		= 1,
	NCIA_TRAFFIC_TYPE_T_ALL		= 2,
	__NCIA_TRAFFIC_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_NCIA_H */
