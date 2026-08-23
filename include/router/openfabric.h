// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/openfabric.h
 *
 */

#ifndef _ROUTER_OPENFABRIC_H
#define _ROUTER_OPENFABRIC_H

struct openfabric_protocol;

struct openfabric_interface {
	struct openfabric_protocol 	*openfabric;

};

struct openfabric_protocol {

};

struct openfabric_route {
	struct openfabric_protocol 	*openfabric;

};

struct openfabric_router {
	struct openfabric_protocol 	*openfabric;

};

#endif /* _ROUTER_OPENFABRIC_H */
