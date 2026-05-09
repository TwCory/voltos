#ifndef _VOLTOS_IDB_H_
#define _VOLTOS_IDB_H_

#include <voltos/atomic.h>
#include <voltos/list.h>
#include <nbapi/voltos/idb.h>

#define __idb_statistic(var_name)       \
    union {                             \
        unsigned long   var_name;       \
        __atomic_long   __##var_name;   \
    }
struct idb_stats {
    __idb_statistic(rx_packets);
    __idb_statistic(tx_packets);
    __idb_statistic(rx_octets);
    __idb_statistic(tx_octets);
};
#undef __idb_statistic

struct idb_snpa_entry {
	idb_snpa_type_t 		snpa_type;
	union {
		unsigned char 		ieee48[6];
		unsigned char 		ieee16[2];
	};
};

struct idb_snpa_list {
	int 				count;
};

struct idb {
	__voltos_idb_index_t 		idb_index;
	__voltos_idb_sort_t 		idb_sort_index;

	idb_type_t 			idb_type;

	
};

#endif /* _VOLTOS_IDB_H_ */
