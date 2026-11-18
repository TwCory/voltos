// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/resource_ext.h
 *
 */

#ifndef _VOLTOS_RESOURCE_EXT_H
#define _VOLTOS_RESOURCE_EXT_H

struct resource_window {
	struct resource 	resource;
	resource_size_t 	offset;
};

struct resource_entry {
	struct list_head 	node;
	struct resource		*resource;
	resource_size_t		offset;
	struct resource 	__resource;
};

#endif /* _VOLTOS_RESOURCE_EXT_H */
