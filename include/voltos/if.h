// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if.h
 *
 */

#ifndef _VOLTOS_IF_H
#define _VOLTOS_IF_H

#include <net/if.h>
#include <voltos/bitflags.h>
#include <nbapi/voltos/if.h>

typedef __voltos_if_index_t 			if_index_t;
typedef __voltos_if_flags_t __bitflags 		if_flags_t;

struct if_hw_addr {

};

struct if_hw_addr_list {

};

struct if_path {

};

struct if_path_ctx {

};

struct interface {
	if_index_t 				if_index;
	if_flags_t 				if_flags;

	enum if_class_type 			if_type;
	const char 				*if_prefix;
};

#endif /* _VOLTOS_IF_H */
