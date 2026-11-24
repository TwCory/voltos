// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/utsname.h
 *
 */

#ifndef _NBAPI_VOLTOS_UTSNAME_H
#define _NBAPI_VOLTOS_UTSNAME_H

#define UTS_LEN		(64)

struct __voltos_utsname {
	char sysname[UTS_LEN + 1];
	char nodename[UTS_LEN + 1];
	char release[UTS_LEN + 1];
	char version[UTS_LEN + 1];
	char machine[UTS_LEN + 1];
	char domainname[UTS_LEN + 1];
};

#endif /* _NBAPI_VOLTOS_UTSNAME_H */
