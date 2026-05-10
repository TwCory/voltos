#ifndef _VOLTOS_IDB_H_
#define _VOLTOS_IDB_H_

#include <voltos/atomic.h>
#include <voltos/idb_features.h>
#include <voltos/list.h>
#include <voltos/rbtree.h>
#include <nbapi/voltos/idb.h>

struct atalk_interface;
struct clns_interface;
struct decnet_interface;
struct ip_interface;
struct ipv6_interface;
struct ipx_interface;
struct mpls_interface;

#define SNPA_SIZE_MAX			20

struct idb_snpa_entry {
	idb_snpa_type_t 		snpa_type;
	union {
		unsigned char 		ieee48[6];
		unsigned char 		ieee16[2];
		unsigned char		xerox;
		unsigned char		x121;
		unsigned char		cisco_hdlc;
		unsigned char		cisco_mlapb;
		unsigned char		lapb;
		unsigned char		smds48[6];
	};
};

struct idb_snpa_list {
	struct list_head		list;
	int 				count;
	struct rb_root			tree;
};

#define __idb_statistic(var_name)       \
    union {                             \
        unsigned long   var_name;       \
        __atomic_long   __##var_name;   \
    }
struct idb_stats {
    __idb_statistic(rx_packets);
    __idb_statistic(tx_packets);
    __idb_statistic(rx_octets);
    __idb_statistic(tx_octets);
};
#undef __idb_statistic

struct idb {
	__voltos_idb_index_t 		index;
	__voltos_idb_sort_t 		sort_index;

	unsigned int			mtu;
	unsigned long			state;
	unsigned int			flags;
	idb_feature_t			features;
	idb_type_t 			type;

	unsigned int			mtu_min_size;
	unsigned int			mtu_max_size;

	struct idb_stats		stats;

	struct atalk_interface		*atalk_ptr;
	struct clns_interface		*clns_ptr;
	struct decnet_interface		*decnet_ptr;
	struct ip_interface		*ip_ptr;
	struct ipv6_interface		*ipv6_ptr;
	struct ipx_interface		*ipx_ptr;
	struct mpls_interface		*mpls_ptr;
};

#endif /* _VOLTOS_IDB_H_ */
