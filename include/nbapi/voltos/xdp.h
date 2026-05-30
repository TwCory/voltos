#ifndef _NBAPI_VOLTOS_XDP_H_
#define _NBAPI_VOLTOS_XDP_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_xdp {
	__voltos_sa_family_t 	sxdp_family;
	__u16 			sxdp_flags;
	__u32 			sxdp_ifindex;
	__u32 			sxdp_queue_id;
	__u32 			sxdp_shared_umem_fd;
};

#endif /* _NBAPI_VOLTOS_XDP_H_ */
