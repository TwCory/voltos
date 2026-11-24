// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mrtree.h
 *
 *	Maximally Redundant Tree
 */

#ifndef _NBAPI_VOLTOS_MRTREE_H
#define _NBAPI_VOLTOS_MRTREE_H

enum {
	MRTREE_PROFILE_ID_T_DEFAULT	= 0,
#define MRTREE_PROFILE_ID_DEFAULT	MRTREE_PROFILE_ID_T_DEFAULT
	__MRTREE_PROFILE_ID_T_MAX__
};

#define MRTREE_PROFILE_ID_MAX		(__MRTREE_PROFILE_ID_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_MRTREE_H */
