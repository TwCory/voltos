// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler.h
 *
 *	General Compiler Definitions
 */

#ifndef _VOLTOS_COMPILER_H
#define _VOLTOS_COMPILER_H

#include <voltos/compiler_types.h>

void trace_likely_update(struct trace_likely_ctx *context, int value, 
			int expect, int is_constant);

#define likely_notrace(x)
#define unlikely_notrace(x)

#define __branch_check__(x, expect, is_constant)

#ifndef likely
# define likely(x)
#endif /* likely */

#ifndef unlikely
# define unlikely(x)
#endif /* unlikely */

#define if(cond, ...)

#define __trace_if_var(cond)

#define __trace_if_value

#ifndef barrier
# define barrier()
#endif /* barrier */

#ifndef barrier_ctx
# define barrier_ctx(ptr)
#endif /* barrier_ctx */

#ifndef barrier_before_unreachable
# define barrier_before_unreachable()
#endif /* barrier_before_unreachable */

#ifndef __annotate_jump_table
# define __annotate_jump_table
#endif /* __annotate_jump_table */

#ifndef unreachable
# define unreachable()
#endif /* unreachable */

#ifndef VSENTRY
# define VSENTRY(sym)
#endif /* VSENTRY */

#ifndef RELOC_HIDE
# define RELOC_HIDE(ptr, off)
#endif /* RELOC_HIDE */

#define absolute_pointer(val)

#endif /* _VOLTOS_COMPILER_H */
