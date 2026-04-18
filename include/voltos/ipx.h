// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IPX_H_
#define _VOLTOS_IPX_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_ipx {
    sa_family_t sipx_family;
};

#endif /* _VOLTOS_IPX_H_ */