#ifndef _VOLTOS_DECNET_H_
#define _VOLTOS_DECNET_H_

#include <voltos/if.h>
#include <nbapi/voltos/decnet.h>

struct decnet {

};

struct decnet_interface {
	struct decnet 		*decnet;
	struct interface	*if_ptr;
};

#endif /* _VOLTOS_DECNET_H_ */
