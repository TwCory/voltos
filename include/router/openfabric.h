#ifndef _ROUTER_OPENFABRIC_H_
#define _ROUTER_OPENFABRIC_H_

#include <voltos/if.h>
#include <voltos/openfabric.h>

struct openfabric {

};

struct openfabric_interface {
	struct openfabric *openfabric;
	struct interface *if_ptr;
};

#endif /* _ROUTER_OPENFABRIC_H_ */
