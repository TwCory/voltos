#ifndef _VOLTOS_POOL_H_
#define _VOLTOS_POOL_H_

#include <voltos/spinlock.h>

typedef void * (pool_alloc_t)(int p_mask, void *p_ctx);
typedef void (pool_free_t)(void *p_entry, void *p_ctx);

typedef struct {
	spinlock_t	p_lock;
	int		p_entry_count;
	int		p_entry_current_count;
	void		**p_entries;

	void		*p_ctx;
	pool_alloc_t	*p_alloc;
	pool_free_t	*p_free;
} pool_t;

#endif /* _VOLTOS_POOL_H_ */
