#ifndef _NBAPI_VOLTOS_GNSS_H
#define _NBAPI_VOLTOS_GNSS_H

#include <voltos/types.h>

enum gnss_module_state {
	GNSS_MODULE_STATE_T_UNKNOWN		= 0,
	GNSS_MODULE_STATE_T_ABSENT		= 1,
	GNSS_MODULE_STATE_T_PRESENT		= 2,
	GNSS_MODULE_STATE_T_INVALID		= 3,
	__GNSS_MODULE_STATE_T_MAX__
};

enum gnss_module_lock_state {
	GNSS_MODULE_LOCK_STATE_T_
};

enum gnss_satellite_type {
	GNSS_SATELLITE_TYPE_T_
};

#endif /* _NBAPI_VOLTOS_GNSS_H */
