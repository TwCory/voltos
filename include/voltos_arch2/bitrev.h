// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitrev.h
 *
 * 	Bit Reversal Helpers
 */

#ifndef _VOLTOS_BITREV_H
#define _VOLTOS_BITREV_H

#include <voltos/types.h>

#define __bitrev8
#define __bitrev16
#define __bitrev32

#define __bitrev8x4(x)

#define __const_bitrev8(x)
#define __const_bitrev8x4(x)
#define __const_bitrev16(x)
#define __const_bitrev32(x)

#define bitrev8(x)
#define bitrev8x4(x)
#define bitrev16(x)
#define bitrev32(x)

#endif /* _VOLTOS_BITREV_H */
