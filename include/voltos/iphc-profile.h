// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/iphc-profile.h
 *
 */

#ifndef _VOLTOS_IPHC_PROFILE_H
#define _VOLTOS_IPHC_PROFILE_H

#include <nbapi/voltos/iphc-profile.h>

struct iphc_profile_conf {
	char 				name[IPHC_PROFILE_NAME_SIZE];
};

struct iphc_profile {
	const char 			name[IPHC_PROFILE_NAME_SIZE];
	enum iphc_profile_type 		type;
};

#endif /* _VOLTOS_IPHC_PROFILE_H */
