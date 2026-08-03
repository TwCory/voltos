// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if.h
 *
 */

#ifndef _VOLTOS_IF_H
#define _VOLTOS_IF_H

#include <voltos/types.h>
#include <nbapi/voltos/if.h>

struct interface_conf {

};

struct interface {
	__voltos_if_index_t 			if_index;
	__voltos_if_flags_t 			if_flags;
	enum if_class 				if_class;

};

#endif /* _VOLTOS_IF_H */
