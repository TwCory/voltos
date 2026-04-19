// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IF_INFINIBAND_H_
#define _VOLTOS_IF_INFINIBAND_H_

#include <voltos/types.h>

#define IB_ADDR_SIZE       20

struct ib_addr {
    __byte bytes[IB_ADDR_SIZE];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_INFINIBAND_H_ */