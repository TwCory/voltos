#ifndef _ROUTER_ADDRESS_H
#define _ROUTER_ADDRESS_H

#include <voltos/in.h>
#include <voltos/in6.h>

enum rt_address_type {
	RT_ADDRESS_TYPE_T_UNSPEC		= 0,
	RT_ADDRESS_TYPE_T_IPV4			= 1,
	RT_ADDRESS_TYPE_T_IPV6			= 2,
	__RT_ADDRESS_TYPE_T_MAX__
};

struct rt_address {
	enum rt_address_type 			type;
	union {
		struct in_addr 			ipv4;
		struct in6_addr 		ipv6;
	} addr;
};

struct rt_address_list {

};

#endif /* _ROUTER_ADDRESS_H */
