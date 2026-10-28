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

struct static_key {
	atomic_t 		enabled;
};

struct jump_entry {
	i32 			code;
	i32 			target;
	long 			key;
};

struct static_key_true {
	struct static_key 	key;
};

struct static_key_false {
	struct static_key 	key;
};

#endif /* _VOLTOS_JUMP_LABEL_H */
