// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bootp.h
 *
 *	Bootstrap Protocol (BOOTP)
 */

#ifndef _ROUTER_BOOTP_H
#define _ROUTER_BOOTP_H

struct bootp_client {

};

struct bootp_interface {
	struct interface 		*interface;
};

struct bootp_server {

};

extern void bootp_client_init(void);
extern void bootp_interface_init(void);
extern void bootp_server_init(void);

#endif /* _ROUTER_BOOTP_H */
