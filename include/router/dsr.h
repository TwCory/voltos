#ifndef _ROUTER_DSR_H_
#define _ROUTER_DSR_H_

#include <voltos/dsr.h>
#include <voltos/if.h>

struct dsr {

};

struct dsr_interface {
	struct dsr *dsr;
	struct interface *if_ptr;
};

#endif /* _ROUTER_DSR_H_ */
