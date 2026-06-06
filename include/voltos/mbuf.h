#ifndef VOLTOS_MBUF_H
#define VOLTOS_MBUF_H

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

	__u16 					transport_header;
	__u16 					network_header;
	__u16 					link_header;

	unsigned char 				*head;
	unsigned char 				*data;
};

struct mbuf_fast_clones {

};

struct mbuf_seq_state {

};

struct mbuf_ext {

};

static inline unsigned char *mbuf_transport_header(const struct mbuf *m)
{
	return m->head + m->transport_header;
}

static inline unsigned char *mbuf_network_header(const struct mbuf *m)
{
	return m->head + m->network_header;
}

static inline unsigned char *mbuf_link_header(const struct mbuf *m)
{
	return m->head + m->link_header;
}


#endif /* VOLTOS_MBUF_H */
