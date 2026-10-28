// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/x25_profile.h
 *
 */

#ifndef _VOLTOS_X25_PROFILE_H
#define _VOLTOS_X25_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/x25_profile.h>

struct x25_profile {
	const char 				name[X25_PROFILE_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_X25_PROFILE_H */
