// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bridge-domain.h
 *
 */

#ifndef _VOLTOS_BRIDGE_DOMAIN_H
#define _VOLTOS_BRIDGE_DOMAIN_H

#include <voltos/refcount.h>
#include <nbapi/voltos/bridge-domain.h>

struct bridge_domain {
	refcount_t ref_count;
};

#endif /* _VOLTOS_BRIDGE_DOMAIN_H */
