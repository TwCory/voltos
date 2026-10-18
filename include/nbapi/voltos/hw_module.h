// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/hw_module.h
 *
 * 	Hardware Module
 */

#ifndef _NBAPI_VOLTOS_HW_MODULE_H
#define _NBAPI_VOLTOS_HW_MODULE_H

enum hw_module_type {
	HW_MODULE_TYPE_T_UNSPEC			= 0,
	HW_MODULE_TYPE_T_BAY			= 1,
	HW_MODULE_TYPE_T_SLOT			= 2,
	HW_MODULE_TYPE_T_SUBSLOT		= 3,
	__HW_MODULE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_HW_MODULE_H */
