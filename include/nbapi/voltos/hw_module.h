// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/hw_module.h
 *
 * 	Hardware Module
 */

#ifndef _NBAPI_VOLTOS_HW_MODULE_H
#define _NBAPI_VOLTOS_HW_MODULE_H

enum hw_module_type {
	HW_MODULE_TYPE_UNSPEC			= 0,
	HW_MODULE_TYPE_BAY			= 1,
	HW_MODULE_TYPE_SLOT			= 2,
	HW_MODULE_TYPE_SUBSLOT			= 3,
	__HW_MODULE_TYPE_MAX__
};

#define HW_MODULE_TYPE_MAX			(__HW_MODULE_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_HW_MODULE_H */
