#ifndef _ROUTER_LISP_H_
#define _ROUTER_LISP_H_

#include <voltos/if.h>
#include <voltos/lisp.h>

struct lisp {

};

struct lisp_interface {
	struct lisp *lisp;
	struct interface *if_ptr;
};

#endif /* _ROUTER_LISP_H_ */
