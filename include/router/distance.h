// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ROUTER_DISTANCE_H_
#define _ROUTER_DISTANCE_H_

#include <voltos/types.h>

#define ROUTE_DISTANCE_MIN                          0
#define ROUTE_DISTANCE_MAX                          255

#define CONNECTED_DISTANCE_DEFAULT                  0
#define KERNEL_DISTANCE_DEFAULT                     0
#define LOCAL_DISTANCE_DEFAULT                      0
#define STATIC_DISTANCE_DEFAULT                     1
#define EBGP_DISTANCE_DEFAULT                       20
#define EIGRP_DISTANCE_DEFAULT                      90
#define BABEL_DISTANCE_DEFAULT                      100
#define IGRP_DISTANCE_DEFAULT                       100
#define OSPF_DISTANCE_DEFAULT                       110
#define OSPFV3_DISTANCE_DEFAULT                     110
#define ISIS_DISTANCE_DEFAULT                       115
#define OPENFABRIC_DISTANCE_DEFAULT                 115
#define RIP_DISTANCE_DEFAULT                        120
#define RIPNG_DISTANCE_DEFAULT                      120
#define EGP_DISTANCE_DEFAULT                        140
#define EIGRP_EXTERNAL_DISTANCE_DEFAULT             170
#define IBGP_DISTANCE_DEFAULT                       200
#define NHRP_DISTANCE_DEFAULT                       250
#define DHCP_DISTANCE_DEFAULT                       254

typedef u8                                          distance_t;

#endif /* _ROUTER_DISTANCE_H_ */