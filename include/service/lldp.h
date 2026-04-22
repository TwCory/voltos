// SPDX-License-Identifier: BSD-3-Clause

#ifndef _LLDP_SERVICE_H_
#define _LLDP_SERVICE_H_

#include <voltos/if.h>

struct lldp {

};

struct lldp_interface {
    struct lldp *lldp;
    struct interface *ifp;
};

struct lldp_neighbour {
    struct lldp *lldp;
};

#endif /* _LLDP_SERVICE_H_ */