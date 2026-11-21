// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_fc.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_FC_H
#define _NBAPI_VOLTOS_IF_FC_H

#define FC_ADDR_LEN		6
#define FC_HDR_LEN
#define FC_ID_LEN		3

struct fc_hdr_metadata {
	unsigned char		dst_addr[FC_ADDR_LEN];
	unsigned char		src_addr[FC_ADDR_LEN];
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_IF_FC_H */
