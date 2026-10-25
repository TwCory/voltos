// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ratio.h
 *
 */

#ifndef _VOLTOS_RATIO_H
#define _VOLTOS_RATIO_H

#include <voltos/types.h>

struct ratio {
	imax value;
	imax denominator:1;
};

#endif /* _VOLTOS_RATIO_H */
