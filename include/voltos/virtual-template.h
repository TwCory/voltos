// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/virtual-template.h
 *
 */

#ifndef _VOLTOS_VIRTUAL_TEMPLATE_H
#define _VOLTOS_VIRTUAL_TEMPLATE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/virtual-template.h>

struct virtual_template {
	refcount_t refcount;
};

#endif /* _VOLTOS_VIRTUAL_TEMPLATE_H */
