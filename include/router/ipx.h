#ifndef _ROUTER_IPX_H
#define _ROUTER_IPX_H

#include <voltos/types.h>
#include <router/protocol.h>

enum ipx_protocol_type {
	IPX_PROTOCOL_TYPE_T_AGGREGATE			= 1,
	IPX_PROTOCOL_TYPE_T_CONNECTED_PRIMARY		= 2,
	IPX_PROTOCOL_TYPE_T_CONNECTED_SECONDARY		= 3,
	IPX_PROTOCOL_TYPE_T_EIGRP			= 4,
	IPX_PROTOCOL_TYPE_T_EXTERNAL			= 5,
	IPX_PROTOCOL_TYPE_T_FLOATING_STATIC		= 6,
	IPX_PROTOCOL_TYPE_T_IPXWAN			= 7,
	IPX_PROTOCOL_TYPE_T_LOCAL			= 8,
	IPX_PROTOCOL_TYPE_T_NLSP			= 9,
	IPX_PROTOCOL_TYPE_T_RIP				= 10,
	IPX_PROTOCOL_TYPE_T_STATIC			= 11,
	__IPX_PROTOCOL_TYPE_T_MAX__
};

struct ipx_main {

};

struct ipx_interface {

};

struct ipx_protocol {
	const char 					*name;
	struct protocol 				*protocol;
	enum ipx_protocol_type 				type;
	__u32 						index;
};

#endif /* _ROUTER_IPX_H */
