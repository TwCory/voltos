#ifndef VOLTOS_KEYMAP_H
#define VOLTOS_KEYMAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/keymap.h>

struct keymap {
	refcount_t ref_count;
};

#endif /* VOLTOS_KEYMAP_H */
