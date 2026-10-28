// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/acct_template.h
 *
 * 	Accounting Templates
 */

#ifndef _VOLTOS_ACCT_TEMPLATE_H
#define _VOLTOS_ACCT_TEMPLATE_H

#include <voltos/refcount.h>

struct acct_template {
	const char 		*name;
	refcount_t 		ref_count;
};

#endif /* _VOLTOS_ACCT_TEMPLATE_H */
