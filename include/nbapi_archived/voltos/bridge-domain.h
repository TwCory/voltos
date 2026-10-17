// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bridge-domain.h
 *
 *	Router Bridge Domain and
 *	Service Instance Definitions
 */

#ifndef _NBAPI_VOLTOS_BRIDGE_DOMAIN_H
#define _NBAPI_VOLTOS_BRIDGE_DOMAIN_H

#include <voltos/types.h>

#define BRIDGE_DOMAIN_ID_MIN			1
#define BRIDGE_DOMAIN_ID_MAX			16000

typedef __u16 					__voltos_brd_id_t;

enum bridge_domain_state {
	BRIDGE_DOMAIN_STATE_T_UNSPEC		= 0,
	BRIDGE_DOMAIN_STATE_T_UP		= 1,
	BRIDGE_DOMAIN_STATE_T_DOWN		= 2,
	BRIDGE_DOMAIN_STATE_T_ADMIN_DOWN	= 3,
	__BRIDGE_DOMAIN_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BRIDGE_DOMAIN_H */
