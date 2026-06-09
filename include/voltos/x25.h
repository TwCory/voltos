#ifndef VOLTOS_X25_H
#define VOLTOS_X25_H

#include <voltos/idb.h>
#include <net/protocol.h>
#include <nbapi/voltos/x25.h>

struct x25 {
	struct protocol 	*protocol;
};

struct x25_interface {
	struct x25 		*x25;
	struct idb 		*idb;
};

#endif /* VOLTOS_X25_H */
