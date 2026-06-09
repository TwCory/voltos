#ifndef VOLTOS_ATALK_H
#define VOLTOS_ATALK_H

#include <voltos/idb.h>
#include <voltos/types.h>
#include <net/protocol.h>
#include <nbapi/voltos/atalk.h>

struct atalk {
	struct protocol 	*protocol;


	bool 			router;
};

struct atalk_interface {
	struct atalk 		*atalk;
	struct idb 		*idb;
};

#endif /* VOLTOS_ATALK_H */
