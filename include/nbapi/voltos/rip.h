#ifndef _NBAPI_VOLTOS_RIP_H
#define _NBAPI_VOLTOS_RIP_H

#include <voltos/in.h>
#include <voltos/types.h>

#define RIP_V1			1
#define RIP_V2			2

#define RIP_PORT		520

struct rip_rte {
	__u16 			family;
	__u16 			route_tag;
	struct in_addr 		prefix;
	struct in_addr 		netmask;
	struct in_addr 		next_hop;
	__u32 			metric;
};

struct rip_msg {
	__u8 			command;
	__u8 			version;
	__u8 			pad0;
	__u8 			pad1;
	struct rip_rte 		rte[1];
};

#endif /* _NBAPI_VOLTOS_RIP_H */
