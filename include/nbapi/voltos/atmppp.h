// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atmppp.h
 *
 * 	Point-to-Point Protocol (PPP) over ATM (PPPoA)
 */

#ifndef _NBAPI_VOLTOS_ATMPPP_H
#define _NBAPI_VOLTOS_ATMPPP_H

enum pppoa_encapsulation {
	PPPOA_ENCAPSULATION_AUTODETECT		= 0,
	PPPOA_ENCAPSULATION_VC			= 1,
	PPPOA_ENCAPSULATION_LLC			= 2,
	__PPPOA_ENCAPSULATION_MAX__
};

#define PPPOA_ENCAPSULATION_MAX			(__PPPOA_ENCAPSULATION_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ATMPPP_H */
