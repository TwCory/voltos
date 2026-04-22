// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_MPLS_LDP_H_
#define _VOLTOS_MPLS_LDP_H_

#include <voltos/types.h>

#define LDP_VERSION                                 1
#define LDP_PORT                                    646

enum {
    LDP_MSG_TYPE_T_RESERVED                         = 0x0000,
#define LDP_MSG_TYPE_RESERVED                       LDP_MSG_TYPE_T_RESERVED
    LDP_MSG_TYPE_T_NOTIFICATION                     = 0x0001,
#define LDP_MSG_TYPE_NOTIFICATION                   LDP_MSG_TYPE_T_NOTIFICATION
    LDP_MSG_TYPE_T_HELLO                            = 0x0100,
#define LDP_MSG_TYPE_HELLO                          LDP_MSG_TYPE_T_HELLO
    LDP_MSG_TYPE_T_INITIALIZATION                   = 0x0200,
#define LDP_MSG_TYPE_INITIALIZATION                 LDP_MSG_TYPE_T_INITIALIZATION
    LDP_MSG_TYPE_T_KEEPALIVE                        = 0x0201,
#define LDP_MSG_TYPE_KEEPALIVE                      LDP_MSG_TYPE_T_KEEPALIVE
    LDP_MSG_TYPE_T_CAPABILITY                       = 0x0202,
#define LDP_MSG_TYPE_CAPABILITY                     LDP_MSG_TYPE_T_CAPABILITY
    LDP_MSG_TYPE_T_ADDRESS                          = 0x0300,
#define LDP_MSG_TYPE_ADDRESS                        LDP_MSG_TYPE_T_ADDRESS
    LDP_MSG_TYPE_T_ADDRESS_WITHDRAW                 = 0x0301,
#define LDP_MSG_TYPE_ADDRESS_WITHDRAW               LDP_MSG_TYPE_T_ADDRESS_WITHDRAW
    LDP_MSG_TYPE_T_LABEL_MAPPING                    = 0x0400,
#define LDP_MSG_TYPE_LABEL_MAPPING                  LDP_MSG_TYPE_T_LABEL_MAPPING
    LDP_MSG_TYPE_T_LABEL_REQUEST                    = 0x0401,
#define LDP_MSG_TYPE_LABEL_REQUEST                  LDP_MSG_TYPE_T_LABEL_REQUEST
    LDP_MSG_TYPE_T_LABEL_WITHDRAW                   = 0x0402,
#define LDP_MSG_TYPE_LABEL_WITHDRAW                 LDP_MSG_TYPE_T_LABEL_WITHDRAW
    LDP_MSG_TYPE_T_LABEL_RELEASE                    = 0x0403,
#define LDP_MSG_TYPE_LABEL_RELEASE                  LDP_MSG_TYPE_T_LABEL_RELEASE
    LDP_MSG_TYPE_T_LABEL_ABORT_REQUEST              = 0x0404,
#define LDP_MSG_TYPE_LABEL_ABORT_REQUEST            LDP_MSG_TYPE_T_LABEL_ABORT_REQUEST
    LDP_MSG_TYPE_T_CALL_SETUP                       = 0x0500,
#define LDP_MSG_TYPE_CALL_SETUP                     LDP_MSG_TYPE_T_CALL_SETUP
    LDP_MSG_TYPE_T_CALL_RELEASE                     = 0x0501,
#define LDP_MSG_TYPE_CALL_RELEASE                   LDP_MSG_TYPE_T_CALL_RELEASE
    LDP_MSG_TYPE_T_RG_CONNECT                       = 0x0700,
#define LDP_MSG_TYPE_RG_CONNECT                     LDP_MSG_TYPE_T_RG_CONNECT
    LDP_MSG_TYPE_T_RG_DISCONNECT                    = 0x0701,
#define LDP_MSG_TYPE_RG_DISCONNECT                  LDP_MSG_TYPE_T_RG_DISCONNECT
    LDP_MSG_TYPE_T_RG_NOTIFICATION                  = 0x0702,
#define LDP_MSG_TYPE_RG_NOTIFICATION                LDP_MSG_TYPE_T_RG_NOTIFICATION
    LDP_MSG_TYPE_T_RG_APPLICATION_DATA              = 0x0703,
#define LDP_MSG_TYPE_RG_APPLICATION_DATA            LDP_MSG_TYPE_T_RG_APPLICATION_DATA
    __LDP_MSG_TYPE_T_MAX__
};

#define LDP_MSG_TYPE_MAX                            (__LDP_MSG_TYPE_T_MAX__ - 1)

enum {
    LDP_TLV_TYPE_T_
};

enum {
    LDP_FEC_TYPE_T_
};

enum {
    LDP_STATUS_CODE_T_
};

enum {
    LDP_MP_OVE_BASIC_T
};

enum {
    LDP_MP_OVE_EXT_T_
};

typedef union {
    struct in_addr                                  ipv4;
    struct in6_addr                                 ipv6;
} ldp_addr_t;

struct ldp_hdr {
    __net16                                         version;
    __net16                                         length;
    __net32                                         lsr_id;
    __net16                                         lspace_id;
} __attribute__ ((packed));

struct ldp_msg {
    __net16                                         type;
    __net16                                         length;
    __net32                                         id;
} __attribute__ ((packed));

#endif /* _VOLTOS_MPLS_LDP_H_ */