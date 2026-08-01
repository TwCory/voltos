// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/zhls.h
 *
 */

#ifndef _VOLTOS_ZHLS_H
#define _VOLTOS_ZHLS_H

#include <nbapi/voltos/zhls.h>

struct zhls_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct zhls_interface_conf {

};

#endif /* _VOLTOS_ZHLS_H */
