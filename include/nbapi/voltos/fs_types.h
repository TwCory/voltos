// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fs_types.h
 *
 * 	File System (FS) Types
 */

#ifndef _NBAPI_VOLTOS_FS_TYPES_H
#define _NBAPI_VOLTOS_FS_TYPES_H

enum fs_type {
	FS_TYPE_UNSPEC				= 0,
	FS_TYPE_DISK				= 1,
	FS_TYPE_FLASH				= 2,
	FS_TYPE_NETWORK				= 3,
	FS_TYPE_NVRAM				= 4,
	FS_TYPE_OPAQUE				= 5,
	FS_TYPE_RAM				= 6,
	FS_TYPE_TTY				= 7,
	FS_TYPE_UNKNOWN				= 8,
	__FS_TYPE_MAX__
};

#define FS_TYPE_MAX				(__FS_TYPE_MAX__ - 1)

enum fs_access_type {
	FS_ACCESS_TYPE_UNSPEC			= 0,
	FS_ACCESS_TYPE_RO			= 1,
	FS_ACCESS_TYPE_WO			= 2,
	FS_ACCESS_TYPE_RW			= 3,
	__FS_ACCESS_TYPE_MAX__
};

#define FS_ACCESS_TYPE_MAX			(__FS_ACCESS_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_FS_TYPES_H */
