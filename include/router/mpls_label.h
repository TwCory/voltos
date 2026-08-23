// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mpls_label.h
 *
 */

#ifndef _ROUTER_MPLS_LABEL_H
#define _ROUTER_MPLS_LABEL_H

#include <router/mpls.h>

struct mpls_label_node {
	struct mpls_protocol 		*mpls;
	struct mpls_interface 		*interface;
};

struct mpls_label_table {

};

#endif /* _ROUTER_MPLS_LABEL_H */
