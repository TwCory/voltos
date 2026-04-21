// SPDX-License-Identifier: BSD-3-Clause

#ifndef _EIGRP_ROUTER_H_
#define _EIGRP_ROUTER_H_

#include <voltos/eigrp.h>
#include <voltos/vrf.h>

struct eigrp {

};

extern int eigrp_create_sock(struct vrf *vrf);

#endif /* _EIGRP_ROUTER_H_ */