#ifndef VOLTOS_DLMALLOC_H
#define VOLTOS_DLMALLOC_H

#include <malloc.h>
#include <voltos/mman.h>
#include <voltos/types.h>

struct dlmalloc_ctx {
	size_t 					dlm_arena;
	size_t 					dlm_ordblks;
	size_t 					dlm_smblks;
	size_t 					dlm_hblks;
	size_t 					dlm_hblkhd;
	size_t 					dlm_usmblks;
	size_t 					dlm_fsmblks;
	size_t 					dlm_uordblks;
	size_t 					dlm_fordblks;
	size_t 					dlm_keepcost;
};

#define __dlcalloc				calloc
#define __dlfree				free
#define __dlmalloc				malloc
#define __dlmemalign				memalign
#define __dlposix_memalign			memalign
#define __dlrealloc				realloc
#define __dlrealloc_in_place			realloc
#define __dlvalloc				valloc
#define __dlpvalloc				pvalloc
#define __dlmallopt				mallopt
#define __dlmalloc_trim				malloc_trim
#define __dlmalloc_stats			malloc_stats
#define __dlmalloc_usable_size			malloc_usable_size
#define __dlmalloc_footprint		
#define __dlmalloc_max_footprint
#define __dlmalloc_footprint_limit
#define __dlmalloc_set_footprint_limit
#define __dlmalloc_inspect_all
#define __dlindependent_calloc
#define __dlindependent_comalloc
#define __dlbulk_free

#endif /* VOLTOS_DLMALLOC_H */
