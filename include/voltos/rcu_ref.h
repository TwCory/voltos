#ifndef _VOLTOS_RCU_REF_H
#define _VOLTOS_RCU_REF_H

#include <voltos/atomic.h>

typedef struct {
	union {
		atomic32_t refcnt32;
		atomic64_t refcnt64;
	};
} rcu_ref_t;

#endif /* _VOLTOS_RCU_REF_H */
