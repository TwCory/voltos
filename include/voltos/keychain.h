#ifndef _VOLTOS_KEYCHAIN_H_
#define _VOLTOS_KEYCHAIN_H_

#include <voltos/refcount.h>
#include <nbapi/voltos/keychain.h>

struct key_chain {
	refcount_t ref_count;
};

struct key_chain_key {

};

#endif /* _VOLTOS_KEYCHAIN_H_ */
