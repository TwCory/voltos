#ifndef _MACHINE_ATOMIC64_H_
#define _MACHINE_ATOMIC64_H_

typedef struct {
    long long __attribute__ ((aligned(sizeof(long long)))) counter;
} atomic64_t;

#define atomic64_init(i)    { (i) }

#endif /* _MACHINE_ATOMIC64_H_ */
