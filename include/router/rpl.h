#ifndef _ROUTER_RPL_H_
#define _ROUTER_RPL_H_

#include <voltos/if.h>
#include <voltos/rpl.h>

struct rpl {

};

struct rpl_interface {
	struct rpl *rpl;
	struct interface *if_ptr;
};

#endif /* _ROUTER_RPL_H_ */
