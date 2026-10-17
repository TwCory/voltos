// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitflags.h
 *
 * 	Bitwise Flag Helpers
 */

#ifndef _VOLTOS_BITFLAGS_H
#define _VOLTOS_BITFLAGS_H

#include <voltos/types.h>

#ifndef __bitflags
#define __bitflags
#endif /* __bitflags */

typedef u8 	__bitflags 		bitflags8_t;
typedef u16 	__bitflags 		bitflags16_t;
typedef u32 	__bitflags 		bitflags32_t;
typedef u64 	__bitflags 		bitflags64_t;

typedef union {
	bitflags8_t 			bit_flags8;
	bitflags16_t 			bit_flags16;
	bitflags32_t 			bit_flags32;
	bitflags64_t 			bit_flags64;
} bitflags_t;

#ifndef BITFLAG
#define BITFLAG(position)		(1 << (position))
#endif /* BITFLAG */

#ifndef __bitflags_start
#define __bitflags_start(type)
#endif /* __bitflags_start */

#ifndef __bitflags_end
#define __bitflags_end(type)
#endif /* __bitflags_end */

#endif /* _VOLTOS_BITFLAGS_H */
