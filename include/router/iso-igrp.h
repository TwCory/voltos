#ifndef _ROUTER_ISO_IGRP_H_
#define _ROUTER_ISO_IGRP_H_

#include <voltos/if.h>
#include <voltos/iso-igrp.h>

struct iso_igrp {

};

struct iso_igrp_interface {
	struct iso_igrp *iso_igrp;
	struct interface *if_ptr;
};

#endif /* _ROUTER_ISO_IGRP_H_ */
