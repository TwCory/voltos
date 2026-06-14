#ifndef VOLTOS_ASSOC_ARRAY_H
#define VOLTOS_ASSOC_ARRAY_H

#include <voltos/types.h>

struct assoc_array_ptr;

struct assoc_array {
	struct assoc_array_ptr 		*root;
	unsigned long 			leaf_count;
};

struct assoc_array_ops {
	unsigned long (*get_key_chunk) (const void *index_key, int level);
	unsigned long (*get_object_key_chunk) (const void *object, int level);
	bool (*cmp_object)(const void *object, const void *index_key);
	int (*diff_objects)(const void *object, const void *index_key);
	void (*free_object)(void *object);
};

struct assoc_array_edit;

#endif /* VOLTOS_ASSOC_ARRAY_H */
