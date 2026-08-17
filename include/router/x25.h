// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/x25.h
 *
 */

#ifndef _ROUTER_X25_H
#define _ROUTER_X25_H

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/x25.h>
#include <net/protocol.h>

struct x25_protocol;

struct x25_interface {
	struct x25_protocol 		*x25;
	struct interface 		*interface;
};

struct x25_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_X25_H */
