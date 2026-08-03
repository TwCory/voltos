// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dsr.h
 *
 */

#ifndef _VOLTOS_DSR_H
#define _VOLTOS_DSR_H

#include <nbapi/voltos/dsr.h>

struct dsr_router_conf {
    struct {
        struct {

        } ipv4_unicast;
        struct {

        } ipv6_unicast;
    } address_family;
};

struct dsr_interface_conf {
    bool passive;
};

#endif /* _VOLTOS_DSR_H */
