#ifndef _NBAPI_VOLTOS_DHCP_H
#define _NBAPI_VOLTOS_DHCP_H

#include <voltos/in.h>
#include <voltos/types.h>

#define DHCP_SERVER_PORT		67
#define DHCP_CLIENT_PORT		68

#define DHCP_UDP_OVERHEAD_SIZE		(20 + 8)
#define DHCP_FIXED_NON_UDP_SIZE		236
#define DHCP_FIXED_SIZE			(DHCP_FIXED_NON_UDP_SIZE + DHCP_UDP_OVERHEAD_SIZE)

#define DHCP_MTU_SIZE_MIN		576
#define DHCP_MTU_SIZE_MAX		1500

#define DHCP_OPTION_SIZE_MIN		(DHCP_MTU_SIZE_MIN - DHCP_FIXED_SIZE)
#define DHCP_OPTION_SIZE_MAX		(DHCP_MTU_SIZE_MAX - DHCP_FIXED_SIZE)

#define DHCP_CHADDR_SIZE		16
#define DHCP_SNAME_SIZE			64
#define DHCP_FILE_SIZE			128

#define DHCP_POOL_NAME_SIZE		32

struct dhcp_msg {
	__u8 				op;
	__u8 				htype;
	__u8 				hlen;
	__u8 				hops;
	__net32 			xid;
	__net16 			secs;
	__net16 			flags;
	struct in_addr 			ciaddr;
	struct in_addr 			yiaddr;
	struct in_addr 			siaddr;
	struct in_addr 			giaddr;
	unsigned char 			chaddr[DHCP_CHADDR_SIZE];
	char 				sname[DHCP_SNAME_SIZE];
	char 				file[DHCP_FILE_SIZE];
};

#define DHCP_OPTION_PAD				0
#define DHCP_OPTION_SUBNET_MASK			1
#define DHCP_OPTION_TIME_OFFSET			2
#define DHCP_OPTION_ROUTERS			3
#define DHCP_OPTION_TIME_SERVERS		4
#define DHCP_OPTION_NAME_SERVERS		5
#define DHCP_OPTION_DNS_SERVERS			6
#define DHCP_OPTION_LOG_SERVERS			7
#define DHCP_OPTION_COOKIE_SERVERS		8
#define DHCP_OPTION_LPR_SERVERS			9
#define DHCP_OPTION_IMPRESS_SERVERS		10
#define DHCP_OPTION_RLP_SERVERS			11
#define DHCP_OPTION_HOSTNAME			12
#define DHCP_OPTION_BOOTFILE_SIZE		13

#define DHCP_OPTION_DOMAIN_NAME			15

#endif /* _NBAPI_VOLTOS_DHCP_H */
