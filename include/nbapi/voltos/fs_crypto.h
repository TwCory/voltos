// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fs_crypto.h
 *
 * 	File System (FS) Crypto
 */

#ifndef _NBAPI_VOLTOS_FS_CRYPTO_H
#define _NBAPI_VOLTOS_FS_CRYPTO_H

enum fs_crypto_mode {
	FS_CRYPTO_MODE_UNSPEC		= 0,
	FS_CRYPTO_MODE_DISABLED		= 1,
	FS_CRYPTO_MODE_ENABLED		= 2,
	FS_CRYPTO_MODE_UNSUPPORTED	= 3,
	__FS_CRYPTO_MODE_MAX__
};

#define FS_CRYPTO_MODE_MAX		(__FS_CRYPTO_MODE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_FS_CRYPTO_H */
