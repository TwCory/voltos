// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/zone_security.h
 *
 * 	Zone-Based Firewall
 */

#ifndef _VOLTOS_ZONE_SECURITY_H
#define _VOLTOS_ZONE_SECURITY_H

#include <voltos/refcount.h>
#include <nbapi/voltos/zone_security.h>

struct zone_security {
	refcount_t refcount;
};

#endif /* _VOLTOS_ZONE_SECURITY_H */
