#ifndef _NBAPI_VOLTOS_LINE_H_
#define _NBAPI_VOLTOS_LINE_H_

#define LINE_NAME_SIZE		32
#define LINE_COMMENT_SIZE	128

typedef unsigned int 		__voltos_line_id_t;
typedef unsigned int 		__voltos_line_speed_t;

enum {
    LINE_TYPE_T_UNSPEC      	= 0,
#define LINE_TYPE_UNSPEC    	LINE_TYPE_T_UNSPEC
    LINE_TYPE_T_AUX         	= 1,
#define LINE_TYPE_AUX       	LINE_TYPE_T_AUX
    LINE_TYPE_T_CONSOLE     	= 2,
#define LINE_TYPE_CONSOLE   	LINE_TYPE_T_CONSOLE
    LINE_TYPE_T_TTY         	= 3,
#define LINE_TYPE_TTY       	LINE_TYPE_T_TTY
    LINE_TYPE_T_VTY         	= 4,
#define LINE_TYPE_VTY       	LINE_TYPE_T_VTY
    __LINE_TYPE_T_MAX__
};

#define LINE_TYPE_MAX       	(__LINE_TYPE_T_MAX__ - 1)

enum {
    LINE_STATE_T_UNSPEC 	= 0,
#define LINE_STATE_UNSPEC   	LINE_STATE_T_UNSPEC
    LINE_STATE_T_BUSY 		= 1,
#define LINE_STATE_BUSY 	LINE_STATE_T_BUSY
    LINE_STATE_T_FREE 		= 2,
#define LINE_STATE_FREE 	LINE_STATE_T_FREE
    __LINE_STATE_T_MAX__
};

#define LINE_STATE_MAX  	(__LINE_STATE_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_LINE_H_ */
