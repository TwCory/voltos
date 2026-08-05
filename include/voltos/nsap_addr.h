// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/nsap_addr.h
 *
 */

#ifndef _VOLTOS_NSAP_ADDR_H
#define _VOLTOS_NSAP_ADDR_H

#include <voltos/nsap_types.h>

typedef struct {
	iso_afi_t 		afi;
	iso_idi_t 		idi;
	iso_hodsp_t 		ho_dsp;
	iso_sysid_t 		sys_id;
	iso_nsel_t 		nsel;
} nsap_addr_t;

#endif /* _VOLTOS_NSAP_ADDR_H */
