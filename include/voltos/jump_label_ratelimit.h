// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/jump_label_ratelimit.h
 *
 */

#ifndef _VOLTOS_JUMP_LABEL_RATELIMIT_H
#define _VOLTOS_JUMP_LABEL_RATELIMIT_H

#include <voltos/jump_label.h>

struct static_key_deferred {
	struct static_key 				key;
	unsigned long 					timeout;
};

struct static_key_true_deferred {
	struct static_key_true 				key;
	unsigned long 					timeout;
};

struct static_key_false_deferred {
	struct static_key_false 			key;
	unsigned long 					timeout;
};

#define static_key_deferred_dec_slow(x)

#define static_branch_deferred_dec_slow(x)

#define static_key_deferred_flush(x)

#define static_branch_deferred_inc(x)

#ifndef DEFINE_STATIC_KEY_DEFERRED_TRUE
#define DEFINE_STATIC_KEY_DEFERRED_TRUE(name, limit)
#endif /* DEFINE_STATIC_KEY_DEFERRED_TRUE */

#ifndef DEFINE_STATIC_KEY_DEFERRED_FALSE
#define DEFINE_STATIC_KEY_DEFERRED_FALSE(name, limit)
#endif /* DEFINE_STATIC_KEY_DEFERRED_FALSE */

#endif /* _VOLTOS_JUMP_LABEL_RATELIMIT_H */
