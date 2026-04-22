// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_MPLS_H_
#define _VOLTOS_MPLS_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define MPLS_LABEL_MAX          ((1 << 20) - 1)

struct mpls_shim_hdr {
    __net32                         label:20,
                                    exp:3,
                                    bos:1,
                                    ttl:8;
};

#define MPLS_HEADER_SIZE        sizeof(struct mpls_shim_hdr)

struct sockaddr_mpls {
    sa_family_t                 smpls_family;
    __u8                        smpls_len;
    __net16                     smpls_pad0;
    __net32                     smpls_label;
    __net32                     smpls_pad1[2];
};

struct rt_mpls {
    __net32                     mpls_label;
    __u8                        mpls_operation;
    __u8                        mpls_exp;
};

#endif /* _VOLTOS_MPLS_H_ */