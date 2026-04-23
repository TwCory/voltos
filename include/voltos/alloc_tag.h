// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ALLOC_TAG_H_
#define _VOLTOS_ALLOC_TAG_H_

#include <voltos/types.h>

struct alloc_tag_counters {
    u64 bytes;
    u64 calls;
};

struct alloc_tag {
    struct alloc_tag_counters *counters;
};

#endif /* _VOLTOS_ALLOC_TAG_H_ */