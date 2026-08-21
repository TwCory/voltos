// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cache.h
 *
 */

#ifndef _VOLTOS_CACHE_H
#define _VOLTOS_CACHE_H

#include <nbapi/voltos/voltos.h>

#ifndef L1_CACHE_ALIGN
#define L1_CACHE_ALIGN(x)
#endif

#ifndef SMP_CACHE_ALIGN
#define SMP_CACHE_ALIGN(x)
#endif

#ifndef LARGEST_ALIGN
#define LARGEST_ALIGN(x)
#endif

#ifndef __read_mostly
#define __read_mostly
#endif

#ifndef __read_only_after_init
#define __read_only_after_init
#endif

#ifndef __cache_aligned_in_smp
#define __cache_aligned_in_smp
#endif

#ifndef __cache_aligned
#define __cache_aligned
#endif

#ifndef INTERNODE_CACHE_SHIFT
#define INTERNODE_CACHE_SHIFT
#endif

#ifndef __cache_internode_aligned_in_smp
#define __cache_internode_aligned_in_smp
#endif

#ifndef __cache_group_start
#define __cache_group_start(GROUP)
#endif

#ifndef __cache_group_stop
#define __cache_group_stop(GROUP)
#endif

#ifndef __cache_group_start_aligned
#define __cache_group_start_aligned(GROUP, ...)
#endif

#ifndef __cache_group_stop_aligned
#define __cache_group_stop_aligned(GROUP, ...)
#endif

#ifndef CACHE_ASSERT_GROUP_MEMBER
#define CACHE_ASSERT_GROUP_MEMBER(TYPE, GROUP, MEMBER)
#endif

#ifndef CACHE_ASSERT_GROUP_SIZE
#define CACHE_ASSERT_GROUP_SIZE(TYPE, GROUP, SIZE)
#endif

#ifndef CACHE_PADDING
#define CACHE_PADDING(name)
#endif

#endif /* _VOLTOS_CACHE_H */
