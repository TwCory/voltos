#ifndef _ROUTER_ISIS_H_
#define _ROUTER_ISIS_H_

#include <voltos/if.h>
#include <voltos/isis.h>

struct isis {

};

struct isis_adjacency {
	struct isis *isis;
};

struct isis_area {
	struct isis *isis;
};

struct isis_circuit {
	struct isis *isis;
};

struct isis_interface {
	struct isis *isis;
	struct interface *if_ptr;
};

#endif /* _ROUTER_ISIS_H_ */
