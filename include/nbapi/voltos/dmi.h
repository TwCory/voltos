// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/dmi.h
 *
 */

#ifndef _NBAPI_VOLTOS_DMI_H
#define _NBAPI_VOLTOS_DMI_H

enum {
	DMI_ACCESS_T_UNSPEC			= 0,
#define DMI_ACCESS_UNSPEC			DMI_ACCESS_T_UNSPEC
	DMI_ACCESS_T_GUEST_SHELL_VRF		= 1,
#define DMI_ACCESS_GUEST_SHELL_VRF		DMI_ACCESS_T_GUEST_SHELL_VRF
	__DMI_ACCESS_T_MAX__
};

#define DMI_ACCESS_MAX				(__DMI_ACCESS_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_DMI_H */
