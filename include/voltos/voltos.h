// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/voltos.h
 *
 */

#ifndef __VOLTOS_H__
#define __VOLTOS_H__

#include <voltos/align.h>
#include <voltos/array_size.h>
#include <voltos/bitops.h>
#include <voltos/build_debug.h>
#include <voltos/byteorder.h>
#include <voltos/compiler.h>
#include <voltos/container_of.h>
#include <voltos/limits.h>
#include <voltos/log2.h>
#include <voltos/math.h>
#include <voltos/minmax.h>
#include <voltos/print_vs.h>
#include <voltos/printf.h>
#include <voltos/snprintf.h>
#include <voltos/sprintf.h>
#include <voltos/static_call.h>
#include <voltos/stdarg.h>
#include <voltos/stddef.h>
#include <voltos/trace_print_vs.h>
#include <voltos/typecheck.h>
#include <voltos/types.h>
#include <voltos/vs_strtox.h>
#include <nbapi/voltos/voltos.h>

enum system_state {
	SYSTEM_STATE_T_UNSPEC				= 0,
	SYSTEM_STATE_T_BOOTING				= 1,
	SYSTEM_STATE_T_SCHEDULING			= 2,
	SYSTEM_STATE_T_FREEING_INIT_MEM			= 3,
	SYSTEM_STATE_T_RUNNING				= 4,
	SYSTEM_STATE_T_HALT				= 5,
	SYSTEM_STATE_T_SHUTDOWN				= 6,
	SYSTEM_STATE_T_REBOOT				= 7,
	SYSTEM_STATE_T_SUSPEND				= 8,
	__SYSTEM_STATE_T_MAX__
};

#endif /* __VOLTOS_H__ */
