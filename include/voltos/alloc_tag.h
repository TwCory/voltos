#ifndef _VOLTOS_ALLOC_TAG_H_
#define _VOLTOS_ALLOC_TAG_H_

#include <voltos/codetag.h>
#include <voltos/percpu.h>
#include <voltos/types.h>

struct alloc_tag_counters {
	u64 					bytes;
	u64 					calls;
};

struct alloc_tag {
	struct codetag 				ct;
	struct alloc_tag_counters __percpu 	*counters;
} __attribute__ ((aligned(8)));

struct alloc_tag_internal_ctx {
	struct alloc_tag 			*first_tag;
	unsigned long 				count;
};

struct alloc_tag_module_ctx {
	union {
		unsigned long 			first_addr;
		struct alloc_tag 		*first_tag;
	};

	unsigned long 				last_addr;
	unsigned long 				size;
};

struct codetag_bytes {
	struct codetag 				*ct;
	s64 					bytes;
};

#endif /* _VOLTOS_ALLOC_TAG_H_ */
