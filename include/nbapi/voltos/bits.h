// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bits.h
 *
 */

#ifndef _NBAPI_VOLTOS_BITS_H
#define _NBAPI_VOLTOS_BITS_H

#include <asm/bitsperlong.h>

#define BITS_PER_OCTET			8
#define BITS_PER_HEXTET			16

#define BITS_PER_NIBBLE			4
#define BITS_PER_BYTE			8
#define BITS_PER_SYLLABLE		__BITS_PER_LONG
#define BITS_PER_WORD			__BITS_PER_LONG

#define BITS_PER_CHAR			8
#define BITS_PER_SHORT			16
#define BITS_PER_INT			32
#define BITS_PER_LONG			__BITS_PER_LONG
#define BITS_PER_LONG_LONG		__BITS_PER_LONG_LONG

#define BIT_STATE_OFF			0
#define BIT_STATE_ON			1

typedef enum {
	BIT_T_OFF			= BIT_STATE_OFF,
	BIT_T_ON			= BIT_STATE_ON
} __bit_t;

#endif /* _NBAPI_VOLTOS_BITS_H */
