// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/smp.h
 *
 */

#ifndef _VOLTOS_SMP_H
#define _VOLTOS_SMP_H

#include <voltos/smp_types.h>

typedef void (*smp_call_fn_t)(void *info);
typedef bool (*smp_cond_fn_t)(int cpu, void *info);

#endif /* _VOLTOS_SMP_H */
