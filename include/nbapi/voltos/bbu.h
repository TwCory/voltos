// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bbu.h
 *
 * 	Battery Backup Unit (BBU)
 */

#ifndef _NBAPI_VOLTOS_BBU_H
#define _NBAPI_VOLTOS_BBU_H

#define BBU_CHARGE_LEVEL_MIN			0
#define BBU_CHARGE_LEVEL_MAX			100

typedef unsigned char 				__voltos_bbu_index_t;
typedef unsigned short				__voltos_bbu_version_t;

enum bbu_module_presence {
	BBU_MODULE_PRESENCE_T_UNSPEC		= 0,
	BBU_MODULE_PRESENCE_T_ABSENT		= 1,
	BBU_MODULE_PRESENCE_T_READY		= 2,
	__BBU_MODULE_PRESENCE_T_MAX__
};

enum bbu_battery_state {
	BBU_BATTERY_STATE_T_UNSPEC		= 0,
	BBU_BATTERY_STATE_T_ERROR		= 1,
	BBU_BATTERY_STATE_T_BAD_CELL		= 2,
	BBU_BATTERY_STATE_T_CHARGING		= 3,
	BBU_BATTERY_STATE_T_DISCHARGING		= 4,
	BBU_BATTERY_STATE_T_FULL		= 5,
	BBU_BATTERY_STATE_T_EMPTY		= 6,
	BBU_BATTERY_STATE_T_IDLE		= 7,
	__BBU_BATTERY_STATE_T_MAX__
};

enum bbu_charge_monitor_state {
	BBU_CHARGE_MONITOR_STATE_T_UNSPEC	= 0,
	BBU_CHARGE_MONITOR_STATE_T_DISABLED	= 1,
	BBU_CHARGE_MONITOR_STATE_T_ENABLED	= 2,
	__BBU_CHARGE_MONITOR_STATE_T_MAX__
};

enum bbu_class {
	BBU_CLASS_T_UNSPEC			= 0,
	BBU_CLASS_T_LEAD_ACID			= 1,
	BBU_CLASS_T_LITHIUM_ION			= 2,
	BBU_CLASS_T_LITHIUM_POLYMER		= 3,
	__BBU_CLASS_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BBU_H */
