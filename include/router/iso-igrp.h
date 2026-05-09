#ifndef _ISO_IGRP_ROUTER_H_
#define _ISO_IGRP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct iso_igrp {
	struct protocol 	*p_ptr;

	bool 			enabled;
};

struct iso_igrp_interface {
	struct iso_igrp 	*iso_igrp;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _ISO_IGRP_ROUTER_H_ */
