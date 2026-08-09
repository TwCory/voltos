// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/bits.h
 *
 */

#ifndef _NBAPI_VOLTOS_BITS_H
#define _NBAPI_VOLTOS_BITS_H

#include <asm/bitsperlong.h>

#define BIT_STATE_OFF			0
#define BIT_STATE_ON			1

#define BITS_PER_NIBBLE			4
#define BITS_PER_BYTE			8
#define BITS_PER_OCTET			8
#define BITS_PER_HEXTET			16

#define BITS_PER_CHAR			8
#define BITS_PER_SHORT			16
#define BITS_PER_INT			32
#define BITS_PER_LONG			__BITS_PER_LONG
#define BITS_PER_LONG_LONG		__BITS_PER_LONG_LONG

typedef enum {
	off				= BIT_STATE_OFF,
	on				= BIT_STATE_ON
} __bit;

#define __GEN_BITMASK(h, l)		(((~_UL(0)) << (l)) & (~_UL(0) >> (__BITS_PER_LONG - 1 - (h))))

#define __GEN_BITMASK_ULL(h, l)		(((~_ULL(0)) << (l)) & (~_ULL(0) >> (__BITS_PER_LONG_LONG - 1 - (h))))

#define __GEN_BITMASK_U128(h, l)	((_BIT128((h)) << 1) - (_BIT128(l)))

#endif /* _NBAPI_VOLTOS_BITS_H */
