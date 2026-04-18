// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_OSI_H_
#define _VOLTOS_OSI_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_osi {
    sa_family_t sosi_family;
};

#endif /* _VOLTOS_OSI_H_ */