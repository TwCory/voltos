// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/aal2-profile.h
 *
 * 	ATM Adaptation Layer 2 (AAL2) Profile
 */

#ifndef _NBAPI_VOLTOS_AAL2_PROFILE_H
#define _NBAPI_VOLTOS_AAL2_PROFILE_H

#define AAL2_PROFILE_NAME_SIZE			32

#define AAL2_UUI_MIN				0
#define AAL2_UUI_MAX				100

enum aal2_profile_type {
	AAL2_PROFILE_TYPE_T_UNSPEC		= 0,
	AAL2_PROFILE_TYPE_T_ITU_T		= 1,
	AAL2_PROFILE_TYPE_T_ATMF		= 2,
	AAL2_PROFILE_TYPE_T_CUSTOM		= 3,
	__AAL2_PROFILE_TYPE_T_MAX__
};

enum aal2_coding_type {
	AAL2_CODING_TYPE_T_UNSPEC		= 0,
	AAL2_CODING_TYPE_T_ITU_T		= 1,
	AAL2_CODING_TYPE_T_G711ULAW		= 2,
	AAL2_CODING_TYPE_T_G726R32		= 3,
	AAL2_CODING_TYPE_T_G729AR8		= 4,
	__AAL2_CODING_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_AAL2_PROFILE_H */
