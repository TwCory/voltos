// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/user-profile.h
 *
 */

#ifndef _VOLTOS_USER_PROFILE_H
#define _VOLTOS_USER_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/user-profile.h>

struct user_profile {
	refcount_t refcount;
};

#endif /* _VOLTOS_USER_PROFILE_H */
