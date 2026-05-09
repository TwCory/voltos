#ifndef _VOLTOS_ATOMIC_LIST_H_
#define _VOLTOS_ATOMIC_LIST_H_

#include <voltos/atomic.h>

struct atomic_list_node {
	__atomic_u_intptr		next;
};

struct atomic_list_head {
	__atomic_u_intptr		first;
	__atomic_u_intptr		last;
	__atomic_u_size			counter;
};

#define __atomic_list_init(var)		{ }

#endif /* _VOLTOS_ATOMIC_LIST_H_ */
