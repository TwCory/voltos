// SPDX-License-Identifier: BSD-3-Clause

#ifndef _RIP_ROUTER_H_
#define _RIP_ROUTER_H_

#include <voltos/rip.h>
#include <voltos/vrf.h>

struct rip {

};

extern int rip_create_sock(struct vrf *vrf);

#endif /* _RIP_ROUTER_H_ */