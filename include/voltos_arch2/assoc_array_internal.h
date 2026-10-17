// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/assoc_array_internal.h
 *
 * 	Generic Associative Arrays
 */

#ifndef _VOLTOS_ASSOC_ARRAY_INTERNAL_H
#define _VOLTOS_ASSOC_ARRAY_INTERNAL_H

#include <voltos/assoc_array.h>

#define ASSOC_ARRAY_FAN_OUT			16
#define ASSOC_ARRAY_FAN_MASK			(ASSOC_ARRAY_FAN_OUT - 1)
#define ASSOC_ARRAY_LEVEL_STEP
#define ASSOC_ARRAY_LEVEL_STEP_MASK
#define ASSOC_ARRAY_KEY_CHUNK_MASK
#define ASSOC_ARRAY_KEY_CHUNK_SHIFT

struct assoc_array_ptr;

struct assoc_array_node {

};

struct assoc_array_shortcut {

};

struct assoc_array_edit {

};

#endif /* _VOLTOS_ASSOC_ARRAY_INTERNAL_H */
