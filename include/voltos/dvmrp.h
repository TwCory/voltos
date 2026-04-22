// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_DVMRP_H_
#define _VOLTOS_DVMRP_H_

#include <voltos/types.h>

#define DVMRP_VERSION                           1
#define DVMRP_TYPE                              3

enum {
    DVMRP_SUBTYPE_T_RESPONSE                    = 1,
#define DVMRP_SUBTYPE_RESPONSE                  DVMRP_SUBTYPE_T_RESPONSE
    DVMRP_SUBTYPE_T_REQUEST                     = 2,
#define DVMRP_SUBTYPE_REQUEST                   DVMRP_SUBTYPE_T_REQUEST
    DVMRP_SUBTYPE_T_NON_MEMBERSHIP_REPORT       = 3,
#define DVMRP_SUBTYPE_NON_MEMBERSHIP_REPORT     DVMRP_SUBTYPE_T_NON_MEMBERSHIP_REPORT
    DVMRP_SUBTYPE_T_NON_MEMBERSHIP_CANCEL       = 4,
#define DVMRP_SUBTYPE_NON_MEMBERSHIP_CANCEL     DVMRP_SUBTYPE_T_NON_MEMBERSHIP_CANCEL
    __DVMRP_SUBTYPE_T_MAX__
};

#define DVMRP_SUBTYPE_MAX                       (__DVMRP_SUBTYPE_T_MAX__ - 1)

struct dvmrp_hdr {
    __u8                                            version:4,
                                                    type:4;
    __u8                                        subtype;
    __csum16                                    checksum;
};

#endif /* _VOLTOS_DVMRP_H_ */