// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/line.h
 *
 * 	Terminal/CLI Lines
 */

#ifndef _NBAPI_VOLTOS_LINE_H
#define _NBAPI_VOLTOS_LINE_H

enum line_type {
	LINE_TYPE_UNSPEC	= 0,
	LINE_TYPE_AUX		= 1,
	LINE_TYPE_CONSOLE	= 2,
	LINE_TYPE_TTY		= 3,
	LINE_TYPE_VTY		= 4,
	__LINE_TYPE_MAX__
};

#define LINE_TYPE_MAX		(__LINE_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_LINE_H */
