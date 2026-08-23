// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idrp.h
 *
 */

#ifndef _ROUTER_IDRP_H
#define _ROUTER_IDRP_H

struct idrp_protocol;

struct idrp_interface {
	struct idrp_protocol 		*idrp;

};

struct idrp_protocol {

};

struct idrp_route {
	struct idrp_protocol 		*idrp;

};

struct idrp_router {
	struct idrp_protocol 		*idrp;

};

#endif /* _ROUTER_IDRP_H */
