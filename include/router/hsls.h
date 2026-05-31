#ifndef _ROUTER_HSLS_H_
#define _ROUTER_HSLS_H_

#include <voltos/hsls.h>
#include <voltos/if.h>

struct hsls {

};

struct hsls_interface {
	struct hsls *hsls;
	struct interface *if_ptr;
};

#endif /* _ROUTER_HSLS_H_ */
