#ifndef VOLTOS_DECNET_H
#define VOLTOS_DECNET_H

#include <voltos/idb.h>
#include <net/protocol.h>
#include <nbapi/voltos/decnet.h>

struct decnet {
	struct protocol 	*protocol;
};

struct decnet_interface {
	struct decnet 		*decnet;
	struct idb 		*idb;
};

#endif /* VOLTOS_DECNET_H */
