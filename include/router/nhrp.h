// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nhrp.h
 *
 * 	Next-Hop Resolution Protocol (NHRP)
 */

#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

extern void nhrp_init(void);

extern int nhrp_resolution_request_send();
extern int nhrp_resolution_reply_send();
extern int nhrp_registration_request_send();
extern int nhrp_registration_reply_send();
extern int nhrp_purge_request_send();
extern int nhrp_purge_reply_send();
extern int nhrp_error_indicator_send();

#endif /* _ROUTER_NHRP_H */
