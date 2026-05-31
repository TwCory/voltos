#ifndef _ROUTER_ZHLS_H_
#define _ROUTER_ZHLS_H_

#include <voltos/if.h>
#include <voltos/zhls.h>

struct zhls {

};

struct zhls_interface {
	struct zhls *zhls;
	struct interface *if_ptr;
};

#endif /* _ROUTER_ZHLS_H_ */
