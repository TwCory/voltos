// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/acct.h
 *
 *	Accounting Definitions
 */

#ifndef _NBAPI_VOLTOS_ACCT_H
#define _NBAPI_VOLTOS_ACCT_H

#include <voltos/types.h>

typedef __u16 			acct_comp1_t;
typedef __u32 			acct_comp2_t;

struct acct {
	char 			ac_flag;
	char 			ac_version;
};

#endif /* _NBAPI_VOLTOS_ACCT_H */
