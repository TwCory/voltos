#ifndef _NBAPI_VOLTOS_IPX_H_
#define _NBAPI_VOLTOS_IPX_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define IPX_NODE_SIZE       6

struct sockaddr_ipx {
    __voltos_sa_family_t    sipx_family;
    __net16                 sipx_port;
    __net32                 sipx_network;
    unsigned char           sipx_node[IPX_NODE_SIZE];
    __u8                    sipx_type;
    char                    sipx_zero;
};

#endif /* _NBAPI_VOLTOS_IPX_H_ */