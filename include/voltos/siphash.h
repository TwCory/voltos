// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/siphash.h
 *
 * 	SipHash Functions
 */

#ifndef _VOLTOS_SIPHASH_H
#define _VOLTOS_SIPHASH_H

#include <voltos/types.h>

#define SIPHASH_ALIGNMENT		__alignof__(u64)
typedef struct {
	u64 key[2];
} siphash_key_t;

typedef siphash_key_t 			siphash_aligned_key_t __aligned(16);

#endif /* _VOLTOS_SIPHASH_H */
