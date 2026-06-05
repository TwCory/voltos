#ifndef DSR_ROUTER_H
#define DSR_ROUTER_H

#include <voltos/dsr.h>
#include <voltos/if.h>

struct dsr {

};

struct dsr_interface {
	struct dsr *dsr;
	struct interface *if_ptr;
};

#endif /* DSR_ROUTER_H */
