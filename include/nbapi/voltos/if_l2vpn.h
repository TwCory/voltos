// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_l2vpn.h
 *
 * 	Layer 2 VPN Interface
 */

#ifndef _NBAPI_VOLTOS_IF_L2VPN_H
#define _NBAPI_VOLTOS_IF_L2VPN_H

#define PSEUDOWIRE_CLASS_NAME_SIZE			32

enum l2vpn_service_type {
	L2VPN_SERVICE_TYPE_T_INVALID			= 0,
	L2VPN_SERVICE_TYPE_T_VPWS			= 1,
	L2VPN_SERVICE_TYPE_T_VPLS			= 2,
	L2VPN_SERVICE_TYPE_T_TRANSPORT			= 3,
	L2VPN_SERVICE_TYPE_T_BD				= 4,
	L2VPN_SERVICE_TYPE_T_EVPN			= 5,
	__L2VPN_SERVICE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IF_L2VPN_H */
