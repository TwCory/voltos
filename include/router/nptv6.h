// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nptv6.h
 *
 */

#ifndef _ROUTER_NPTV6_H
#define _ROUTER_NPTV6_H

struct nptv6_interface {
	struct interface 		*interface;
};

struct nptv6_pool {
	const char 			name[NPTV6_POOL_NAME_SIZE];
};

extern void nptv6_interface_init(void);

#endif /* _ROUTER_NPTV6_H */
