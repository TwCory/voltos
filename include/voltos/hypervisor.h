// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/hypervisor.h
 *
 */

#ifndef _VOLTOS_HYPERVISOR_H
#define _VOLTOS_HYPERVISOR_H

enum hypervisor_type {
	HYPERVISOR_TYPE_UNSPEC		= 0,
	HYPERVISOR_TYPE_CITRIX		= 1,
	HYPERVISOR_TYPE_HYPERV		= 2,
	HYPERVISOR_TYPE_KVM		= 3,
	HYPERVISOR_TYPE_VMWARE		= 4,
	__HYPERVISOR_TYPE_MAX__
};

#define HYPERVISOR_TYPE_MAX		(__HYPERVISOR_TYPE_MAX__ - 1)

enum hypervisor_type hypervisor_get(void);

const char *hypervisor_get_name(enum hypervisor_type key);

#endif /* _VOLTOS_HYPERVISOR_H */
