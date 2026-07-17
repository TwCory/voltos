#ifndef _VOLTOS_UUID_TYPES_H
#define _VOLTOS_UUID_TYPES_H

#include <voltos/types.h>

#define UUID_SIZE   16
#define GUID_SIZE   16

typedef struct {
    __u8 bytes[UUID_SIZE];
} uuid_t;

typedef struct {
    __u8 bytes[GUID_SIZE];
} guid_t;

#endif /* _VOLTOS_UUID_TYPES_H */
