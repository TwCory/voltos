#ifndef _ROUTER_IP_H
#define _ROUTER_IP_H

#include <voltos/inet.h>
#include <voltos/types.h>
#include <router/protocol.h>

enum ip_protocol_type {
	IP_PROTOCOL_TYPE_T_APPLICATION		= 1,
	IP_PROTOCOL_TYPE_T_BABEL		= 2,
	IP_PROTOCOL_TYPE_T_BGP			= 3,
	IP_PROTOCOL_TYPE_T_CONNECTED		= 4,
	IP_PROTOCOL_TYPE_T_DSR			= 5,
	IP_PROTOCOL_TYPE_T_EIGRP		= 6,
	IP_PROTOCOL_TYPE_T_HSLS			= 7,
	IP_PROTOCOL_TYPE_T_IDPR			= 8,
	IP_PROTOCOL_TYPE_T_IDRP			= 9,
	IP_PROTOCOL_TYPE_T_ISIS			= 10,
	IP_PROTOCOL_TYPE_T_LISP			= 11,
	IP_PROTOCOL_TYPE_T_LOCAL		= 12,
	IP_PROTOCOL_TYPE_T_MOBILE		= 13,
	IP_PROTOCOL_TYPE_T_NHRP			= 14,
	IP_PROTOCOL_TYPE_T_ODR			= 15,
	IP_PROTOCOL_TYPE_T_OLSR			= 16,
	IP_PROTOCOL_TYPE_T_OPENFABRIC		= 17,
	IP_PROTOCOL_TYPE_T_OSPFV2		= 18,
	IP_PROTOCOL_TYPE_T_OSPFV3		= 19,
	IP_PROTOCOL_TYPE_T_RIP			= 20,
	IP_PROTOCOL_TYPE_T_STATIC		= 21,
	IP_PROTOCOL_TYPE_T_ZHLS			= 22,
	__IP_PROTOCOL_TYPE_T_MAX__
};

struct ip_main {

};

struct ip_interface {

};

struct ip_protocol {
	const char 				*name;
	struct protocol 			*protocol;
	enum ip_protocol_type 			type;
	__u32 					index;
};

#endif /* _ROUTER_IP_H */
