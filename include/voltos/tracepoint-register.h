// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/tracepoint-register.h
 *
 */

#ifndef _VOLTOS_TRACEPOINT_REGISTER_H
#define _VOLTOS_TRACEPOINT_REGISTER_H

#define __TRACEPOINT_ARGS_COUNT(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, N, ...) \
	N

#define TRACEPOINT_ARGS_COUNT(...) \
	__TRACEPOINT_ARGS_COUNT(__VA_ARGS__, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define TRACEPOINT_ARGS_01(a, ...)
#define TRACEPOINT_ARGS_02(a, ...)
#define TRACEPOINT_ARGS_03(a, ...)
#define TRACEPOINT_ARGS_04(a, ...)
#define TRACEPOINT_ARGS_05(a, ...)
#define TRACEPOINT_ARGS_06(a, ...)
#define TRACEPOINT_ARGS_07(a, ...)
#define TRACEPOINT_ARGS_08(a, ...)
#define TRACEPOINT_ARGS_09(a, ...)
#define TRACEPOINT_ARGS_10(a, ...)
#define TRACEPOINT_ARGS_11(a, ...)
#define TRACEPOINT_ARGS_12(a, ...)
#define TRACEPOINT_ARGS_13(a, ...)
#define TRACEPOINT_ARGS_14(a, ...)
#define TRACEPOINT_ARGS_15(a, ...)

#define TRACEPOINT_ARGS_FUNCTION(a)
#define TRACEPOINT_ARGS_EXPAND(...)

#define __TRACEPOINT_ARGS(N, ...)

#define TRACEPOINT_ARGS(...)

#define TRACEPOINT_REGISTER(trace, name)

#define __tracepoint_emit_header_generic(t)

#define __tracepoint_emit_header_fn(t)

#define __tracepoint_emit(name, in, type)

#define tracepoint_emit_string(in)

#define tracepoint_emit_blob(in, len)

#endif /* _VOLTOS_TRACEPOINT_REGISTER_H */
