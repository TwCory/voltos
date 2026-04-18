// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IN6_H_
#define _VOLTOS_IN6_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in6_addr {
    __net128 s6_addr;
};

struct sockaddr_in6 {
    sa_family_t sin6_family;
};

#endif /* _VOLTOS_IN6_H_ */