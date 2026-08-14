// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/build_debug.h
 *
 */

#ifndef _VOLTOS_BUILD_DEBUG_H
#define _VOLTOS_BUILD_DEBUG_H

#include <voltos/compiler.h>

#ifndef BUILD_DEBUG_ENABLE_ZERO
#define BUILD_DEBUG_ENABLE_ZERO(e, ...)
#endif

#ifndef BUILD_DEBUG_ENABLE_NOT_POWER_OF_2
#define BUILD_DEBUG_ENABLE_NOT_POWER_OF_2(n)
#endif

#ifndef BUILD_DEBUG_ENABLE_INVALID
#define BUILD_DEBUG_ENABLE_INVALID(e)
#endif

#ifndef BUILD_DEBUG_ENABLE_MSG
#define BUILD_DEBUG_ENABLE_MSG(condition, message)
#endif

#ifndef BUILD_DEBUG_ENABLE
#define BUILD_DEBUG_ENABLE(condition)
#endif

#ifndef BUILD_DEBUG
#define BUILD_DEBUG()
#endif

#ifndef __static_assert
#define __static_assert(expr, msg, ...)
#endif

#ifndef static_assert
#define static_assert(expr, ...)
#endif

#ifndef ASSERT_STRUCT_OFFSET
#define ASSERT_STRUCT_OFFSET(type, field, expected_offset)
#endif

#endif /* _VOLTOS_BUILD_DEBUG_H */
