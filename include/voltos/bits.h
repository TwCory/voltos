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

#endif /* _VOLTOS_BITS_H */
