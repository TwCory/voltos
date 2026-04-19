// SPDX-License-Identifier: BSD-3-Clause

#ifndef _BRIDGE_DOMAIN_H_
#define _BRIDGE_DOMAIN_H_

#include <voltos/types.h>

#define BRIDGE_DOMAIN_ID_MIN        1
#define BRIDGE_DOMAIN_ID_MAX        16000

typedef __voltos_br_domain_id_t br_domain_id_t;

struct bridge_domain {
    br_domain_id_t br_domain_id;
};

#endif /* _BRIDGE_DOMAIN_H_ */