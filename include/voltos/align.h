// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/align.h
 *
 */

#ifndef _VOLTOS_ALIGN_H
#define _VOLTOS_ALIGN_H

#include <voltos/const.h>

#define ALIGN(x, a)			__ALIGN_SYSTEM((x), (a))
#define ALIGN_DOWN(x, a)		__ALIGN_SYSTEM((x) - ((a) - 1), (a))
#define __ALIGN_MASK(x, mask)		__ALIGN_SYSTEM_MASK((x), (mask))

#define PTR_ALIGN(p, a)			((typeof(p))ALIGN((unsigned long)(p), (a)))
#define PTR_ALIGN_DOWN(p, a)		((typeof(p))ALIGN_DOWN((unsigned long)(p), (a)))
#define IS_ALIGNED(x, a)		(((x) & ((typeof(x))(a) - 1)) == 0)

#endif /* _VOLTOS_ALIGN_H */
