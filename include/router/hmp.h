// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hmp.h
 *
 */

#ifndef _ROUTER_HMP_H
#define _ROUTER_HMP_H

#include <voltos/hmp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct hmp_interface {
	struct interface 		*interface;
};

struct hmp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_HMP_H */
