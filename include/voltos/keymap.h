#ifndef _VOLTOS_KEYMAP_H_
#define _VOLTOS_KEYMAP_H_

#include <voltos/refcount.h>
#include <nbapi/voltos/keymap.h>

struct keymap {
	refcount_t ref_count;
};

#endif /* _VOLTOS_KEYMAP_H_ */
