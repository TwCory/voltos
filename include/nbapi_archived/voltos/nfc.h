// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/nfc.h
 *
 * 	Nearfield Communication (NFC) Socket Family
 */

#ifndef _NBAPI_VOLTOS_NFC_H
#define _NBAPI_VOLTOS_NFC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_nfc {
	__voltos_sa_family_t		snfc_family;
	__u32				snfc_dev_idx;
	__u32				snfc_target_idx;
	__u32				snfc_protocol;
};

#endif /* _NBAPI_VOLTOS_NFC_H */
