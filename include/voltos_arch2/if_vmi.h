// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_vmi.h
 *
 * 	Virtual Multipoint Interfaces (VMI)
 */

#ifndef _VOLTOS_IF_VMI_H
#define _VOLTOS_IF_VMI_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_vmi.h>

struct vmi_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_VMI_H */
