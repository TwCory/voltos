#ifndef _NBAPI_VOLTOS_DHCP_H_
#define _NBAPI_VOLTOS_DHCP_H_

#include <voltos/types.h>

#define DHCP_SERVER_PORT	67
#define DHCP_CLIENT_PORT	68

#define DHCP_MTU_MIN		576
#define DHCP_MTU_MAX		1500

struct dhcp_pkt {
	__u8 			op;
	__u8 			htype;
	__u8 			hlen;
	__u8 			hops;
	__net32 		xid;
	__net16 		secs;
	__net16 		flags;
	__net32 		ciaddr;
	__net32 		yiaddr;
	__net32 		siaddr;
	__net32 		giaddr;
	__u_char 		*chaddr;
	__char 			*sname;
	__char 			*file;
	__u_char 		*options;
};

#endif /* _NBAPI_VOLTOS_DHCP_H_ */
