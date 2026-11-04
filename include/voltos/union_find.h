// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/union_find.h
 *
 */

#ifndef _VOLTOS_UNION_FIND_H
#define _VOLTOS_UNION_FIND_H

struct uf_node {
	struct uf_node 		*parent;
	unsigned int 		rank;
};

#define UF_NODE_INIT(node)	{ .parent = &node, .rank = 0 }

static inline void uf_node_init(struct uf_node *node)
{
	node->parent = node;
	node->rank = 0;
}

struct uf_node *uf_find(struct uf_node *node);

void uf_union(struct uf_node *node1, struct uf_node *node2);

#endif /* _VOLTOS_UNION_FIND_H */
