// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/l2vpn.h
 *
 */

#ifndef _VOLTOS_L2VPN_H
#define _VOLTOS_L2VPN_H

#include <voltos/refcount.h>
#include <nbapi/voltos/l2vpn.h>

struct pseudowire_class {
	const char 			name[PSEUDOWIRE_CLASS_NAME_SIZE];
	refcount_t 			ref_count;
};

#endif /* _VOLTOS_L2VPN_H */
