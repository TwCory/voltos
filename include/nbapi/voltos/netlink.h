// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/netlink.h
 *
 */

#ifndef _NBAPI_VOLTOS_NETLINK_H
#define _NBAPI_VOLTOS_NETLINK_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct nl_msg_hdr {

};

struct sockaddr_nl {
	__voltos_sa_family_t		snl_family;
	__u16				snl_pad;
	__u32				snl_pid;
	__u32				snl_groups;
};

#endif /* _NBAPI_VOLTOS_NETLINK_H */
