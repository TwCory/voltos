// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_mfr.h
 *
 * 	Multilink Frame Relay (MFR) Interfaces
 */

#ifndef _VOLTOS_IF_MFR_H
#define _VOLTOS_IF_MFR_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_mfr.h>

struct mfr_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_MFR_H */
