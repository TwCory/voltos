// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/keychain.h
 *
 */

#ifndef _NBAPI_VOLTOS_KEYCHAIN_H
#define _NBAPI_VOLTOS_KEYCHAIN_H

#define KEY_CHAIN_NAME_SIZE			32
#define KEY_CHAIN_KEY_NAME_SIZE			32

enum key_chain_type {
	KEY_CHAIN_TYPE_T_UNSPEC 		= 0,
	KEY_CHAIN_TYPE_T_GENERIC 		= 1,
	KEY_CHAIN_TYPE_T_MACSEC 		= 2,
	KEY_CHAIN_TYPE_T_TCP 			= 3,
	__KEY_CHAIN_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_KEYCHAIN_H */
