// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bits.h
 *
 */

#ifndef _VOLTOS_BITS_H
#define _VOLTOS_BITS_H

#include <nbapi/voltos/bits.h>

typedef __bit 					bit_t;

#define BIT_MASK(nr)				(UL(1) << ((nr) % BITS_PER_LONG))
#define BIT_WORD(nr)				((nr) / BITS_PER_LONG)
#define BIT_ULL_MASK(nr)			(ULL(1) << ((nr) % BITS_PER_LONG_LONG))
#define BIT_ULL_WORD(nr)			((nr) / BITS_PER_LONG_LONG)

#define BITS_PER_TYPE(type)			(sizeof(type) * BITS_PER_BYTE)

#define GEN_BITMASK_INPUT_CHECK(h, l)
#define GEN_BITMASK_TYPE(t, h, l)
#define GEN_BITMASK(h, l)
#define GEN_BITMASK_ULL(h, l)

#define GEN_BITMASK_U8(h, l)
#define GEN_BITMASK_U16(h, l)
#define GEN_BITMASK_U32(h, l)
#define GEN_BITMASK_U64(h, l)
#define GEN_BITMASK_U128(h, l)

#define BIT_INPUT_CHECK(type, nr)
#define BIT_TYPE(type, nr)
#define BIT_U8(nr)
#define BIT_U16(nr)
#define BIT_U32(nr)
#define BIT_U64(nr)

#endif /* _VOLTOS_BITS_H */
