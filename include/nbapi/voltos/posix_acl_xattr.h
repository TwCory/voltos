// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/posix_acl_xattr.h
 *
 */

#ifndef _NBAPI_VOLTOS_POSIX_ACL_XATTR_H
#define _NBAPI_VOLTOS_POSIX_ACL_XATTR_H

#include <voltos/types.h>

/* Supported ACL a_version fields */
#define POSIX_ACL_XATTR_VERSION		0x0002

/* An undefined entry e_id value */
#define ACL_UNDEFINED_ID		(-1)

struct posix_acl_xattr_entry {
	__le16				e_tag;
	__le16				e_perm;
	__le32				e_id;
};

struct posix_acl_xattr_header {
	__le32				a_version;
};

#endif /* _NBAPI_VOLTOS_POSIX_ACL_XATTR_H */
