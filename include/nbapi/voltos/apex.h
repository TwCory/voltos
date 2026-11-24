// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/apex.h
 *
 * 	Applicable Exchange Core (APEX)
 */

#ifndef _NBAPI_VOLTOS_APEX_H
#define _NBAPI_VOLTOS_APEX_H

enum {
	APEX_OPTION_T_UNSPEC		= 0,
#define APEX_OPTION_UNSPEC		APEX_OPTION_T_UNSPEC
	APEX_OPTION_T_AttachOverride	= 1,
#define APEX_OPTION_AttachOverride	APEX_OPTION_T_AttachOverride
	APEX_OPTION_T_DataHopping	= 2,
#define APEX_OPTION_DataHopping		APEX_OPTION_T_DataHopping
	APEX_OPTION_T_DataTiming	= 3,
#define APEX_OPTION_DataTiming		APEX_OPTION_T_DataTiming
	APEX_OPTION_T_Hold4Endpoint	= 4,
#define APEX_OPTION_Hold4Endpoint	APEX_OPTION_T_Hold4Endpoint
	APEX_OPTION_T_StatusRequest	= 5,
#define APEX_OPTION_StatusRequest	APEX_OPTION_T_StatusRequest
	__APEX_OPTION_T_MAX__
};

#define APEX_OPTION_MAX			(__APEX_OPTION_T_MAX__ - 1)

enum {
	APEX_SERVICE_T_UNSPEC		= 0,
#define APEX_SERVICE_UNSPEC		APEX_SERVICE_T_UNSPEC
	APEX_SERVICE_T_ACCESS		= 1,
#define APEX_SERVICE_ACCESS		APEX_SERVICE_T_ACCESS
	APEX_SERVICE_T_PRESENCE		= 2,
#define APEX_SERVICE_PRESENCE		APEX_SERVICE_T_PRESENCE
	APEX_SERVICE_T_REPORT		= 3,
#define APEX_SERVICE_REPORT		APEX_SERVICE_T_REPORT
	__APEX_SERVICE_T_MAX__
};

#define APEX_SERVICE_MAX		(__APEX_SERVICE_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_APEX_H */
