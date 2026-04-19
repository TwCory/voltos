// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IF_FIBRECHANNEL_H_
#define _VOLTOS_IF_FIBRECHANNEL_H_

#include <voltos/types.h>

#define FC_ADDR_SIZE       6

struct fc_addr {
    __byte bytes[FC_ADDR_SIZE];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_FIBRECHANNEL_H_ */