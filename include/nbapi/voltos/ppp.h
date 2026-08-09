// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/ppp.h
 *
 */

#ifndef _NBAPI_VOLTOS_PPP_H
#define _NBAPI_VOLTOS_PPP_H

#include <voltos/types.h>

enum ppp_auth_type {
	PPP_AUTH_TYPE_T_NONE		= 0,
	PPP_AUTH_TYPE_T_CHAP		= 1,
	PPP_AUTH_TYPE_T_PAP		= 2,
	PPP_AUTH_TYPE_T_MS_CHAP		= 3,
	PPP_AUTH_TYPE_T_MS_CHAP_V2	= 4,
	PPP_AUTH_TYPE_T_EAP		= 5,
	__PPP_AUTH_TYPE_T_MAX__
};

struct ppp_hdr {

};

#endif /* _NBAPI_VOLTOS_PPP_H */
