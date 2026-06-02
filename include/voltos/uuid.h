#ifndef _VOLTOS_UUID_H_
#define _VOLTOS_UUID_H_

#include <nbapi/voltos/uuid.h>

#define UUID_SIZE	16

typedef struct {
	unsigned char bytes[UUID_SIZE];
} guid_t;

typedef struct {

} uuid_t;

#endif /* _VOLTOS_UUID_H_ */
