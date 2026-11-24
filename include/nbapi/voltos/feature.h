// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/feature.h
 *
 * 	Feature Manager
 */

#ifndef _NBAPI_VOLTOS_FEATURE_H
#define _NBAPI_VOLTOS_FEATURE_H

enum feature_state {
	FEATURE_STATE_UNSPEC		= 0,
	FEATURE_STATE_DISABLE		= 1,
	FEATURE_STATE_ENABLE		= 2,
	__FEATURE_STATE_MAX__
};

#define FEATURE_STATE_MAX		(__FEATURE_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_FEATURE_H */
