// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler_types.h
 *
 *	Compiler Types and Definitions
 */

#ifndef _VOLTOS_COMPILER_TYPES_H
#define _VOLTOS_COMPILER_TYPES_H

#include <voltos/compiler_attributes.h>
#include <voltos/compiler-context-analysis.h>
#include <voltos/compiler-demangle.h>

#ifndef __has_builtin
#define __has_builtin(x)			(0)
#endif

#define ___PASTE(a, b)				a##b
#define __PASTE(a, b)				___PASTE(a, b)

struct xtrace_branch_ctx {
	const char				*function;
	const char				*file;
	unsigned int				line;
	union {
		struct {
			unsigned long		correct;
			unsigned long		incorrect;
		};
		struct {
			unsigned long		miss;
			unsigned long 		hit;
		};
		unsigned long			miss_hit[2];
	};
};

struct xtrace_likely_ctx {
	struct xtrace_branch_ctx		context;
	unsigned long				constant;
};

#endif /* _VOLTOS_COMPILER_TYPES_H */
