// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_OSI_H_
#define _VOLTOS_OSI_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define OSI_ADDR_SIZE               20
#define OSI_SYSID_SIZE              6

struct osi_addr {
    __u8 s_addr[OSI_ADDR_SIZE];
};

#define OSI_SOCK_PAD_SIZE           6

struct sockaddr_osi {
    sa_family_t sosi_family;
    __u8 sosi_len;
    __u8 sosi_plen;
    __u8 sosi_slen;
    __u8 sosi_tlen;
    struct osi_addr sosi_addr;
    __u8 sosi_pad[OSI_SOCK_PAD_SIZE];
};

#endif /* _VOLTOS_OSI_H_ */