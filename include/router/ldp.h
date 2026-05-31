#ifndef _ROUTER_LDP_H_
#define _ROUTER_LDP_H_

#include <voltos/if.h>
#include <voltos/ldp.h>

struct ldp {

};

struct ldp_interface {
	struct ldp *ldp;
	struct interface *if_ptr;
};

#endif /* _ROUTER_LDP_H_ */
