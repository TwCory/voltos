// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/alarm_interface.h
 *
 * 	Alarm Interface Card (AIC)
 */

#ifndef _NBAPI_VOLTOS_ALARM_INTERFACE_H
#define _NBAPI_VOLTOS_ALARM_INTERFACE_H

enum aic_card_state {
	AIC_CARD_STATE_T_UNSPEC				= 0,
	AIC_CARD_STATE_T_HARDWARE_DETECTED		= 1,
	AIC_CARD_STATE_T_RUNNING			= 2,
	AIC_CARD_STATE_T_HARDWARE_NOT_PRESENT		= 3,
	AIC_CARD_STATE_T_KEEPALIVE_TIMER_EXPIRED	= 4,
	__AIC_CARD_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_ALARM_INTERFACE_H */
