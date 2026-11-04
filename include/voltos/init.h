// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/init.h
 *
 */

#ifndef _VOLTOS_INIT_H
#define _VOLTOS_INIT_H

#define __init
#define __init_data
#define __init_const

#define __exit_data
#define __exit_call
#define __exit_used

#define __ref
#define __ref_data
#define __ref_const

#define __mem_init
#define __mem_init_data
#define __mem_init_const

typedef int (*init_call_t)(void);
typedef void (*exit_call_t)(void);

typedef int init_call_entry_t;

typedef void (*constructor_fn_t)(void);

#endif /* _VOLTOS_INIT_H */
