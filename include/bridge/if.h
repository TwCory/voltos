#ifndef _BRIDGE_IF_H
#define _BRIDGE_IF_H

#include <voltos/if.h>

struct br_interface {
	struct interface *if_ptr;
};

#endif /* _BRIDGE_IF_H */
