#ifndef VOLTOS_CLNS_H
#define VOLTOS_CLNS_H

#include <voltos/idb.h>
#include <voltos/types.h>
#include <net/protocol.h>
#include <nbapi/voltos/clns.h>

struct clns {
	struct protocol 	*protocol;

	bool 			router;
};

struct clns_interface {
	struct clns 		*clns;
	struct idb 		*idb;

	bool 			enable;
};

#endif /* VOLTOS_CLNS_H */
