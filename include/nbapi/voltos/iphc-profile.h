// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/iphc-profile.h
 *
 *	IP Header Compression (IPHC) Profile
 */

#ifndef _NBAPI_VOLTOS_IPHC_PROFILE_H
#define _NBAPI_VOLTOS_IPHC_PROFILE_H

#define IPHC_PROFILE_NAME_SIZE			32

enum iphc_profile_type {
	IPHC_PROFILE_TYPE_T_UNSPEC		= 0,
	IPHC_PROFILE_TYPE_T_IETF		= 1,
	IPHC_PROFILE_TYPE_T_VAN_JACOBSON	= 2,
	__IPHC_PROFILE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IPHC_PROFILE_H */
