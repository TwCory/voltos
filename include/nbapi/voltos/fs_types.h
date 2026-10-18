// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fs_types.h
 *
 * 	File System (FS) Types
 */

#ifndef _NBAPI_VOLTOS_FS_TYPES_H
#define _NBAPI_VOLTOS_FS_TYPES_H

#define FS_ALIAS_NAME_SIZE			32
#define FS_FLAG_BOOTABLE			(1 << 0)

enum fs_type {
	FS_TYPE_T_UNSPEC			= 0,
	FS_TYPE_T_DISK				= 1,
	FS_TYPE_T_FLASH				= 2,
	FS_TYPE_T_NETWORK			= 3,
	FS_TYPE_T_NVRAM				= 4,
	FS_TYPE_T_OPAQUE			= 5,
	FS_TYPE_T_RAM				= 6,
	FS_TYPE_T_TTY				= 7,
	FS_TYPE_T_UNKNOWN			= 8,
	__FS_TYPE_T_MAX__
};

enum fs_access_type {
	FS_ACCESS_TYPE_T_UNSPEC			= 0,
	FS_ACCESS_TYPE_T_RO			= 1,
	FS_ACCESS_TYPE_T_WO			= 2,
	FS_ACCESS_TYPE_T_RW			= 3,
	__FS_ACCESS_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_FS_TYPES_H */
