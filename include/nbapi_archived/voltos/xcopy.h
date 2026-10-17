// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/xcopy.h
 *
 */

#ifndef _NBAPI_VOLTOS_XCOPY_H
#define _NBAPI_VOLTOS_XCOPY_H

#include <voltos/types.h>

#define XCOPY_ERROR_NONE			0
#define XCOPY_ERROR_INVALID_FORMAT		1
#define XCOPY_ERROR_INVALID_INPUT		2
#define XCOPY_ERROR_HOST_NOT_REACHABLE		3
#define XCOPY_ERROR_UTILITY_FAILED		4
#define XCOPY_ERROR_TIMEOUT			5
#define XCOPY_ERROR_UNKNOWN			6

enum xcopy_state {
	XCOPY_STATE_T_INIT			= 1,
	XCOPY_STATE_T_START			= 2,
	XCOPY_STATE_T_IN_PROGRESS		= 3,
	XCOPY_STATE_T_SUCCESS			= 4,
	XCOPY_STATE_T_FAILED			= 5,
	__XCOPY_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_XCOPY_H */
