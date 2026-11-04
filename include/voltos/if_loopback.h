// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_loopback.h
 *
 */

#ifndef _VOLTOS_IF_LOOPBACK_H
#define _VOLTOS_IF_LOOPBACK_H

#include <voltos/if.h>
#include <nbapi/voltos/if_loopback.h>

struct loopback_interface {
	struct interface *ifp;
};

#endif /* _VOLTOS_IF_LOOPBACK_H */
