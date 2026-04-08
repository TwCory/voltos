#ifndef _VOLTOS_IN_H_
#define _VOLTOS_IN_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in_addr {
    in_addr_t               s_addr;
};

struct sockaddr_in {
    sa_family_t             sin_family;
    in_port_t               sin_port;
    struct in_addr          sin_addr;
};

#endif /* _VOLTOS_IN_H_ */