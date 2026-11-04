// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/hypervisor.h
 *
 */

#ifndef _VOLTOS_HYPERVISOR_H
#define _VOLTOS_HYPERVISOR_H

enum hypervisor_type {
	HYPERVISOR_TYPE_T_UNSPEC	= 0,
	HYPERVISOR_TYPE_T_CITRIX	= 1,
	HYPERVISOR_TYPE_T_HYPERV	= 2,
	HYPERVISOR_TYPE_T_KVM		= 3,
	HYPERVISOR_TYPE_T_VMWARE	= 4,
	__HYPERVISOR_TYPE_T_MAX__
};

#endif /* _VOLTOS_HYPERVISOR_H */
