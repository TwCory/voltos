#ifndef _ROUTER_PROTOCOL_H
#define _ROUTER_PROTOCOL_H

enum protocol_type {
	PROTOCOL_TYPE_T_APPLETALK		= 1,
	PROTOCOL_TYPE_T_CLNS			= 2,
	PROTOCOL_TYPE_T_DECNET			= 3,
	PROTOCOL_TYPE_T_IP			= 4,
	PROTOCOL_TYPE_T_IPV6			= 5,
	PROTOCOL_TYPE_T_IPX			= 6,
	__PROTOCOL_TYPE_T_MAX__
};

struct protocol {
	enum protocol_type 			type;
};

#endif /* _ROUTER_PROTOCOL_H */
