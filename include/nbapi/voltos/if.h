#ifndef _NBAPI_VOLTOS_IF_H
#define _NBAPI_VOLTOS_IF_H

#include <voltos/types.h>

typedef __u32 					__voltos_if_index_t;

enum if_state {
	IF_STATE_T_UNKNOWN			= 0,
	IF_STATE_T_UP				= 1,
	IF_STATE_T_DOWN				= 2,
	IF_STATE_T_TEST				= 3,
	__IF_STATE_T_MAX__
};

enum oper_state {
	OPER_STATE_T_INVALID			= 0,
	OPER_STATE_T_READY			= 1,
	OPER_STATE_T_NO_PASS			= 2,
	OPER_STATE_T_TEST			= 3,
	OPER_STATE_T_UNKNOWN			= 4,
	OPER_STATE_T_DORMANT			= 5,
	OPER_STATE_T_NOT_PRESENT		= 6,
	OPER_STATE_T_LOWER_LAYER_DOWN		= 7,
	__OPER_STATE_T_MAX__
};

enum if_type {
	IF_TYPE_T_OTHER				= 1,
	IF_TYPE_T_REGULAR1822			= 2,
	IF_TYPE_T_HDH1822			= 3,
	IF_TYPE_T_DDNX25			= 4,
	IF_TYPE_T_RFC877X25			= 5,
	IF_TYPE_T_ETHERNET_CSMA_CD		= 6,
	IF_TYPE_T_ISO88023_CSMA_CD		= 7,
	__IF_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IF_H */
