#ifndef _VOLTOS_ACCESS_LIST_H_
#define _VOLTOS_ACCESS_LIST_H_

#include <nbapi/voltos/access-list.h>

struct access_list {
    	__voltos_acl_index_t 		acl_index;

	__voltos_acl_id_t		acl_id;
	char				acl_name[ACL_NAME_SIZE];

    	void				*acl_user_ctx;
    	void				*acl_internal_ctx;
};

struct access_list_entry {
	struct access_list		*acl_ptr;

	__voltos_ace_seqno_t		ace_seqno;
	int				ace_action;

	char				ace_remark[ACL_REMARK_NAME_SIZE];
	void				*ace_user_ctx;
	void 				*ace_internal_ctx;
};

#endif /* _VOLTOS_ACCESS_LIST_H_ */
