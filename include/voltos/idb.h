#ifndef _VOLTOS_IDB_H_
#define _VOLTOS_IDB_H_

#include <voltos/if.h>
#include <voltos/types.h>

typedef __voltos_idb_index_t    idb_index_t;
typedef __voltos_idb_sort_t     idb_sort_t;

typedef enum {
	IDB_TYPE_T_UNKNOWN          = 0,
    IDB_TYPE_T_HARDWARE         = 1,
    IDB_TYPE_T_SOFTWARE         = 2,
    __IDB_TYPE_T_MAX__
} idb_type_t;

typedef enum {
	IDB_STATE_T_UNKNOWN         = 0,
	IDB_STATE_T_DOWN            = 1,
	IDB_STATE_T_UP              = 2,
	IDB_STATE_T_REMOVE          = 3,
	__IDB_STATE_T_MAX__
} idb_state_t;



#endif /* _VOLTOS_IDB_H_ */