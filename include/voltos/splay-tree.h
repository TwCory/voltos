// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/splay-tree.h
 *
 * 	Splay Trees
 */

#ifndef _VOLTOS_SPLAY_TREE_H
#define _VOLTOS_SPLAY_TREE_H

struct splay_node {

};

struct splay_root {

};

struct splay_root_cached {

};

struct splay_root_linked {

};

#define SPLAY_ROOT
#define SPLAY_ROOT_CACHED
#define SPLAY_ROOT_LINKED

#define splay_parent(r)

#define splay_entry(ptr, type, member)

#define SPLAY_EMPTY_ROOT(root)

#define SPLAY_EMPTY_NODE(node)

#define SPLAY_CLEAR_NODE(node)

#define SPLAY_EMPTY_LINKED_NODE(lnode)

#define SPLAY_CLEAR_LINKED_NODE(lnode)

#define splay_entry_safe(ptr, type, member)

#define splay_tree_postorder_for_each_entry_safe(pos, n, root, field)

#define splay_first_cached(root)

#define splay_for_each(node, key, tree, cmp)

#endif /* _VOLTOS_SPLAY_TREE_H */
