#ifndef _ROUTER_ISO_IGRP_H
#define _ROUTER_ISO_IGRP_H

#include <voltos/iso-igrp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>

struct iso_igrp_protocol {

};

struct iso_igrp_interface {

};

struct iso_igrp_route {
	struct prefix prefix;
};

#endif /* _ROUTER_ISO_IGRP_H */
