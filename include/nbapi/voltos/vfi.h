// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vfi.h
 *
 * 	Virtual Forwarding Instance (VFI)
 */

#ifndef _NBAPI_VOLTOS_VFI_H
#define _NBAPI_VOLTOS_VFI_H

#define VFI_NAME_SIZE			(32)

enum vfi_state {
	VFI_STATE_UNSPEC		= 0,
	VFI_STATE_DOWN			= 1,
	VFI_STATE_UP			= 2,
	__VFI_STATE_MAX__
};

#define VFI_STATE_MAX			(__VFI_STATE_MAX__ - 1)

enum vfi_split_horizon {
	VFI_SPLIT_HORIZON_UNSPEC	= 0,
	VFI_SPLIT_HORIZON_DISABLED	= 1,
	VFI_SPLIT_HORIZON_ENABLED	= 2,
	__VFI_SPLIT_HORIZON_MAX__
};

#define VFI_SPLIT_HORIZON_MAX		(__VFI_SPLIT_HORIZON_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_VFI_H */
