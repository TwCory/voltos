// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/virtual-template.h
 *
 * 	Virtual Template
 */

#ifndef _VOLTOS_VIRTUAL_TEMPLATE_H
#define _VOLTOS_VIRTUAL_TEMPLATE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/virtual-template.h>

struct virtual_template {
	const char 				name[VIRTUAL_TEMPLATE_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VIRTUAL_TEMPLATE_H */
