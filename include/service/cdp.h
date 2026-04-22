// SPDX-License-Identifier: BSD-3-Clause

#ifndef _CDP_SERVICE_H_
#define _CDP_SERVICE_H_

#include <voltos/if.h>

struct cdp {

};

struct cdp_interface {
    struct cdp *cdp;
    struct interface *ifp;
};

struct cdp_neighbour {
    struct cdp *cdp;
};

#endif /* _CDP_SERVICE_H_ */