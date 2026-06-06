#ifndef VOLTOS_SAP_PRIORITY_LIST_H
#define VOLTOS_SAP_PRIORITY_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/sap-priority-list.h>

struct sap_priority_list {
	__voltos_sap_plist_idx_t 	index;
	char 				name[SAP_PRIORITY_LIST_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_SAP_PRIORITY_LIST_H */
