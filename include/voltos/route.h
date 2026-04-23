// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ROUTE_H_
#define _VOLTOS_ROUTE_H_

#include <voltos/route_table.h>
#include <voltos/types.h>

struct route {
    struct route_table *rt_ptr;

    __u8 distance;
    __u64 metric;
};

#endif /* _VOLTOS_ROUTE_H_ */