// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/aal2-profile.h
 *
 */

#ifndef _VOLTOS_AAL2_PROFILE_H
#define _VOLTOS_AAL2_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/aal2-profile.h>

struct aal2_profile {
	refcount_t ref_count;
};

#endif /* _VOLTOS_AAL2_PROFILE_H */
