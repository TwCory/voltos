// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ncch.h
 *
 */

#ifndef _NBAPI_VOLTOS_NCCH_H
#define _NBAPI_VOLTOS_NCCH_H

enum ncch_client_state {
	NCCH_CLIENT_STATE_T_UNSPEC		= 0,
	NCCH_CLIENT_STATE_T_CONNECTING		= 1,
	NCCH_CLIENT_STATE_T_CONNECTED		= 2,
	__NCCH_CLIENT_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_NCCH_H */
