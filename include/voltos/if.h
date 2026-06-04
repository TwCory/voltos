#ifndef _VOLTOS_IF_H_
#define _VOLTOS_IF_H_

#include <nbapi/voltos/if.h>

struct interface {
	__voltos_if_index_t 	if_index;
	char 			*if_comment;

	void 			*if_user_ctx;
	void 			*if_internal_ctx;
};

#endif /* _VOLTOS_IF_H_ */
