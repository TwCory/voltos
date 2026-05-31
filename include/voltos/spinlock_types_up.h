#ifndef _VOLTOS_SPINLOCK_TYPES_UP_H_
#define _VOLTOS_SPINLOCK_TYPES_UP_H_

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#endif /* _VOLTOS_SPINLOCK_TYPES_UP_H_ */
