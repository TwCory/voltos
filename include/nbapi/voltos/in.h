#ifndef _NBAPI_VOLTOS_IN_H_
#define _NBAPI_VOLTOS_IN_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in_addr {
    __net32                 s_addr;
};

#define SIN_PAD_SIZE        8

struct sockaddr_in {
    __voltos_sa_family_t    sin_family;
    __net16                 sin_port;
    struct in_addr          sin_addr;
    char                    sin_zero[SIN_PAD_SIZE];
};

struct in_ifaddr {
    struct in_addr          ia_subnet;
    struct in_addr          ia_subnet_mask;

    struct sockaddr_in      ia_address;
    struct sockaddr_in      ia_broadcast;
    struct sockaddr_in      ia_socket_mask;
};

#endif /* _NBAPI_VOLTOS_IN_H_ */