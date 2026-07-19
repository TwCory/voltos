#ifndef _NBAPI_VOLTOS_LINE_H
#define _NBAPI_VOLTOS_LINE_H

#include <voltos/types.h>

typedef __u16 				__voltos_line_id_t;

enum line_type {
	LINE_TYPE_T_UNSPEC		= 0,
	LINE_TYPE_T_AUX			= 1,
	LINE_TYPE_T_CONSOLE		= 2,
	LINE_TYPE_T_STRING		= 3,
	LINE_TYPE_T_TTY			= 4,
	LINE_TYPE_T_VTY			= 5,
	__LINE_TYPE_T_MAX__
};

enum line_state {
	LINE_STATE_T_IN_USE		= 1,
	LINE_STATE_T_FREE		= 2,
	__LINE_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_LINE_H */
