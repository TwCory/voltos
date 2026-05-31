#ifndef _VOLTOS_SPINLOCK_TYPES_RAW_H_
#define _VOLTOS_SPINLOCK_TYPES_RAW_H_

#include <voltos/spinlock_types_up.h>
#include <voltos/types.h>

typedef struct {
	raw_spinlock_t 	raw_lock;
	unsigned int 	magic;
} raw_spinlock_t;

#endif /* _VOLTOS_SPINLOCK_TYPES_RAW_H_ */
