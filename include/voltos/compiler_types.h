// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler_types.h
 *
 */

#ifndef _VOLTOS_COMPILER_TYPES_H
#define _VOLTOS_COMPILER_TYPES_H

#include <sys/cdefs.h>
#include <voltos/compiler_attributes.h>
#include <voltos/compiler-context-analysis.h>
#include <voltos/compiler-demangle.h>

#ifndef __has_builtin
#define __has_builtin(x)			(0)
#endif /* __has_builtin */

#define ___PASTE(a, b)				a##b
#define __PASTE(a, b)				___PASTE(a, b)

#if __STDC_VERSION__ < 202311L
#define auto					__auto_type
#endif

#ifndef BTF_TYPE_TAG
#define BTF_TYPE_TAG(value)
#endif /* BTF_TYPE_TAG */

#define __voltos_system
#define __voltos_user
#define __voltos_io
#define __voltos_percpu
#define __voltos_rcu
#define __voltos_cow
#define __voltos_chk_user_ptr(x)
#define __voltos_chk_io_ptr(x)
#define __voltos_force
#define __voltos_nocast
#define __voltos_safe
#define __voltos_private
#define ACCESS_PRIVATE(p, member)
#define __builtin_warning(x, y...)		(1)

#ifndef __function_aligned
#define __function_aligned
#endif /* __function_aligned */

#ifndef __cold
#define __cold
#endif /* __cold */

#ifndef __preserve_most
#define __preserve_most
#endif /* __preserve_most */

#ifndef __retain
#define __retain
#endif /* __retain */

struct x_trace_branch_ctx {
	const char 				*function;
	const char 				*file;
	unsigned int 				line;
	union {
		struct {
			unsigned long 		correct;
			unsigned long 		incorrect;
		};
		struct {
			unsigned long 		miss;
			unsigned long 		hit;
		};
		unsigned long 			miss_hit[2];
	};
};

struct x_trace_likely_ctx {
	struct x_trace_branch_ctx 		context;
	unsigned long 				constant;
};

#ifndef notrace
#define notrace
#endif /* notrace */

#ifndef __naked
#define __naked
#endif /* __naked */

#ifndef inline
#define inline					inline __gnu_inline notrace
#endif /* inline */

#ifndef __inline__
#define __inline__				inline
#endif /* __inline__ */

#ifndef __inline_maybe_unused
#define __inline_maybe_unused
#endif /* __inline_maybe_unused */

#ifndef noinline_for_stack
#define noinline_for_stack			noinline
#endif /* noinline_for_stack */

#ifndef noinline_for_tracing
#define noinline_for_tracing			noinline
#endif /* noinline_for_tracing */

#ifndef __data_racy
#define __data_racy
#endif /* __data_racy */

#ifndef __no_sanitize_or_inline
#define __no_sanitize_or_inline
#endif /* __no_sanitize_or_inline */

#ifndef __assume
#define __assume(expr)
#endif /* __assume */

#ifndef __count_with
#define __count_with(member)
#endif /* __count_with */

#ifndef __count_with_ptr
#define __count_with_ptr(member)
#endif /* __count_with_ptr */

#ifndef __nonstring_array
#define __nonstring_array
#endif /* __nonstring_array */

#ifndef __count_with_be
#define __count_with_be(member)
#endif /* __count_with_be */

#ifndef __count_with_le
#define __count_with_le(member)
#endif /* __count_with_le */

#ifndef __count_with_net
#define __count_with_net(member)
#endif /* __count_with_net */

#ifndef __count_with_host
#define __count_with_host(member)
#endif /* __count_with_host */

#ifndef at_least
#define at_least
#endif /* at_least */

#ifndef __noinstr_section
#define __noinstr_section(section)
#endif /* __noinstr_section */

#ifndef noinstr
#define noinstr
#endif /* noinstr */

#ifndef __cpuidle
#define __cpuidle
#endif /* __cpuidle */

