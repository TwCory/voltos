// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/reciprocal.h
 *
 */

#ifndef _VOLTOS_RECIPROCAL_H
#define _VOLTOS_RECIPROCAL_H

#include <voltos/types.h>

struct reciprocal32 {
	u32 		m;
	u8 		sh1;
	u8 		sh2;
};

struct reciprocal64 {
	u64		m;
	u8 		sh1;
	u8 		sh2;
};

#endif /* _VOLTOS_RECIPROCAL_H */
