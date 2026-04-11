#ifndef _VOLTOS_ATALK_H_
#define _VOLTOS_ATALK_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct atalk_addr {
    __net16                     s_net;
    __u8                        s_node;
};

struct sockaddr_at {
    sa_family_t                 sat_family;
    __u8                        sat_port;
    struct atalk_addr           sat_addr;
    char                        sat_zero[8];
};

#endif /* _VOLTOS_ATALK_H_ */