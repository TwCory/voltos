#ifndef ISO_IGRP_ROUTER_H
#define ISO_IGRP_ROUTER_H

#include <voltos/dual.h>
#include <voltos/if.h>
#include <voltos/iso-igrp.h>
#include <voltos/net_router.h>
#include <voltos/route.h>

struct iso_igrp {
	struct router 			*router;
};

struct iso_igrp_interface {
	struct iso_igrp 		*iso_igrp;
	struct interface 		*if_ptr;
};

struct iso_igrp_route {
	struct iso_igrp 		*iso_igrp;
	struct route 			*route_ptr;
};

#endif /* ISO_IGRP_ROUTER_H */
