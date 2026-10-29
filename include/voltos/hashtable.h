// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/hashtable.h
 *
 * 	Hash Tables
 */

#ifndef _VOLTOS_HASHTABLE_H
#define _VOLTOS_HASHTABLE_H

#ifndef DEFINE_HASHTABLE
#define DEFINE_HASHTABLE(name, bits)
#endif /* DEFINE_HASHTABLE */

#ifndef DEFINE_READ_MOSTLY_HASHTABLE
#define DEFINE_READ_MOSTLY_HASHTABLE(name, bits)
#endif /* DEFINE_READ_MOSTLY_HASHTABLE */

#ifndef DECLARE_HASHTABLE
#define DECLARE_HASHTABLE(name, bits)
#endif /* DECLARE_HASHTABLE */

#define HASH_SIZE(name)
#define HASH_BITS(name)

#define hash_min(val, bits)
#define hash_init(hashtable)
#define hash_add(hashtable, node, key)
#define hash_add_cow(hashtable, node, key)
#define hash_add_rcu(hashtable, node, key)
#define hash_empty(hashtable)
#define hash_for_each(name, bkt, obj, member)
#define hash_for_each_cow(name, bkt, obj, member)
#define hash_for_each_rcu(name, bkt, obj, member)
#define hash_for_each_safe(name, bkt, tmp, obj, member)
#define hash_for_each_possible(name, obj, member, key)
#define hash_for_each_possible_cow(name, obj, member, key, cond...)
#define hash_for_each_possible_cow_notrace(name, obj, member, key)
#define hash_for_each_possible_rcu(name, obj, member, key, cond...)
#define hash_for_each_possible_rcu_notrace(name, obj, member, key)
#define hash_for_each_possible_safe(name, obj, tmp, member, key)

#endif /* _VOLTOS_HASHTABLE_H */
