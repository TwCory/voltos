// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vpdn-template.h
 *
 */

#ifndef _VOLTOS_VPDN_TEMPLATE_H
#define _VOLTOS_VPDN_TEMPLATE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vpdn-template.h>

struct vpdn_template {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_VPDN_TEMPLATE_H */
