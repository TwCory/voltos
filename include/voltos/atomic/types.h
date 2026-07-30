#ifndef _VOLTOS_ATOMIC_TYPES_H
#define _VOLTOS_ATOMIC_TYPES_H

#include <voltos/types.h>

#ifndef __atomic__
#define __atomic__		_Atomic
#endif /* __atomic__ */

typedef struct {
	__atomic__ __s32	counter;
} atomic_t;

typedef struct {
	__atomic__ __s64	counter;
} atomic64_t;

#endif /* _VOLTOS_ATOMIC_TYPES_H */
