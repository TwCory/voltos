// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/posix_acl.h
 *
 */

#ifndef _NBAPI_VOLTOS_POSIX_ACL_H
#define _NBAPI_VOLTOS_POSIX_ACL_H

#define ACL_UNDEFINED_ID		(-1)

/* a_type field in acl_user_posix_entry_t */
#define ACL_TYPE_ACCESS			(0x8000)
#define ACL_TYPE_DEFAULT		(0x4000)

/* e_tag entry in struct posix_acl_entry */
#define ACL_USER_OBJ			(0x01)
#define ACL_USER			(0x02)
#define ACL_GROUP_OBJ			(0x04)
#define ACL_GROUP			(0x08)
#define ACL_MASK			(0x10)
#define ACL_OTHER			(0x20)

/* permissions in the e_perm field */
#define ACL_READ			(0x04)
#define ACL_WRITE			(0x02)
#define ACL_EXECUTE			(0x01)

#endif /* _NBAPI_VOLTOS_POSIX_ACL_H */
