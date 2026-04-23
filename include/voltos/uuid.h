// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_UUID_H_
#define _VOLTOS_UUID_H_

#include <voltos/types.h>

#define UUID_SIZE                   16
#define UUID_STRING_SIZE            (36 + 1)

typedef struct {
    __byte bytes[UUID_SIZE];
} uuid_t;

typedef struct {
    __byte bytes[UUID_SIZE];
} guid_t;

#endif /* _VOLTOS_UUID_H_ */