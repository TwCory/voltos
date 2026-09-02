// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/sap-priority-list.h
 *
 */

#ifndef _VOLTOS_SAP_PRIORITY_LIST_H
#define _VOLTOS_SAP_PRIORITY_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/sap-priority-list.h>

struct sap_priority_list {
	const char 			name[SAP_PRIORITY_LIST_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_SAP_PRIORITY_LIST_H */
