// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IN_H_
#define _VOLTOS_IN_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in_addr {
    __net32 s_addr;
};

struct sockaddr_in {
    sa_family_t sin_family;
    __net16 sin_port;
    struct in_addr sin_addr;
};

#endif /* _VOLTOS_IN_H_ */