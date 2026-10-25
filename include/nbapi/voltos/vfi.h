// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vfi.h
 *
 * 	Virtual Forwarding Instance (VFI)
 */

#ifndef _NBAPI_VOLTOS_VFI_H
#define _NBAPI_VOLTOS_VFI_H

#define VFI_NAME_SIZE			32

enum vfi_state {
	VFI_STATE_T_UNSPEC		= 0,
	VFI_STATE_T_DOWN		= 1,
	VFI_STATE_T_UP			= 2,
	__VFI_STATE_T_MAX__
};

enum vfi_split_horizon {
	VFI_SPLIT_HORIZON_T_UNSPEC	= 0,
	VFI_SPLIT_HORIZON_T_DISABLED	= 1,
	VFI_SPLIT_HORIZON_T_ENABLED	= 2,
	__VFI_SPLIT_HORIZON_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VFI_H */
