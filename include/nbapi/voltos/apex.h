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
	APEX_OPTION_T_AttachOverride	= 1,
	APEX_OPTION_T_DataHopping	= 2,
	APEX_OPTION_T_DataTiming	= 3,
	APEX_OPTION_T_Hold4Endpoint	= 4,
	APEX_OPTION_T_StatusRequest	= 5,
	__APEX_OPTION_T_MAX__
};

enum {
	APEX_SERVICE_T_UNSPEC		= 0,
	APEX_SERVICE_T_ACCESS		= 1,
	APEX_SERVICE_T_PRESENCE		= 2,
	APEX_SERVICE_T_REPORT		= 3,
	__APEX_SERVICE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_APEX_H */
