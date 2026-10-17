// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/memory/tcam.h
 *
 */

#ifndef _NBAPI_VOLTOS_MEMORY_TCAM_H
#define _NBAPI_VOLTOS_MEMORY_TCAM_H

#include <voltos/types.h>

#define TCAM_ASIC_ID_MIN		0
#define TCAM_ASIC_ID_MAX		8

#define TCAM_ENTRY_NAME_SIZE		64

struct tcam_stats {
	__u32 				hash_entries_max;
	__u32 				tcam_entries_max;
	__u32 				hash_entries_used;
	__u32 				tcam_entries_used;
};

#endif /* _NBAPI_VOLTOS_MEMORY_TCAM_H */
