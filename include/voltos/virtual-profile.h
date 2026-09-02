// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/virtual-profile.h
 *
 */

#ifndef _VOLTOS_VIRTUAL_PROFILE_H
#define _VOLTOS_VIRTUAL_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/virtual-profile.h>

struct virtual_profile {
	refcount_t refcount;
};

#endif /* _VOLTOS_VIRTUAL_PROFILE_H */
