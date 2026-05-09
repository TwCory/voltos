#ifndef _VOLTOS_ACCESS_LIST_H_
#define _VOLTOS_ACCESS_LIST_H_

#include <nbapi/voltos/access-list.h>

struct access_list {
    __voltos_acl_index_t 	acl_index;

    void			*acl_user_ctx;
    void			*acl_internal_ctx;
};

#endif /* _VOLTOS_ACCESS_LIST_H_ */
