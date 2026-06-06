#ifndef LISP_ROUTER_H
#define LISP_ROUTER_H

#include <voltos/if.h>
#include <voltos/lisp.h>

struct lisp {

};

struct lisp_interface {
	struct lisp 			*lisp;
	struct interface 		*if_ptr;
};

#endif /* LISP_ROUTER_H */
