// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/assoc_array.h
 *
 * 	Generic Associative Arrays
 */

#ifndef _VOLTOS_ASSOC_ARRAY_H
#define _VOLTOS_ASSOC_ARRAY_H

#include <voltos/types.h>

struct assoc_array_edit;
struct assoc_array_ptr;

struct assoc_array {
	struct assoc_array_ptr 			*root;
	unsigned long 				nr_leaves_on_tree;
};

struct assoc_array_ops {
	unsigned long 				(*get_key_chunk)(const void *index_key, int level);

	unsigned long 				(*get_object_key_chunk)(const void *object, int level);

	bool 					(*compare_object)(const void *object, const void *index_key);

	int 					(*diff_objects)(const void *object, const void *index_key);

	void 					(*free_object)(void *object);
};



#endif /* _VOLTOS_ASSOC_ARRAY_H */
