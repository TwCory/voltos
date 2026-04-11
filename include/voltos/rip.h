#ifndef _VOLTOS_RIP_H_
#define _VOLTOS_RIP_H_

#include <voltos/in.h>
#include <voltos/types.h>

#define RIP_PORT                520

#define RIP_METRIC_MIN          1
#define RIP_METRIC_MAX          15
#define RIP_METRIC_INFINITY     16

typedef enum {
	RIP_VERSION_T_UNSPEC		= 0,
	RIP_VERSION_T_V1			= 1,
	RIP_VERSION_T_V2			= 2,
	__RIP_VERSION_T_MAX__
} rip_version_t;

struct rip_rte {
	__net16                     family;
	__net16                     route_tag;
	struct in_addr              address;
	struct in_addr              netmask;
	struct in_addr              nexthop;
	__net32                     metric;
};

struct rip_pkt {
	__u8                        command;
	__u8                        version;
	__u8                        pad0;
	__u8                        pad1;
	struct rip_rte              rte[1];
};

#endif /* _VOLTOS_RIP_H_ */