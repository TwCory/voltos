// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bfd-template.h
 *
 * 	Bidirectional Forwarding Detection (BFD) Template
 */

#ifndef _NBAPI_VOLTOS_BFD_TEMPLATE_H
#define _NBAPI_VOLTOS_BFD_TEMPLATE_H

#define BFD_TEMPLATE_NAME_SIZE			32

enum bfd_template_type {
	BFD_TEMPLATE_TYPE_T_UNSPEC		= 0,
	BFD_TEMPLATE_TYPE_T_SINGLE_HOP		= 1,
	BFD_TEMPLATE_TYPE_T_MULTI_HOP		= 2,
	__BFD_TEMPLATE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BFD_TEMPLATE_H */
