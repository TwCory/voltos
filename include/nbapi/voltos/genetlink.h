// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/genetlink.h
 *
 * 	Generic Netlink
 */

#ifndef _NBAPI_VOLTOS_GENETLINK_H
#define _NBAPI_VOLTOS_GENETLINK_H

#define GENL_NAME_SIZE		(16)

#define GENL_ID_MIN		1
#define GENL_ID_MAX		1024

struct genl_msg_hdr {
	__u8 			command;
	__u8 			version;
	__u16 			reserved;
};

#endif /* _NBAPI_VOLTOS_GENETLINK_H */
