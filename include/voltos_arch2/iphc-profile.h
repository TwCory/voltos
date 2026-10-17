// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/iphc-profile.h
 *
 * 	IP Header Compression (IPHC) Profiles
 */

#ifndef _VOLTOS_IPHC_PROFILE_H
#define _VOLTOS_IPHC_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/iphc-profile.h>

struct iphc_profile {
	const char 			name[IPHC_PROFILE_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_IPHC_PROFILE_H */
