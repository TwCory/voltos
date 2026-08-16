// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/uuid_types.h
 *
 * 	Universally Unique Identifier (UUID)
 */

#ifndef _VOLTOS_UUID_TYPES_H
#define _VOLTOS_UUID_TYPES_H

#define UUID_SIZE		16
#define GUID_SIZE		16

typedef struct {
	unsigned char 		bytes[UUID_SIZE];
} uuid_t;

typedef struct {
	unsigned char 		bytes[GUID_SIZE];
} guid_t;

#endif /* _VOLTOS_UUID_TYPES_H */
