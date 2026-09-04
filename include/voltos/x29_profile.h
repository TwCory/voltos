// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/x29_profile.h
 *
 */

#ifndef _VOLTOS_X29_PROFILE_H
#define _VOLTOS_X29_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/x29_profile.h>

struct x29_profile {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_X29_PROFILE_H */
