// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mop.h
 *
 * 	Maintenance Operation Protocol (MOP)
 */

#ifndef _NBAPI_VOLTOS_MOP_H
#define _NBAPI_VOLTOS_MOP_H

#define MOP_RETRANSMIT_TIMER_MIN		1
#define MOP_RETRANSMIT_TIMER_MAX		20
#define MOP_RETRANSMIT_TIMER_DEFAULT		4

#define MOP_RETRIES_MIN				3
#define MOP_RETRIES_MAX				24
#define MOP_RETRIES_DEFAULT			8

enum mop_device_type {
	MOP_DEVICE_TYPE_T_UNSPEC		= 0,
	MOP_DEVICE_TYPE_T_CISCO			= 1,
	MOP_DEVICE_TYPE_T_DS200			= 2,
	__MOP_DEVICE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_MOP_H */
