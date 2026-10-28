// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/build_debug.h
 *
 */

#ifndef _VOLTOS_BUILD_DEBUG_H
#define _VOLTOS_BUILD_DEBUG_H

#include <voltos/compiler.h>

#ifndef BUILD_DEBUG_ON_ZERO
#define BUILD_DEBUG_ON_ZERO(e, ...)
#endif /* BUILD_DEBUG_ON_ZERO */

#ifndef BUILD_DEBUG_ON_NOT_POWER_OF_2
#define BUILD_DEBUG_ON_NOT_POWER_OF_2(n)
#endif /* BUILD_DEBUG_ON_NOT_POWER_OF_2 */

#ifndef BUILD_DEBUG_ON_INVALID
#define BUILD_DEBUG_ON_INVALID(e)
#endif /* BUILD_DEBUG_ON_INVALID */

#ifndef BUILD_DEBUG_ON_MSG
#define BUILD_DEBUG_ON_MSG(cond, msg)
#endif /* BUILD_DEBUG_ON_MSG */

#ifndef BUILD_DEBUG_ON
#define BUILD_DEBUG_ON(condition)
#endif /* BUILD_DEBUG_ON */

#ifndef BUILD_DEBUG
#define BUILD_DEBUG()
#endif /* BUILD_DEBUG */

#ifndef static_assert
#define static_assert(expr, ...)
#endif /* static_assert */

#ifndef __static_assert
#define __static_assert(expr, msg, ...)
#endif /* __static_assert */

#ifndef ASSERT_STRUCT_OFFSET
#define ASSERT_STRUCT_OFFSET(type, field, expected_offset)
#endif /* ASSERT_STRUCT_OFFSET */

#endif /* _VOLTOS_BUILD_DEBUG_H */
