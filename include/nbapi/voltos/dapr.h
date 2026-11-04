// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/dapr.h
 *
 * 	Dynamic Application Policy Routing (DAPR)
 */

#ifndef _NBAPI_VOLTOS_DAPR_H
#define _NBAPI_VOLTOS_DAPR_H

#define DAPR_INSTANCE_NAME_SIZE			20
#define DAPR_LINK_GROUP_NAME_SIZE		50
#define DAPR_CLASS_NAME_SIZE			64
#define DAPR_AUTH_KEY_SIZE			25

#define DAPR_BORDER_ROUTER_MAX			20

typedef unsigned char 				__voltos_dapr_cseq_t;

enum dapr_interface_mode {
	DAPR_INTERFACE_MODE_T_UNSPEC		= 0,
	DAPR_INTERFACE_MODE_T_INGRESS		= 1,
	DAPR_INTERFACE_MODE_T_EGRESS		= 2,
	__DAPR_INTERFACE_MODE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DAPR_H */
