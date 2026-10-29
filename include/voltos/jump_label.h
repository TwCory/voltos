// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/jump_label.h
 *
 */

#ifndef _VOLTOS_JUMP_LABEL_H
#define _VOLTOS_JUMP_LABEL_H

#include <setjmp.h>
#include <voltos/atomic.h>
#include <voltos/types.h>

#define STATIC_KEY_CHECK_USE(key)

struct static_key {
	atomic_t 						enabled;
};

struct jump_entry {
	i32 							code;
	i32 							target;
	long 							key;
};

enum jump_label_type {
	JUMP_LABEL_TYPE_T_UNSPEC				= 0,
	JUMP_LABEL_TYPE_T_JMP					= 1,
	__JUMP_LABEL_TYPE_T_MAX__
};

enum {
	JUMP_TYPE_T_FALSE					= 0UL,
#define JUMP_TYPE_FALSE						JUMP_TYPE_T_FALSE
	JUMP_TYPE_T_TRUE					= 1UL,
#define JUMP_TYPE_TRUE						JUMP_TYPE_T_TRUE
	JUMP_TYPE_T_LINKED					= 2UL,
#define JUMP_TYPE_LINKED					JUMP_TYPE_T_LINKED
	JUMP_TYPE_T_MASK					= 3UL,
#define JUMP_TYPE_MASK						JUMP_TYPE_T_MASK
	__JUMP_TYPE_T_MAX__
};

#define JUMP_TYPE_MAX						(__JUMP_TYPE_T_MAX__ - 1)

#define STATIC_KEY_INIT_TRUE

#define STATIC_KEY_INIT_FALSE

#define STATIC_KEY_INIT

#define static_key_dec_slow(key)

#define static_key_inc_slow_cpus_locked(key)

#define static_key_dec_slow_cpus_locked(key)

#define static_key_enable_cpus_locked(k)

#define static_key_disable_cpus_locked(k)

#define jump_label_enabled

struct static_key_true {
	struct static_key 					key;
};

struct static_key_false {
	struct static_key 					key;
};

#ifndef DEFINE_STATIC_KEY_TRUE
#define DEFINE_STATIC_KEY_TRUE(name)
#endif /* DEFINE_STATIC_KEY_TRUE */

#ifndef DEFINE_STATIC_KEY_TRUE_RO
#define DEFINE_STATIC_KEY_TRUE_RO(name)
#endif /* DEFINE_STATIC_KEY_TRUE_RO */

#ifndef DECLARE_STATIC_KEY_TRUE
#define DECLARE_STATIC_KEY_TRUE(name)
#endif /* DECLARE_STATIC_KEY_TRUE */

#ifndef DEFINE_STATIC_KEY_FALSE
#define DEFINE_STATIC_KEY_FALSE(name)
#endif /* DEFINE_STATIC_KEY_FALSE */

#ifndef DEFINE_STATIC_KEY_FALSE_RO
#define DEFINE_STATIC_KEY_FALSE_RO(name)
#endif /* DEFINE_STATIC_KEY_FALSE_RO */

#ifndef DECLARE_STATIC_KEY_FALSE
#define DECLARE_STATIC_KEY_FALSE(name)
#endif /* DECLARE_STATIC_KEY_FALSE */

#ifndef DEFINE_STATIC_KEY_ARRAY_TRUE
#define DEFINE_STATIC_KEY_ARRAY_TRUE(name, count)
#endif /* DEFINE_STATIC_KEY_ARRAY_TRUE */

#ifndef DEFINE_STATIC_KEY_ARRAY_FALSE
#define DEFINE_STATIC_KEY_ARRAY_FALSE(name, count)
#endif /* DEFINE_STATIC_KEY_ARRAY_FALSE */

#define _DEFINE_STATIC_KEY_1(name)
#define _DEFINE_STATIC_KEY_0(name)
#define DEFINE_STATIC_KEY_MAYBE(cfg, name)

#define _DEFINE_STATIC_KEY_RO_1(name)
#define _DEFINE_STATIC_KEY_RO_0(name)
#define DEFINE_STATIC_KEY_MAYBE_RO(cfg, name)

#define _DECLARE_STATIC_KEY_1(name)
#define _DECLARE_STATIC_KEY_0(name)
#define DECLARE_STATIC_KEY_MAYBE(cfg, name)

#define static_key_enabled(x)

#define static_branch_likely(x)

#define static_branch_unlikely(x)

#define static_branch_maybe(config, x)

#define static_branch_inc(x)
#define static_branch_dec(x)
#define static_branch_inc_cpus_locked(x)
#define static_branch_dec_cpus_locked(x)

#define static_branch_enable(x)
#define static_branch_disable(x)
#define static_branch_enable_cpus_locked(x)
#define static_branch_disable_cpus_locked(x)

#endif /* _VOLTOS_JUMP_LABEL_H */
