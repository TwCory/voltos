#ifndef _VOLTOS_ACCESS_LIST_H_
#define _VOLTOS_ACCESS_LIST_H_

#include <voltos/types.h>

#define ACCESS_LIST_NAME_SIZE		24

typedef __voltos_acl_id_t 			acl_id_t;
typedef __voltos_acl_seqno_t 		acl_seqno_t;

typedef struct {
	acl_id_t 						acl_id;
	string 							acl_name[ACCESS_LIST_NAME_SIZE];
} access_list_t;

typedef struct {
	acl_seqno_t 					ace_seqno;
} access_list_entry_t;

#endif /* _VOLTOS_ACCESS_LIST_H_ */