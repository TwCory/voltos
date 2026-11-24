// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/esmc.h
 *
 * 	Ethernet Synchronization Message Channel (ESMC)
 */

#ifndef _NBAPI_VOLTOS_ESMC_H
#define _NBAPI_VOLTOS_ESMC_H

enum esmc_transmit_type {
	ESMC_TRANSMIT_TYPE_UNSPEC		= 0,
	ESMC_TRANSMIT_TYPE_SYNCHRONOUS		= 1,
	ESMC_TRANSMIT_TYPE_ASYNCHRONOUS		= 2,
	__ESMC_TRANSMIT_TYPE_MAX__
};

#define ESMC_TRANSMIT_TYPE_MAX			(__ESMC_TRANSMIT_TYPE_MAX__ - 1)

enum esmc_port_state {
	ESMC_PORT_STATE_UNSPEC			= 0,
	ESMC_PORT_STATE_DOWN			= 1,
	ESMC_PORT_STATE_UP			= 2,
	__ESMC_PORT_STATE_MAX__
};

#define ESMC_PORT_STATE_MAX			(__ESMC_PORT_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ESMC_H */
