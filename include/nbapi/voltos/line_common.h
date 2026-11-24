// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/line_common.h
 *
 * 	Terminal/CLI Lines
 */

#ifndef _NBAPI_VOLTOS_LINE_COMMON_H
#define _NBAPI_VOLTOS_LINE_COMMON_H

enum line_state {
	LINE_STATE_UNSPEC	= 0,
	LINE_STATE_FREE		= 1,
	LINE_STATE_BUSY		= 2,
	LINE_STATE_ERROR	= 3,
	__LINE_STATE_MAX__
};

#define LINE_STATE_MAX		(__LINE_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_LINE_COMMON_H */
