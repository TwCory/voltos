#ifndef _ROUTER_RIPNG_H_
#define _ROUTER_RIPNG_H_

#include <voltos/if.h>
#include <voltos/ripng.h>

struct ripng {

};

struct ripng_interface {
	struct ripng *ripng;
	struct interface *if_ptr;
};

#endif /* _ROUTER_RIPNG_H_ */
