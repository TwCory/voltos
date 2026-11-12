// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rsvp.h
 *
 *	Resource Reservation Protocol (RSVP)
 */

#ifndef _ROUTER_RSVP_H
#define _ROUTER_RSVP_H

struct rsvp_interface {
	struct interface 		*interface;
};

extern void rsvp_interface_init(void);

extern void rsvp_ack_send();
extern void rsvp_ack_recv();

extern void rsvp_bundle_send();
extern void rsvp_bundle_recv();

extern void rsvp_DSBM_willing_send();
extern void rsvp_DSBM_willing_recv();

extern void rsvp_hello_send();
extern void rsvp_hello_recv();

extern void rsvp_I_AM_DSBM_send();
extern void rsvp_I_AM_DSBM_recv();

extern void rsvp_integrity_challenge_send();
extern void rsvp_integrity_challenge_recv();

extern void rsvp_integrity_response_send();
extern void rsvp_integrity_response_recv();

extern void rsvp_notify_send();
extern void rsvp_notify_recv();

extern void rsvp_path_send();
extern void rsvp_path_recv();

extern void rsvp_pathErr_send();
extern void rsvp_pathErr_recv();

extern void rsvp_pathTear_send();
extern void rsvp_pathTear_recv();

extern void rsvp_recoveryPath_send();
extern void rsvp_recoveryPath_recv();

extern void rsvp_resv_send();
extern void rsvp_resv_recv();

extern void rsvp_resvConf_send();
extern void rsvp_resvConf_recv();

extern void rsvp_resvErr_send();
extern void rsvp_resvErr_recv();

extern void rsvp_resvTear_send();
extern void rsvp_resvTear_recv();

extern void rsvp_resvTearConfirm_send();
extern void rsvp_resvTearConfirm_recv();

extern void rsvp_sRefresh_send();
extern void rsvp_sRefresh_recv();

#endif /* _ROUTER_RSVP_H */
