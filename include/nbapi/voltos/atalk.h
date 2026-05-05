#ifndef _NBAPI_VOLTOS_ATALK_H_
#define _NBAPI_VOLTOS_ATALK_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define ATALK_PORT_MIN          1
#define ATALK_PORT_MAX          254
#define ATALK_PORT_RESERVED     128

#define DDP_SIZE_MAX            587
#define DDP_HOPS_MAX            15

struct atalk_addr {
    __net16                     s_net;
    __u8                        s_node;
};

#define SAT_ZERO_SIZE           8

struct sockaddr_at {
    __voltos_sa_family_t        sat_family;
    __u8                        sat_port;
    struct atalk_addr           sat_addr;
    char                        sat_zero[SAT_ZERO_SIZE];
};

struct atalk_net_range {
    __u8                        nr_phase;
    __net16                     nr_first_net;
    __net16                     nr_last_net;
};

#endif /* _NBAPI_VOLTOS_ATALK_H_ */