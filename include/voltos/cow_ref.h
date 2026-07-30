// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cow_ref.h
 *
 */

#ifndef _VOLTOS_COW_REF_H
#define _VOLTOS_COW_REF_H

#include <voltos/atomic.h>

typedef struct {
	union {
		atomic32_t refcnt32;
		atomic64_t refcnt64;
	};
} cow_ref_t;

#endif /* _VOLTOS_COW_REF_H */
