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
	const char 				name[VPDN_TEMPLATE_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VPDN_TEMPLATE_H */
