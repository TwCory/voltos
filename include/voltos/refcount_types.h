#ifndef _VOLTOS_REFCOUNT_TYPES_H_
#define _VOLTOS_REFCOUNT_TYPES_H_

#include <voltos/atomic.h>

typedef struct {
	atomic_t refs;
} refcount_t;

#endif /* _VOLTOS_REFCOUNT_TYPES_H_ */
