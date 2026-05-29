#ifndef _MACHINE_ATOMIC_H_
#define _MACHINE_ATOMIC_H_

typedef struct {
    int __attribute__ ((aligned(sizeof(int)))) counter;
} atomic_t;

#define atomic_init(i)  { (i) }

#endif /* _MACHINE_ATOMIC_H_ */
