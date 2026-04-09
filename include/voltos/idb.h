#ifndef _VOLTOS_IDB_H_
#define _VOLTOS_IDB_H_

typedef unsigned long           __voltos_idb_index_t;
typedef unsigned int            __voltos_idb_sort_t;

struct idb {
    __voltos_idb_index_t        idb_index;
    __voltos_idb_sort_t         idb_sort_index;
};

#endif /* _VOLTOS_IDB_H_ */