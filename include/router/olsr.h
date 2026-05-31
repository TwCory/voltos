#ifndef _ROUTER_OLSR_H_
#define _ROUTER_OLSR_H_

#include <voltos/if.h>
#include <voltos/olsr.h>

struct olsr {

};

struct olsr_interface {
	struct olsr *olsr;
	struct interface *if_ptr;
};

#endif /* _ROUTER_OLSR_H_ */
