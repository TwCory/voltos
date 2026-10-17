// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/genetlink.h
 *
 * 	Generic Netlink
 */

#ifndef _NBAPI_VOLTOS_GENETLINK_H
#define _NBAPI_VOLTOS_GENETLINK_H

#include <voltos/types.h>

struct genl_msg_hdr {
	__u8 		command;
	__u8 		version;
	__u16 		reserved;
};

#endif /* _NBAPI_VOLTOS_GENETLINK_H */
