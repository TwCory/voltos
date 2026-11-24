// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fs.h
 *
 * 	File System (FS)
 */

#ifndef _NBAPI_VOLTOS_FS_H
#define _NBAPI_VOLTOS_FS_H

#define FS_ALIAS_NAME_SIZE	(64)
#define FS_PREFIX_NAME_SIZE	(32)

enum {
	FS_FLAG_F_BOOTABLE	= (1 << 0),
#define FS_FLAG_BOOTABLE	FS_FLAG_F_BOOTABLE
};

#endif /* _NBAPI_VOLTOS_FS_H */
