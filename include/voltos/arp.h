// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ARP_H_
#define _VOLTOS_ARP_H_

#include <voltos/types.h>

#ifndef ETHERTYPE_ARP
#define ETHERTYPE_ARP               0x0806
#endif

enum {
    ARP_OP_T_REQUEST                = 1,
    ARP_OP_T_REPLY                  = 2,
    ARP_OP_T_REQUEST_REVERSE        = 3,
    ARP_OP_T_REPLY_REVERSE          = 4,
};

enum {
    ARP_HRD_T_ETHERNET              = 1,
    ARP_HRD_T_EXP_ETHERNET          = 2,
    ARP_HRD_T_AX25                  = 3,
    ARP_HRD_T_PROTEON_TR            = 4,
    ARP_HRD_T_CHAOS                 = 5,
    ARP_HRD_T_IEEE802               = 6,
};

struct arp_hdr {
    __net16                         htype;
    __net16                         ptype;
    __u8                            hlen;
    __u8                            plen;
    __net16                         oper;
    __u_char                        *sha;
    __u_char                        *spa;
    __u_char                        *tha;
    __u_char                        *tpa;
};

#endif /* _VOLTOS_ARP_H_ */