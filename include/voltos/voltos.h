// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/voltos.h
 *
 */

#ifndef __VOLTOS_CORE_H
#define __VOLTOS_CORE_H

#include <voltos/align.h>
#include <voltos/array_size.h>
#include <voltos/bitops.h>
#include <voltos/build_debug.h>
#include <voltos/byteorder.h>
#include <voltos/compiler.h>
#include <voltos/container_of.h>
#include <voltos/limits.h>
#include <voltos/linkage.h>
#include <voltos/log2.h>
#include <voltos/math.h>
#include <voltos/minmax.h>
#include <voltos/print.h>
#include <voltos/snprintf.h>
#include <voltos/static_call_types.h>
#include <voltos/stdarg.h>
#include <voltos/stddef.h>
#include <voltos/strtox.h>
#include <voltos/typecheck.h>
#include <voltos/types.h>
#include <nbapi/voltos/voltos.h>

enum voltos_state {
	VOLTOS_STATE_T_INIT		= 1,
	VOLTOS_STATE_T_RUNNING		= 2,
	VOLTOS_STATE_T_HALT		= 3,
	VOLTOS_STATE_T_RELOAD		= 4,
	VOLTOS_STATE_T_SHUTDOWN		= 5,
	VOLTOS_STATE_T_SUSPEND		= 6,
};


#endif /* __VOLTOS_CORE_H */
