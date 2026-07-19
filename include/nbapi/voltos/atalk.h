#ifndef _NBAPI_VOLTOS_ATALK_H
#define _NBAPI_VOLTOS_ATALK_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define AT_PORT_MIN			1
#define AT_PORT_RESERVED		128
#define AT_PORT_MAX			254

#define DDP_SIZE_MAX			587
#define DDP_HOP_MAX			15

struct at_addr {
	__net16 			s_net;
	__u8 				s_node;
};

struct sockaddr_at {
	__voltos_sa_family_t 		sat_family;
	__u8 				sat_port;
	struct at_addr 			sat_addr;
};

struct at_netrange {
	__u8 				nr_phase;
	__net16 			nr_first_net;
	__net16 			nr_last_net;
};

#endif /* _NBAPI_VOLTOS_ATALK_H */
