// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bfd-template.h
 *
 */

#ifndef _VOLTOS_BFD_TEMPLATE_H
#define _VOLTOS_BFD_TEMPLATE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/bfd-template.h>

struct bfd_template {
	const char 			name[BFD_TEMPLATE_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_BFD_TEMPLATE_H */
