// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler.h
 *
 */

#ifndef _VOLTOS_COMPILER_H
#define _VOLTOS_COMPILER_H

#include <voltos/compiler_types.h>

//void x_trace_likely_update(struct x_trace_likely_data *f, int val, int expect, int is_constant);

#ifndef likely_notrace
#define likely_notrace(x)
#endif /* likely_notrace */

#ifndef unlikely_notrace
#define unlikely_notrace(x)
#endif /* unlikely_notrace */

#ifndef __branch_check__
#define __branch_check__(x, expect, is_constant)
#endif /* __branch_check__ */

#ifndef likely
#define likely(x)
#endif /* likely */

#ifndef unlikely
#define unlikely(x)
#endif /* unlikely */

#define if(condition, ...)

#ifndef __trace_if_var
#define __trace_if_var(condition)
#endif /* __trace_if_var */

#ifndef __trace_if_value
#define __trace_if_value(condition)
#endif /* __trace_if_value */

#ifndef barrier
#define barrier()
#endif /* barrier */

#ifndef barrier_data
#define barrier_data(ptr)
#endif /* barrier_data */

#ifndef barrier_before_unreachable
#define barrier_before_unreachable()		do { } while (0)
#endif /* barrier_before_unreachable */

#ifndef __annotate_jump_table
#define __annotate_jump_table
#endif /* __annotate_jump_table */

#ifndef unreachable
#define unreachable()
#endif /* unreachable */

#ifndef VS_ENTRY
#define VS_ENTRY(sym)
#endif /* VS_ENTRY */

#ifndef RELOC_HIDE
#define RELOC_HIDE(ptr, off)			((typeof(ptr))((unsigned long)(ptr) + (off)))
#endif /* RELOC_HIDE */

#ifndef absolute_pointer
#define absolute_pointer(val)			RELOC_HIDE((void *)(val), 0)
#endif /* absolute_pointer */

#ifndef OPTIMIZE_HIDE_VAR
#define OPTIMIZE_HIDE_VAR(var)
#endif /* OPTIMIZE_HIDE_VAR */

#ifndef __UNIQUE_ID
#define __UNIQUE_ID(name)
#endif /* __UNIQUE_ID */

#ifndef data_race
#define data_race(expr)
#endif /* data_race */

#ifndef __BUILD_DEBUG_ON_ZERO_MSG
#define __BUILD_DEBUG_ON_ZERO_MSG(err, msg, ...)
#endif /* __BUILD_DEBUG_ON_ZERO_MSG */

#ifndef __is_array
#define __is_array(a)
#endif /* __is_array */

#ifndef __must_be_array
#define __must_be_array(a)
#endif /* __must_be_array */

#ifndef __is_byte_array
#define __is_byte_array(a)
#endif /* __is_byte_array */

#ifndef __must_be_byte_array
#define __must_be_byte_array(a)
#endif /* __must_be_byte_array */

#ifndef __is_cstr
#define __is_cstr(a)
#endif /* __is_cstr */

#ifndef __is_noncstr
#define __is_noncstr(a)
#endif /* __is_noncstr */

#ifndef __must_be_cstr
#define __must_be_cstr(p)
#endif /* __must_be_cstr */

#ifndef __must_be_noncstr
#define __must_be_noncstr(p)
#endif /* __must_be_noncstr */

#ifndef TYPEOF_UNQUAL
#define TYPEOF_UNQUAL(exp)
#endif /* TYPEOF_UNQUAL */

#ifndef VS_CFI_REFERENCE
#define VS_CFI_REFERENCE(sym)
#endif /* VS_CFI_REFERENCE */

static inline void *offset_to_ptr(const int *off)
{
	return (void *)((unsigned long) off + *off);
}

#define ___ADDRESSABLE(sym, __attrs)

#ifndef __ADDRESSABLE
#define __ADDRESSABLE(sym)
#endif /* __ADDRESSABLE */

#ifndef __is_constexpr
#define __is_constexpr(x)
#endif /* __is_constexpr */

#ifndef is_signed_type
#define is_signed_type(type)
#endif /* is_signed_type */

#ifndef is_unsigned_type
#define is_unsigned_type(type)
#endif /* is_unsigned_type */

#ifndef statically_true
#define statically_true(x)
#endif /* statically_true */

#ifndef const_true
#define const_true(x)
#endif /* const_true */

#ifndef prevent_tail_call_optimization
#define prevent_tail_call_optimization()
#endif /* prevent_tail_call_optimization */

#endif /* _VOLTOS_COMPILER_H */
