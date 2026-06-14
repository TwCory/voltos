#ifndef NBAPI_VOLTOS_ATALK_H
#define NBAPI_VOLTOS_ATALK_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define ATALK_ETHERTYPE			0x809B

#define ATALK_DOMAIN_NAME_SIZE		36
#define ATALK_ZONE_NAME_SIZE		36

struct atalk_addr {
	__net16 			s_net;
	__u8 				s_node;
};

struct sockaddr_at {
	__voltos_sa_family_t 		sat_family;
	__u8 				sat_port;
	struct atalk_addr 		sat_addr;
	char 				sat_zero[8];
};

#endif /* NBAPI_VOLTOS_ATALK_H */
