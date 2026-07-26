#ifndef _VOLTOS_MBUF_POOL_H
#define _VOLTOS_MBUF_POOL_H

#include <voltos/mbuf.h>
#include <voltos/ptr_ring.h>

struct mbuf_pool {
	struct ptr_ring ring;
};

#endif /* _VOLTOS_MBUF_POOL_H */
