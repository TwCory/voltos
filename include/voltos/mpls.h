#ifndef VOLTOS_MPLS_H
#define VOLTOS_MPLS_H

#include <voltos/idb.h>
#include <net/protocol.h>
#include <nbapi/voltos/mpls.h>

struct mpls {
	struct protocol 	*protocol;
};

struct mpls_interface {
	struct mpls 		*mpls;
	struct idb 		*idb;
};

#endif /* VOLTOS_MPLS_H */
