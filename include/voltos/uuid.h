#ifndef _VOLTOS_UUID_H_
#define _VOLTOS_UUID_H_

#include <voltos/string.h>

#define UUID_SIZE               16
#define UUID_STRING_SIZE        36

typedef struct {
    unsigned char               bytes[UUID_SIZE];
} guid_t;

typedef struct {
    unsigned char               bytes[UUID_SIZE];
} uuid_t;

extern const guid_t guid_null;
extern const uuid_t uuid_null;

#endif /* _VOLTOS_UUID_H_ */