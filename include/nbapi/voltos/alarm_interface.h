// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/alarm_interface.h
 *
 * 	Alarm Interface Card (AIC)
 */

#ifndef _NBAPI_VOLTOS_ALARM_INTERFACE_H
#define _NBAPI_VOLTOS_ALARM_INTERFACE_H

enum aic_card_state {
	AIC_CARD_STATE_UNSPEC				= 0,
	AIC_CARD_STATE_HARDWARE_DETECTED		= 1,
	AIC_CARD_STATE_RUNNING				= 2,
	AIC_CARD_STATE_HARDWARE_NOT_PRESENT		= 3,
	AIC_CARD_STATE_KEEPALIVE_TIMER_EXPIRED		= 4,
	__AIC_CARD_STATE_MAX__
};

#define AIC_CARD_STATE_MAX				(__AIC_CARD_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ALARM_INTERFACE_H */
