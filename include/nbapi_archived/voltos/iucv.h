// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/iucv.h
 *
 */

#ifndef _NBAPI_VOLTOS_IUCV_H
#define _NBAPI_VOLTOS_IUCV_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IUCV_NODE_ID_SIZE		8
#define IUCV_USER_ID_SIZE		8
#define IUCV_NAME_SIZE			8

struct iucv_addr {
	__u32				s_addr;
};

struct sockaddr_iucv {
	__voltos_sa_family_t		siucv_family;
	__u16				siucv_port;
	struct iucv_addr		siucv_addr;
	char				siucv_node_id[IUCV_NODE_ID_SIZE];
	char				siucv_user_id[IUCV_USER_ID_SIZE];
	char				siucv_name[IUCV_NAME_SIZE];
};

#endif /* _NBAPI_VOLTOS_IUCV_H */
