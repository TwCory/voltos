// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_fc.h
 *
 *	Fibre Channel Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_FC_H
#define _NBAPI_VOLTOS_IF_FC_H

#include <voltos/types.h>

#define FC_ADDR_LEN		(6)
#define FC_HDR_LEN		(sizeof(struct fc_hdr_metadata) + sizeof(struct fc_llc))
#define FC_ID_LEN		(3)

#define FC_EXT_SAP		0xAA
#define FC_UI_CMD		0x03

struct fc_hdr_metadata {
	unsigned char		dst[FC_ADDR_LEN];
	unsigned char		src[FC_ADDR_LEN];
};

struct fc_llc {
	__u8 			dst_sap;
	__u8 			src_sap;
	__u8 			llc_control;
	__u8 			protocol_id[3];
	__net16 		ethertype;
};

#endif /* _NBAPI_VOLTOS_IF_FC_H */
