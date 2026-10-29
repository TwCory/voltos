// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/alloc_tag.h
 *
 * 	Memory Allocation Tagging
 */

#ifndef _VOLTOS_ALLOC_TAG_H
#define _VOLTOS_ALLOC_TAG_H

#include <voltos/codetag.h>
#include <voltos/compiler.h>
#include <voltos/percpu.h>
#include <voltos/types.h>

struct alloc_tag_counters {
	u64 						bytes;
	u64 						calls;
};

#define ALLOC_TAG_ALIGNMENT				8

struct alloc_tag {
	struct codetag 					ct;
	struct alloc_tag_counters __voltos_percpu 	*counters;
} __aligned(ALLOC_TAG_ALIGNMENT);

struct alloc_tag_system_section {
	struct alloc_tag 				*first_tag;
	unsigned long 					count;
};

struct alloc_tag_module_section {
	union {
		unsigned long 				start_addr;
		struct alloc_tag 			*first_tag;
	};
	unsigned long 					end_addr;
	unsigned long 					size;
};

struct codetag_bytes {
	struct codetag 					*ct;
	i64 						bytes;
};

#ifndef DEFINE_ALLOC_TAG
#define DEFINE_ALLOC_TAG(_alloc_tag)
#endif /* DEFINE_ALLOC_TAG */

#define alloc_tag_record(p)

#define alloc_hooks_tag(_tag, _do_alloc)

#define alloc_hooks(_do_alloc)

#endif /* _VOLTOS_ALLOC_TAG_H */
