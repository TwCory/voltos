// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_hippi.h
 *
 *	High-Performance Parallel Interfaces (HIPPI)
 */

#ifndef _NBAPI_VOLTOS_IF_HIPPI_H
#define _NBAPI_VOLTOS_IF_HIPPI_H

#define HIPPI_ADDR_SIZE			6
#define HIPPI_HDR_SIZE		
#define HIPPI_DATA_SIZE			65280
#define HIPPI_FRAME_SIZE
#define HIPPI_OUI_SIZE			3

#define HIPPI_EXTENDED_SAP		0xAA
#define HIPPI_UI_CMD			0x03

struct hippi_fp_hdr {

} __attribute__ ((packed));

struct hippi_le_hdr {

} __attribute__ ((packed));

struct hippi_snap_hdr {

} __attribute__ ((packed));

struct hippi_hdr {
	struct hippi_fp_hdr 		fp;
	struct hippi_le_hdr 		le;
	struct hippi_snap_hdr 		snap;
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_IF_HIPPI_H */
