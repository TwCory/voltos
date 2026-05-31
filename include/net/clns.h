#ifndef _NET_CLNS_H_
#define _NET_CLNS_H_

#include <voltos/clns.h>

#include <net/protocol.h>

struct clns {
	struct protocol *p_ptr;
};

struct clns_interface {

};

#endif /* _NET_CLNS_H_ */
