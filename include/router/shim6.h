// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/shim6.h
 *
 *	Site Multihoming by IPv6 Intermediation (Shim6)
 */

#ifndef _ROUTER_SHIM6_H
#define _ROUTER_SHIM6_H

struct shim6_interface {
	struct interface 		*interface;
};

extern void shim6_interface_init(void);

extern void shim6_error_send();
extern void shim6_error_recv();

extern void shim6_i1_send();
extern void shim6_i1_recv();

extern void shim6_i2_send();
extern void shim6_i2_recv();

extern void shim6_i2bis_send();
extern void shim6_i2bis_recv();

extern void shim6_keepalive_send();
extern void shim6_keepalive_recv();

extern void shim6_probe_send();
extern void shim6_probe_recv();

extern void shim6_r1_send();
extern void shim6_r1_recv();

extern void shim6_r2_send();
extern void shim6_r2_recv();

extern void shim6_r2bis_send();
extern void shim6_r2bis_recv();

extern void shim6_update_ack_send();
extern void shim6_update_ack_recv();

extern void shim6_update_request_send();
extern void shim6_update_request_recv();

#endif /* _ROUTER_SHIM6_H */
