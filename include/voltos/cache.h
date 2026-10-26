// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cache.h
 *
 */

#ifndef _VOLTOS_CACHE_H
#define _VOLTOS_CACHE_H

#define L1_CACHE_SHIFT						5
#define L1_CACHE_BYTES						(1 << L1_CACHE_SHIFT)
#define SMP_CACHE_BYTES						L1_CACHE_BYTES

#ifndef L1_CACHE_ALIGN
#define L1_CACHE_ALIGN(x)
#endif /* L1_CACHE_ALIGN */

#ifndef SMP_CACHE_ALIGN
#define SMP_CACHE_ALIGN(x)
#endif /* SMP_CACHE_ALIGN */

#ifndef __LARGEST_ALIGN
#define __LARGEST_ALIGN
#endif /* __LARGEST_ALIGN */

#ifndef LARGEST_ALIGN
#define LARGEST_ALIGN(x)
#endif /* LARGEST_ALIGN */

#ifndef __read_mostly
#define __read_mostly
#endif /* __read_mostly */

#ifndef __read_only_post_init
#define __read_only_post_init
#endif /* __read_only_post_init */

#ifndef ____cache_aligned
#define ____cache_aligned
#endif /* ____cache_aligned */

#ifndef ____cache_aligned_in_smp
#define ____cache_aligned_in_smp
#endif /* ____cache_aligned_in_smp */

#ifndef __cache_aligned
#define __cache_aligned
#endif /* __cache_aligned */

#ifndef __cache_aligned_in_smp
#define __cache_aligned_in_smp
#endif /* __cache_aligned_in_smp */

#ifndef INTERNODE_CACHE_SHIFT
#define INTERNODE_CACHE_SHIFT					L1_CACHE_SHIFT
#endif /* INTERNODE_CACHE_SHIFT */

#ifndef ____cache_internode_aligned_in_smp
#define ____cache_internode_aligned_in_smp
#endif /* ____cache_internode_aligned_in_smp */

#ifndef cache_line_size
#define cache_line_size()					L1_CACHE_BYTES
#endif /* cache_line_size */

#ifndef __cache_group_head
#define __cache_group_head(GROUP)				\
	unsigned char __cache_group_head__##GROUP[0]
#endif /* __cache_group_head */

#ifndef __cache_group_tail
#define __cache_group_tail(GROUP)				\
	unsigned char __cache_group_tail__##GROUP[0]
#endif /* __cache_group_tail */

#ifndef __cache_group_aligned_head
#define __cache_group_aligned_head(GROUP, ...)
#endif /* __cache_group_aligned_head */

#ifndef __cache_group_aligned_tail
#define __cache_group_aligned_tail(GROUP, ...)
#endif /* __cache_group_aligned_tail */

#ifndef CACHE_ASSERT_GROUP_MEMBER
#define CACHE_ASSERT_GROUP_MEMBER(TYPE, GROUP, MEMBER)
#endif /* CACHE_ASSERT_GROUP_MEMBER */

#ifndef CACHE_ASSERT_GROUP_SIZE
#define CACHE_ASSERT_GROUP_SIZE(TYPE, GROUP, SIZE)
#endif /* CACHE_ASSERT_GROUP_SIZE */

struct cache_padding {
	char x[0];
} ____cache_internode_aligned_in_smp;

#ifndef CACHE_PADDING
#define CACHE_PADDING(name)					\
	struct cache_padding name
#endif /* CACHE_PADDING */

#endif /* _VOLTOS_CACHE_H */
