// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/array_size.h
 *
 */

#ifndef _VOLTOS_ARRAY_SIZE_H
#define _VOLTOS_ARRAY_SIZE_H

#include <voltos/compiler.h>

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(x)				(sizeof(x)/sizeof(x[0]))
#endif /* ARRAY_SIZE */

#ifndef ARRAY_END
#define ARRAY_END(x)				(&(x)[ARRAY_SIZE(x)])
#endif /* ARRAY_END */

#endif /* _VOLTOS_ARRAY_SIZE_H */
