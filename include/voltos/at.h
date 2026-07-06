#ifndef _VOLTOS_AT_H
#define _VOLTOS_AT_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct at_addr {
	__net16 		s_net;
	__u8 			s_node;
};

struct sockaddr_at {
	__voltos_sa_family_t 	sat_family;
	__u8 			sat_port;
	struct at_addr 		sat_addr;
};

#endif /* _VOLTOS_AT_H */
