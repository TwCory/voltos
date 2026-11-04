// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/debug.h
 *
 */

#ifndef _VOLTOS_DEBUG_H
#define _VOLTOS_DEBUG_H

#ifndef CUT_HERE
#define CUT_HERE			"-----------------[ CUT HERE ]-----------------\n"
#endif /* CUT_HERE */

enum {
	DEBUG_FLAG_F_WARNING		= (1 << 0),
#define DEBUG_FLAG_WARNING		DEBUG_FLAG_F_WARNING
	DEBUG_FLAG_F_ONCE		= (1 << 1),
#define DEBUG_FLAG_ONCE			DEBUG_FLAG_F_ONCE
	DEBUG_FLAG_F_DONE		= (1 << 2),
#define DEBUG_FLAG_DONE			DEBUG_FLAG_F_DONE
	DEBUG_FLAG_F_NO_CUT_HERE	= (1 << 3),
#define DEBUG_FLAG_NO_CUT_HERE		DEBUG_FLAG_F_NO_CUT_HERE
	DEBUG_FLAG_F_ARGS		= (1 << 4),
#define DEBUG_FLAG_ARGS			DEBUG_FLAG_F_ARGS
	DEBUG_FLAG_F_TAINT		= (1 << 5),
#define DEBUG_FLAG_TAINT		DEBUG_FLAG_F_TAINT
};

#define DEBUG_TAINT(taint)		((taint) << 8)
#define DEBUG_GET_TAINT(debug)		((debug)->flags >> 8)

#ifndef WARN_CONDITION_STR
#define WARN_CONDITION_STR(cond_str)
#endif /* WARN_CONDITION_STR */

struct debug_entry {
	unsigned long 			address;
	const char			*format;
	const char			*file;
	unsigned short			line;
	unsigned short			flags;
};

#ifndef DEBUG
#define DEBUG()
#endif /* DEBUG */

#ifndef DEBUG_ON
#define DEBUG_ON(condition)
#endif /* DEBUG_ON */

#ifndef WARN
#define WARN(condition, format...)
#endif /* WARN */

#ifndef WARN_ON
#define WARN_ON(condition)
#endif /* WARN_ON */

#ifndef WARN_ON_ONCE
#define WARN_ON_ONCE(condition)
#endif /* WARN_ON_ONCE */

#ifndef WARN_ON_SMP
#define WARN_ON_SMP(x)
#endif /* WARN_ON_SMP */

#ifndef WARN_ONCE
#define WARN_ONCE(condition, format...)
#endif /* WARN_ONCE */

#ifndef WARN_TAINT
#define WARN_TAINT(condition, taint, format...)
#endif /* WARN_TAINT */

#ifndef WARN_TAINT_ONCE
#define WARN_TAINT_ONCE(condition, taint, format...)
#endif /* WARN_TAINT_ONCE */

enum debug_trap_type {
	DEBUG_TRAP_TYPE_T_UNSPEC	= 0,
	DEBUG_TRAP_TYPE_T_WARN		= 1,
	DEBUG_TRAP_TYPE_T_DEBUG		= 2,
	__DEBUG_TRAP_TYPE_T_MAX__
};

#ifndef MAYBE_BUILD_DEBUG_ON
#define MAYBE_BUILD_DEBUG_ON(condition)
#endif /* MAYBE_BUILD_DEBUG_ON */

#ifndef CHECK_DATA_CORRUPTION
#define CHECK_DATA_CORRUPTION(condition, address, format, ...)
#endif /* CHECK_DATA_CORRUPTION */

#endif /* _VOLTOS_DEBUG_H */
