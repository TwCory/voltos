#ifndef VOLTOS_COMPILER_TYPES_H
#define VOLTOS_COMPILER_TYPES_H

#include <voltos/compiler_attributes.h>

struct f_trace_branch_ctx {
	const char 				*function;
	const char 				*file;
	unsigned 				line;

	union {
		struct {
			unsigned long 		correct;
			unsigned long 		incorrect;
		};
		struct {
			unsigned long 		miss;
			unsigned long 		hit;
		};
		unsigned long 			miss_hit[2];
	};
};

struct f_trace_likely_ctx {
	struct f_trace_branch_ctx 		context;
	unsigned long 				constant;
};

#endif /* VOLTOS_COMPILER_TYPES_H */
