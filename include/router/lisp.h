#ifndef _LISP_ROUTER_H_
#define _LISP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct lisp {
	struct protocol 	*p_ptr;

	bool			enabled
};

#endif /* _LISP_ROUTER_H_ */
