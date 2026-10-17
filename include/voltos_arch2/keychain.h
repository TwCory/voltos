// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/keychain.h
 *
 */

#ifndef _VOLTOS_KEYCHAIN_H
#define _VOLTOS_KEYCHAIN_H

#include <voltos/refcount.h>
#include <nbapi/voltos/keychain.h>

struct key_chain {
	const char 			name[KEY_CHAIN_NAME_SIZE];
	refcount_t 			refcount;
};

struct key_chain_key {

};

#endif /* _VOLTOS_KEYCHAIN_H */
