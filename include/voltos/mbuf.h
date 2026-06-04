#ifndef _VOLTOS_MBUF_H_
#define _VOLTOS_MBUF_H_

#include <voltos/idb.h>
#include <voltos/list.h>
#include <voltos/rbtree.h>
#include <voltos/types.h>

#include <net/socket.h>

struct mbuf_head {

};

struct mbuf_common_ctx {
	__u8 flags;
	__u8 meta_len;
};

struct mbuf {
	union {
		struct {
			struct mbuf 		*next;
			struct mbuf 		*prev;

			union {
				struct idb 	*idb_ptr;
				unsigned long 	idb_scratch;
			};
		};

		struct rb_node 			rb_tree;
		struct list_head 		list;
	};

	struct socket 				*socket;
};

struct mbuf_fast_clones {

};

struct mbuf_seq_state {

};

struct mbuf_ext {

};

#endif /* _VOLTOS_MBUF_H_ */
