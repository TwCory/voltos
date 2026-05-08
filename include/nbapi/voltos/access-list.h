// SPDX-License-Identifier: BSD-3-Clause

/*
 *	Access Control Lists (ACLs)
 *
 *
 */

#ifndef _NBAPI_VOLTOS_ACCESS_LIST_H_
#define _NBAPI_VOLTOS_ACCESS_LIST_H_

#define ACL_NAME_SIZE                       32
#define ACL_REMARK_NAME_SIZE                128

#define ACL_ID_IPV4_STANDARD_MIN            1
#define ACL_ID_IPV4_STANDARD_MAX            99

#define ACL_ID_IPV4_EXTENDED_MIN            100
#define ACL_ID_IPV4_EXTENDED_MAX            199

#define ACL_ID_IPV4_STANDARD_EXP_MIN        1300
#define ACL_ID_IPV4_STANDARD_EXP_MAX        1999

#define ACL_ID_IPV4_EXTENDED_EXP_MIN        2000
#define ACL_ID_IPV4_EXTENDED_EXP_MAX        2699

/* Legacy ACL Number/ID */
typedef unsigned short                      __voltos_acl_id_t;

typedef unsigned int                        __voltos_acl_index_t;
typedef unsigned long                       __voltos_ace_seqno_t;

#endif /* _NBAPI_VOLTOS_ACCESS_LIST_H_ */
