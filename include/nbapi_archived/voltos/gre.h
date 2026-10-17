// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/gre.h
 *
 *	Generic Routing Encapsulation (GRE)
 */

#ifndef _NBAPI_VOLTOS_GRE_H
#define _NBAPI_VOLTOS_GRE_H

enum {
	GRE_VERSION_T_GRE 			= 0,
#define GRE_VERSION_GRE				GRE_VERSION_T_GRE
	GRE_VERSION_T_ENHANCED_GRE 		= 1,
#define GRE_VERSION_ENHANCED_GRE		GRE_VERSION_T_ENHANCED_GRE
	__GRE_VERSION_T_MAX__
};

#define GRE_VERSION_MAX				(__GRE_VERSION_T_MAX__ - 1)

struct gre_hdr {

};

#endif /* _NBAPI_VOLTOS_GRE_H */
