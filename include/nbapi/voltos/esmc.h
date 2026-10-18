// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/esmc.h
 *
 * 	Ethernet Synchronization Message Channel (ESMC)
 */

#ifndef _NBAPI_VOLTOS_ESMC_H
#define _NBAPI_VOLTOS_ESMC_H

enum esmc_transmit_type {
	ESMC_TRANSMIT_TYPE_T_UNSPEC		= 0,
	ESMC_TRANSMIT_TYPE_T_SYNCHRONOUS	= 1,
	ESMC_TRANSMIT_TYPE_T_ASYNCHRONOUS	= 2,
	__ESMC_TRANSMIT_TYPE_T_MAX__
};

enum esmc_port_state {
	ESMC_PORT_STATE_T_UNSPEC		= 0,
	ESMC_PORT_STATE_T_DOWN			= 1,
	ESMC_PORT_STATE_T_UP			= 2,
	__ESMC_PORT_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_ESMC_H */
