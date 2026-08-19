// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/u64_stats_sync.h
 *
 */

#ifndef _VOLTOS_U64_STATS_SYNC_H
#define _VOLTOS_U64_STATS_SYNC_H

#include <voltos/seqlock.h>
#include <voltos/string.h>
#include <voltos/types.h>

struct u64_stats_sync {

};

typedef struct {
	u64 value;
} u64_stats_t;

#endif /* _VOLTOS_U64_STATS_SYNC_H */
