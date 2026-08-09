// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_xdp.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_XDP_H
#define _NBAPI_VOLTOS_IF_XDP_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_xdp {
	__voltos_sa_family_t		sxdp_family;
	__u16				sxdp_flags;
	__u32				sxdp_ifindex;
	__u32				sxdp_queue_id;
	__u32				sxdp_shared_umem_fd;
};

#endif /* _NBAPI_VOLTOS_IF_XDP_H */
