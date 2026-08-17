// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pcep.h
 *
 */

#ifndef _ROUTER_PCEP_H
#define _ROUTER_PCEP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct pcep_protocol;

struct pcep_interface {
	struct pcep_protocol 		*pcep;
	struct interface 		*interface;
};

struct pcep_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_PCEP_H */
