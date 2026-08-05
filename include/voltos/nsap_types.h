// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/nsap_types.h
 *
 */

#ifndef _VOLTOS_NSAP_TYPES_H
#define _VOLTOS_NSAP_TYPES_H

#include <voltos/types.h>

#define NSAP_ADDRESS_SIZE_MIN		1
#define NSAP_ADDRESS_SIZE_MAX		20

#define ISO_HO_DSP_SIZE			12
#define ISO_SYSTEM_ID_SIZE		6

typedef __u8				iso_afi_t;
typedef __u16				iso_idi_t;

typedef struct {
	__u8				bytes[ISO_HO_DSP_SIZE];
} iso_hodsp_t;

typedef struct {
	__u8 				bytes[ISO_SYSTEM_ID_SIZE];
} iso_sysid_t;

typedef __u8				iso_nsel_t;

#endif /* _VOLTOS_NSAP_TYPES_H */
