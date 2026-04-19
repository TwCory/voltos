// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IF_H_
#define _VOLTOS_IF_H_

#include <voltos/types.h>

typedef __voltos_if_index_t if_index_t;

struct interface {
    if_index_t if_index;
};

#endif /* _VOLTOS_IF_H_ */