#ifndef __latent_entropy
#define __latent_entropy
#endif /* __latent_entropy */

#ifndef __randomize_layout
#define __randomize_layout
#endif /* __randomize_layout */

#ifndef __no_randomize_layout
#define __no_randomize_layout
#endif /* __no_randomize_layout */

#ifndef __noscs
#define __noscs
#endif /* __noscs */

#ifndef __nocfi
#define __nocfi
#endif /* __nocfi */

#ifndef __nocfi_generic
#define __nocfi_generic
#endif /* __nocfi_generic */

#ifdef __alloc_size__
#define __alloc_size(x, ...)			__alloc_size__(x, ## __VA_ARGS__) __malloc
#define __realloc_size(x, ...)			__alloc_size__(x, ## __VA_ARGS__)
#else
#define __alloc_size(x, ...)			__malloc
#define __realloc_size(x, ...)
#endif /* __alloc_size__ */

#if __has_builtin(__builtin_dynamic_object_size)
#define __struct_size(p)			__builtin_dynamic_object_size(p, 0)
#define __member_size(p)			__builtin_dynamic_object_size(p, 1)
#else
#define __struct_size(p)			__builtin_object_size(p, 0)
#define __member_size(p)			__builtin_object_size(p, 1)
#endif

#ifndef __annotated
#define __annotated(var, attr)
#endif /* __annotated */

#ifndef __flex_counter
#define __flex_counter(FAM)
#endif /* __flex_counter */

#ifndef asm_goto_output
#define asm_goto_output(x...)
#endif /* asm_goto_output */

#ifndef asm_inline
#define asm_inline	asm inline
#endif /* asm_inline */

#ifndef __same_type
#define __same_type(a, b)
#endif /* __same_type */

#ifndef __scalar_type_to_expr_cases
#define __scalar_type_to_expr_cases(type)
#endif /* __scalar_type_to_expr_cases */

#ifndef __unqual_scalar_typeof
#define __unqual_scalar_typeof(x)
#endif /* __unqual_scalar_typeof */

#ifndef __scalar_type_to_signed_cases
#define __scalar_type_to_signed_cases(type)
#endif /* __scalar_type_to_signed_cases */

#ifndef __signed_scalar_typeof
#define __signed_scalar_typeof(x)
#endif /* __signed_scalar_typeof */

#ifndef __native_word
#define __native_word(t)
#endif /* __native_word */

#ifndef __cc_assert
#define __cc_assert(condition, msg, prefix, suffix)
#endif /* __cc_assert */

#ifndef _cc_assert
#define _cc_assert(condition, msg, prefix, suffix)
#endif /* _cc_assert */

#ifndef cc_assert
#define cc_assert(condition, msg)
#endif /* cc_assert */

#ifndef cc_assert_atomic_type
#define cc_assert_atomic_type(t)
#endif /* cc_assert_atomic_type */

#ifndef __diag
#define __diag(string)
#endif /* __diag */

#ifndef __diag_GCC
#define __diag_GCC(version, severity, string)
#endif /* __diag_GCC */

#ifndef __diag_clang
#define __diag_clang(version, severity, string)
#endif /* __diag_clang */

#ifndef __diag_push
#define __diag_push()
#endif /* __diag_push */

#ifndef __diag_pop
#define __diag_pop()
#endif /* __diag_pop */

#ifndef __diag_ignore
#define __diag_ignore(compiler, version, option, comment)
#endif /* __diag_ignore */

#ifndef __diag_warn
#define __diag_warn(compiler, version, option, comment)
#endif /* __diag_warn */

#ifndef __diag_error
#define __diag_error(compiler, version, option, comment)
#endif /* __diag_error */

#ifndef __diag_ignore_all
#define __diag_ignore_all(option, comment)
#endif /* __diag_ignore_all */

#endif /* _VOLTOS_COMPILER_TYPES_H */
