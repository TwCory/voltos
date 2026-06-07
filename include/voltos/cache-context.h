#ifndef _VOLTOS_CACHE_CONTEXT_H_
#define _VOLTOS_CACHE_CONTEXT_H_

struct cache_ctx {
	unsigned int 		index;
	unsigned int 		level;

	unsigned int 		size;
	unsigned int 		attributes;

	void 			*internal;
};

struct cpu_cache_ctx {
	struct cache_ctx 	*ctx_list;
	unsigned int 		percpu_ctx_slice_size;
	unsigned int 		total_levels;
	unsigned int 		total_leaves;
};

#endif /* _VOLTOS_CACHE_CONTEXT_H_ */
