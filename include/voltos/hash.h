// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/hash.h
 *
 */

#ifndef _VOLTOS_HASH_H
#define _VOLTOS_HASH_H

#include <voltos/compiler.h>
#include <voltos/types.h>

#define HASH32_GOLDEN_RATIO	0x61C88647
#define HASH64_GOLDEN_RATIO	0x61C8864680B583EBULL

#ifndef hash_long
#define hash_long(val, bits)
#endif /* hash_long */

#ifndef __hash32
#define __hash32(val)
#endif

#ifndef __hash64
#define __hash64(val)
#endif

#ifndef hash32
#define hash32
#endif

#ifndef hash64
#define hash64
#endif

#ifndef hash_ptr
#define hash_ptr(ptr, bits)
#endif /* hash_ptr */

#endif /* _VOLTOS_HASH_H */
