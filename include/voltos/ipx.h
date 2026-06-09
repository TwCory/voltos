#ifndef VOLTOS_IPX_H
#define VOLTOS_IPX_H

#include <voltos/idb.h>
#include <voltos/types.h>
#include <net/protocol.h>
#include <nbapi/voltos/ipx.h>

struct ipx {
	struct protocol 	*protocol;

	bool 			router;
};

struct ipx_interface {
	struct ipx 		*ipx;
	struct idb 		*idb;
};

#endif /* VOLTOS_IPX_H */
