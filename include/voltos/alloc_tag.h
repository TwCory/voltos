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
#include <voltos/container_of.h>
#include <voltos/cpumask.h>
#include <voltos/debug.h>
#include <voltos/percpu.h>
#include <voltos/preempt.h>
#include <voltos/smp.h>
#include <voltos/static_key.h>
#include <voltos/types.h>

struct alloc_tag_counters {
	u64 					bytes;
	u64 					calls;
};

struct alloc_tag {
	struct codetag 				code_tag;
	struct alloc_tag_counters __percpu	*counters;
} __aligned(8);

struct alloc_tag_system_section {
	struct alloc_tag 			*first_tag;
	unsigned long 				count;
};

struct alloc_tag_module_section {
	union {
		unsigned long 			start_addr;
		struct alloc_tag 		*first_tag;
	};

	unsigned long 				end_addr;
	unsigned long 				size;
};

#define CODETAG_EMPTY				((void *)1)

#define ALLOC_TAG_SECTION_NAME			"alloc_tags"

struct codetag_bytes {
	struct codetag				*code_tag;
	s64					bytes;
};

#ifndef DEFINE_ALLOC_TAG
#define DEFINE_ALLOC_TAG(alloc_tag_name)
#endif /* DEFINE_ALLOC_TAG */

#define alloc_tag_record(p)

#define alloc_hooks_tag(_tag, _do_alloc)

#define alloc_hooks(_do_alloc)

#endif /* _VOLTOS_ALLOC_TAG_H */
