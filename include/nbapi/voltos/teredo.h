// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/teredo.h
 *
 */

#ifndef _NBAPI_VOLTOS_TEREDO_H
#define _NBAPI_VOLTOS_TEREDO_H

#include <voltos/types.h>

#define TEREDO_PORT				3544

enum teredo_node_type {
	TEREDO_NODE_TYPE_T_UNSPEC		= 0,
	TEREDO_NODE_TYPE_T_CLIENT		= 1,
	TEREDO_NODE_TYPE_T_SERVER		= 2,
	TEREDO_NODE_TYPE_T_RELAY		= 3,
	TEREDO_NODE_TYPE_T_HOST_RELAY		= 4,
	__TEREDO_NODE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_TEREDO_H */
