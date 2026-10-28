// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bits.h
 *
 */

#ifndef _VOLTOS_BITS_H
#define _VOLTOS_BITS_H

#include <nbapi/voltos/bits.h>

#ifdef HAVE_STDBIT
#include <stdbit.h>
#endif /* HAVE_STDBIT */

typedef __bit_t 		bit_t;

#define BIT(nr)			(UL(1) << (nr))
#define BIT_ULL(nr)		(ULL(1) << (nr))

#define BIT_MASK(nr)
#define BIT_WORD(nr)

#define BIT_MASK_ULL(nr)
#define BIT_WORD_ULL(nr)

#define BITS_PER_TYPE(type)

#ifndef GEN_BITMASK_INPUT_CHECK
#define GEN_BITMASK_INPUT_CHECK(h, l)
#endif /* GEN_BITMASK_INPUT_CHECK */

#ifndef GEN_BITMASK_TYPE
#define GEN_BITMASK_TYPE(h, l)
#endif /* GEN_BITMASK_TYPE */

#ifndef GEN_BITMASK
#define GEN_BITMASK(h, l)
#endif /* GEN_BITMASK */

#ifndef GEN_BITMASK_ULL
#define GEN_BITMASK_ULL(h, l)
#endif /* GEN_BITMASK_ULL */

#ifndef GEN_BITMASK_U8
#define GEN_BITMASK_U8(h, l)
#endif /* GEN_BITMASK_U8 */

#ifndef GEN_BITMASK_U16
#define GEN_BITMASK_U16(h, l)
#endif /* GEN_BITMASK_U16 */

#ifndef GEN_BITMASK_U32
#define GEN_BITMASK_U32(h, l)
#endif /* GEN_BITMASK_U32 */

#ifndef GEN_BITMASK_U64
#define GEN_BITMASK_U64(h, l)
#endif /* GEN_BITMASK_U64 */

#ifndef GEN_BITMASK_U128
#define GEN_BITMASK_U128(h, l)
#endif /* GEN_BITMASK_U128 */

#ifndef BIT_INPUT_CHECK
#define BIT_INPUT_CHECK(type, nr)
#endif /* BIT_INPUT_CHECK */

#ifndef BIT_TYPE
#define BIT_TYPE(type, nr)
#endif /* BIT_TYPE */

#define BIT_U8(nr)
#define BIT_U16(nr)
#define BIT_U32(nr)
#define BIT_U64(nr)

#endif /* _VOLTOS_BITS_H */
