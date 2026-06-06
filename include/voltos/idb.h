#ifndef VOLTOS_IDB_H
#define VOLTOS_IDB_H

#include <voltos/if.h>
#include <nbapi/voltos/idb.h>

struct idb_hw_addr {

};

struct idb_hw_addr_list {

};

struct idb_queue {

};

struct idb_path {

};

struct idb_path_stack {

};

struct idb_path_ctx {

};

struct idb_bpf {

};

struct idb_ops {

};

struct idb {
	__voltos_idb_idx_t 		idb_index;
	__voltos_idb_sidx_t 		idb_sort_index;

	struct interface 		*if_ptr;
};

#endif /* VOLTOS_IDB_H */
