#ifndef _ROUTER_ISO_IGRP_H
#define _ROUTER_ISO_IGRP_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/iso-igrp.h>

struct iso_igrp_router_conf {
	bool 				passive_default;
	bool 				shutdown;
};

struct iso_igrp_interface {
	bool 				passive;
};

struct iso_igrp_protocol {
	struct protocol 		*protocol;
};

struct iso_igrp_interface {

};

struct iso_igrp_route {

};

#endif /* _ROUTER_ISO_IGRP_H */
