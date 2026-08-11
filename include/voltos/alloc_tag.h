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
	u64 bytes;
	u64 calls;
};

struct alloc_tag {
	struct codetag code_tag;
	struct alloc_tag_counters counters;
} __aligned(8);

#endif /* _VOLTOS_ALLOC_TAG_H */
