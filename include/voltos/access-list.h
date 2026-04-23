// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ACCESS_LIST_H_
#define _VOLTOS_ACCESS_LIST_H_

#include <voltos/types.h>

#define ACL_NAME_SIZE               64
#define ACL_REMARK_SIZE             150

typedef __voltos_acl_id_t           acl_id_t;
typedef __voltos_acl_seqno_t        acl_seqno_t;

struct access_list {
    acl_id_t                        acl_id;
    string                          acl_name[ACL_NAME_SIZE];
};

#endif /* _VOLTOS_ACCESS_LIST_H_ */