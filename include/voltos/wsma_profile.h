// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/wsma_profile.h
 *
 */

#ifndef _VOLTOS_WSMA_PROFILE_H
#define _VOLTOS_WSMA_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/wsma_profile.h>

struct wsma_profile {
	refcount_t refcount;
};

#endif /* _VOLTOS_WSMA_PROFILE_H */
