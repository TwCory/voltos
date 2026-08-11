// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mpls_label.h
 *
 *
 */

#ifndef _NBAPI_VOLTOS_MPLS_LABEL_H
#define _NBAPI_VOLTOS_MPLS_LABEL_H

enum mpls_label_protocol {
    MPLS_LABEL_PROTOCOL_T_UNSPEC    = 0,
    MPLS_LABEL_PROTOCOL_T_LDP       = 1,
    MPLS_LABEL_PROTOCOL_T_RSVP      = 2,
    MPLS_LABEL_PROTOCOL_T_TDP       = 3,
    __MPLS_LABEL_PROTOCOL_T_MAX__
};

#endif /* _NBAPI_VOLTOS_MPLS_LABEL_H */