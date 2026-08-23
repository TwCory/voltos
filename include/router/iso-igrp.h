// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/iso-igrp.h
 *
 */

#ifndef _ROUTER_ISO_IGRP_H
#define _ROUTER_ISO_IGRP_H

struct iso_igrp_protocol;

struct iso_igrp_interface {
	struct iso_igrp_protocol 	*iso_igrp;

};

struct iso_igrp_protocol {

};

struct iso_igrp_route {
	struct iso_igrp_protocol 	*iso_igrp;

};

struct iso_igrp_router {
	struct iso_igrp_protocol 	*iso_igrp;

};

#endif /* _ROUTER_ISO_IGRP_H */
