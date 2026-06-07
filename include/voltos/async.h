#ifndef VOLTOS_ASYNC_H
#define VOLTOS_ASYNC_H

#include <voltos/device.h>
#include <voltos/list.h>
#include <voltos/numa.h>
#include <voltos/types.h>

#ifndef __async
#define __async
#endif /* __async */

#ifndef __async_inline
#define __async_inline			__async inline
#endif

typedef unsigned long 			async_key_t;

struct async_namespace {
	async_key_t 			ns_key;
	void 				*ns_buffer;
};

#endif /* VOLTOS_ASYNC_H */
