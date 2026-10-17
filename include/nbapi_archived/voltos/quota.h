// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/quota.h
 *
 */

#ifndef _NBAPI_VOLTOS_QUOTA_H
#define _NBAPI_VOLTOS_QUOTA_H

enum {
	QUOTA_TYPE_T_USER	= 0,
#define QUOTA_TYPE_USER		QUOTA_TYPE_T_USER
	QUOTA_TYPE_T_GROUP	= 1,
#define QUOTA_TYPE_GROUP	QUOTA_TYPE_T_GROUP
	QUOTA_TYPE_T_PROJECT	= 2,
#define QUOTA_TYPE_PROJECT	QUOTA_TYPE_T_PROJECT
	__QUOTA_TYPE_T_MAX__
};

#define QUOTA_TYPE_MAX		(__QUOTA_TYPE_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_QUOTA_H */
