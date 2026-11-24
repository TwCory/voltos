// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/align.h
 *
 * 	General alignment helpers
 */

#ifndef _VOLTOS_ALIGN_H
#define _VOLTOS_ALIGN_H

#include <voltos/const.h>

#ifndef alignas
#define alignas				_Alignas
#endif /* alignas */

#ifndef alignof
#define alignof				_Alignof
#endif /* alignof */

#define ALIGN(x, a)			__ALIGN_VOLTOS((x), (a))
#define ALIGN_DOWN(x, a)		__ALIGN_VOLTOS((x) - ((a) - 1), (a))
#define __ALIGN_MASK(x, mask)		__ALIGN_VOLTOS_MASK((x), (mask))
#define PTR_ALIGN(p, a)			((typeof(p))ALIGN((unsigned long)(p), (a)))
#define PTR_ALIGN_DOWN(p, a)		((typeof(p))ALIGN_DOWN((unsigned long)(p), (a)))
#define IS_ALIGNED(x, a)		(((x) & ((typeof(x))(a) - 1)) == 0)

#endif /* _VOLTOS_ALIGN_H */
