// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/aal2-profile.h
 *
 * 	ATM Adaptation Layer 2 (AAL2) Profile
 */

#ifndef _VOLTOS_AAL2_PROFILE_H
#define _VOLTOS_AAL2_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/aal2-profile.h>

struct aal2_profile {
	const char 			name[AAL2_PROFILE_NAME_SIZE];
	refcount_t 			ref_count;
};

#endif /* _VOLTOS_AAL2_PROFILE_H */
