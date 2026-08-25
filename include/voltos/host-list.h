// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/host_list.h
 *
 */

#ifndef _VOLTOS_HOST_LIST_H
#define _VOLTOS_HOST_LIST_H

#include <nbapi/voltos/host-list.h>

struct host_list {
	const char 			name[HOST_LIST_NAME_SIZE];
};

#endif /* _VOLTOS_HOST_LIST_H */
