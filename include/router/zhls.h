// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ZHLS_ROUTER_H_
#define _ZHLS_ROUTER_H_

#include <voltos/zhls.h>
#include <voltos/vrf.h>

struct zhls {

};

extern int zhls_create_sock(struct vrf *vrf);

#endif /* _ZHLS_ROUTER_H_ */