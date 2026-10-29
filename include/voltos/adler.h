// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/adler.h
 *
 * 	Adler-32 Checksum Functions
 */

#ifndef _VOLTOS_ADLER_H
#define _VOLTOS_ADLER_H

#include <voltos/types.h>

#define ADLER32_MODULO			65521

struct adler32_state {
	__csum16 			sum_a;
	__csum16 			sum_b;
};


#endif /* _VOLTOS_ADLER_H */
