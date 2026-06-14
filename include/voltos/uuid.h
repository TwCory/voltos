#ifndef VOLTOS_UUID_H
#define VOLTOS_UUID_H

#include <nbapi/voltos/uuid.h>

#define UUID_SIZE		16

typedef struct {
	unsigned char 		bytes[UUID_SIZE];
} guid_t;

typedef struct {
	unsigned char 		bytes[UUID_SIZE];
} uuid_t;

#endif /* VOLTOS_UUID_H */
