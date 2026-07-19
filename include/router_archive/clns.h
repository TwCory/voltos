#ifndef _ROUTER_CLNS_H
#define _ROUTER_CLNS_H

#include <voltos/types.h>
#include <router/protocol.h>

enum clns_protocol_type {
	CLNS_PROTOCOL_TYPE_T_CONNECTED		= 1,
	CLNS_PROTOCOL_TYPE_T_DECNET_IV		= 2,
	CLNS_PROTOCOL_TYPE_T_ESIS		= 3,
	CLNS_PROTOCOL_TYPE_T_ISIS		= 4,
	CLNS_PROTOCOL_TYPE_T_ISO_IGRP		= 5,
	CLNS_PROTOCOL_TYPE_T_LOCAL		= 6,
	CLNS_PROTOCOL_TYPE_T_STATIC		= 7,
	__CLNS_PROTOCOL_TYPE_T_MAX__
};

struct clns_main {
	bool 					routing;
};

struct clns_interface {
	bool 					enable;
};

struct clns_host {

};

struct clns_protocol {
	const char 				*name;
	struct protocol 			*protocol;
	enum clns_protocol_type 		type;
	__u32 					index;
};

#endif /* _ROUTER_CLNS_H */
