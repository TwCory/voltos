// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/admin_group.h
 *
 *	Administrative-Group and Extended
 *	Administrative-Group
 */

#ifndef _NBAPI_VOLTOS_ADMIN_GROUP_H
#define _NBAPI_VOLTOS_ADMIN_GROUP_H

#include <voltos/types.h>

#define ADMIN_GROUP_NAME_SIZE               	32
#define EXT_ADMIN_GROUP_NAME_SIZE       	32

#define ADMIN_GROUP_PRINT_SIZE_MAX		2048
#define EXT_ADMIN_GROUP_POSITION_MAX		1024

typedef __u32 					__admin_group_key_t;
typedef __u32 					__ext_admin_group_key_t;

#endif /* _NBAPI_VOLTOS_ADMIN_GROUP_H */
