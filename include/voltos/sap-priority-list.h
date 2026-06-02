#ifndef _VOLTOS_SAP_PRIORITY_LIST_H_
#define _VOLTOS_SAP_PRIORITY_LIST_H_

#include <nbapi/voltos/sap-priority-list.h>

struct sap_priority_list {
	__voltos_sap_plist_idx_t 	index;
	char 				name[SAP_PRIORITY_LIST_NAME_SIZE];
};

#endif /* _VOLTOS_SAP_PRIORITY_LIST_H_ */
