#ifndef _VOLTOS_IDB_H_
#define _VOLTOS_IDB_H_

#include <voltos/atomic.h>

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

struct idb {

};

#endif /* _VOLTOS_IDB_H_ */