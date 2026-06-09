#ifndef VOLTOS_MPLS_LABEL_H
#define VOLTOS_MPLS_LABEL_H

#include <voltos/mpls.h>
#include <voltos/nexthop.h>

struct mpls_label {
	struct mpls 		*mpls;
	struct next_hop 	*nexthop;
};

#endif /* VOLTOS_MPLS_LABEL_H */
