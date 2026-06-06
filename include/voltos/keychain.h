#ifndef VOLTOS_KEYCHAIN_H
#define VOLTOS_KEYCHAIN_H

#include <voltos/refcount.h>
#include <nbapi/voltos/keychain.h>

struct key_chain {
	refcount_t ref_count;
};

struct key_chain_key {

};

#endif /* VOLTOS_KEYCHAIN_H */
