// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/debug.h
 *
 * 	VoltOS Debugging Facilities
 */

#ifndef _VOLTOS_DEBUG_H
#define _VOLTOS_DEBUG_H

#include <voltos/build_debug.h>
#include <voltos/compiler.h>

#define CUT_HERE							"---------------[ Cut Here ]---------------\n"

#ifndef DEBUG_RELATIVE_PTR
#define DEBUG_RELATIVE_PTR(type, name)
#endif

struct debug_entry {
	unsigned long							address;
	const char							*format;
	const char							*file;
	unsigned short							line;
	unsigned short							flags;
};

#ifndef DEBUG_FLAGS
#define DEBUG_FLAG_WARNING						(1 << 0)
#define DEBUG_FLAG_ONCE							(1 << 1)
#define DEBUG_FLAG_DONE							(1 << 2)
#define DEBUG_FLAG_NO_CUT_HERE						(1 << 3)
#define DEBUG_FLAG_ARGS							(1 << 4)
#define DEBUG_FLAG_TAINT(taint)						((taint) << 8)
#define DEBUG_GET_TAINT(debug)						((debug)->flags >> 8)
#endif


#ifndef WARN_CONDITION_STR
#define WARN_CONDITION_STR(condition_str)
#endif

#ifndef DEBUG
#define DEBUG()
#endif

#ifndef DEBUG_ENABLE
#define DEBUG_ENABLE(condition)
#endif

#ifndef __WARN_printf
#define __WARN_printf(taint, arg...)
#endif

#ifndef __WARN
#define __WARN()
#endif

#ifndef WARN
#define WARN(condition, format...)
#endif

#ifndef WARN_ENABLE
#define WARN_ENABLE(condition)
#endif

#ifndef WARN_ENABLE_ONCE
#define WARN_ENABLE_ONCE(condition)
#endif

#ifndef WARN_ONCE
#define WARN_ONCE(condition, format...)
#endif

#ifndef WARN_TAINT
#define WARN_TAINT(condition, taint, format...)
#endif

#ifndef WARN_TAINT_ONCE
#define WARN_TAINT_ONCE(condition, taint, format...)
#endif

#ifndef WARN_ENABLE_SMP
#define WARN_ENABLE_SMP(x)
#endif

enum debug_trap_type {
	DEBUG_TRAP_TYPE_T_UNSPEC					= 0,
	DEBUG_TRAP_TYPE_T_NONE						= 1,
	DEBUG_TRAP_TYPE_T_WARN						= 2,
	DEBUG_TRAP_TYPE_T_DEBUG						= 3,
	__DEBUG_TRAP_TYPE_T_MAX__
};

#ifndef MAYBE_BUILD_DEBUG_ENABLE
#define MAYBE_BUILD_DEBUG_ENABLE(condition)
#endif

#ifndef CHECK_DATA_CORRUPTION
#define CHECK_DATA_CORRUPTION(condition, address, format, ...)
#endif

#endif /* _VOLTOS_DEBUG_H */
