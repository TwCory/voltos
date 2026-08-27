// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if.h
 *
 * 	Network Interfaces
 */

#ifndef _VOLTOS_IF_H
#define _VOLTOS_IF_H

#include <voltos/types.h>
#include <nbapi/voltos/if.h>

struct interface {
	__voltos_if_index_t 			if_index;
	__voltos_if_flags_t 			if_flags;
};

#endif /* _VOLTOS_IF_H */
