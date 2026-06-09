#ifndef VOLTOS_DLSW_H
#define VOLTOS_DLSW_H

#include <voltos/idb.h>
#include <net/protocol.h>
#include <nbapi/voltos/dlsw.h>

struct dlsw {
	struct protocol 	*protocol;
};

struct dlsw_interface {
	struct dlsw 		*dlsw;
	struct idb 		*idb;
};

#endif /* VOLTOS_DLSW_H */
