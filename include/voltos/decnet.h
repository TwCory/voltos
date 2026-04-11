#ifndef _VOLTOS_DECNET_H_
#define _VOLTOS_DECNET_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define DECNET_ADDR_LEN_MAX             2
#define DECNET_OBJ_NAME_LEN_MAX         16

struct decnet_naddr {
    __le16                              a_len;
    __u8                                a_addr[DECNET_ADDR_LEN_MAX];
};

struct sockaddr_dn {
    sa_family_t                         sdn_family;
    __u8                                sdn_flags;
    __u8                                sdn_objnum;
    __le16                              sdn_objnamel;
    __u8                                sdn_objname[DECNET_OBJ_NAME_LEN_MAX];
    struct decnet_naddr                 sdn_addr;
};

#endif /* _VOLTOS_DECNET_H_ */