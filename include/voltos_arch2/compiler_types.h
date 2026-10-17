// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler_types.h
 *
 *	Compiler Types and Definitions
 */

#ifndef _VOLTOS_COMPILER_TYPES_H
#define _VOLTOS_COMPILER_TYPES_H

#include <voltos/compiler_attributes.h>
#include <voltos/compiler-context-analysis.h>
#include <voltos/compiler-demangle.h>

#ifndef __has_builtin
# define __has_builtin(x)				(0)
#endif

#define ___PASTE(a, b)					a##b
#define __PASTE(a, b)					___PASTE(a, b)

#if __STDC_VERSION__ < 202311L
# define auto 						__auto_type
#endif

#ifndef BTF_TYPE_TAG
# define BTF_TYPE_TAG(value)
#endif /* BTF_TYPE_TAG */

#define __system
#define __user
#define __iomem
#define __percpu
#define __rcu
#define __cow
#define __chk_user_ptr(x)				((void) 0)
#define __chk_io_ptr(x)					((void) 0)
#define __force						__attribute__ ((force))
#define __nocast					__attribute__ ((nocast))
#define __safe						__attribute__ ((safe))
#define __private					__attribute__ ((noderef))
#define ACCESS_PRIVATE(p, member)

#ifndef __fn_aligned
# define __fn_aligned
#endif /* __fn_aligned */

#ifndef __cold
# define __cold
#endif /* __cold */

#ifndef __preserve_most
# define __preserve_most
#endif /* __preserve_most */

#ifndef __retain
# define __retain
#endif /* __retain */

#if defined(__clang__)
# include <voltos/compiler-clang.h>
#elif defined(__GNUC__)
# include <voltos/compiler-gcc.h>
#else
# error "Unknown or Unsupported Compiler"
#endif

struct trace_branch_ctx {
	const char					*function;
	const char					*file;
	unsigned int					line;
	union {
		struct {
			unsigned long			correct;
			unsigned long			incorrect;
		};
		struct {
			unsigned long			miss;
			unsigned long 			hit;
		};
		unsigned long				miss_hit[2];
	};
};

struct trace_likely_ctx {
	struct trace_branch_ctx				context;
	unsigned long					constant;
};

#ifndef notrace
# define notrace
#endif /* notrace */

#ifndef __naked
# define __naked					__attribute__ ((__naked__)) notrace
#endif /* __naked */

#define inline						inline __gnu_inline notrace

#define __inline__					inline

#ifndef __inline_maybe_unused
# define __inline_maybe_unused				__maybe_unused
#endif /* __inline_maybe_unused */

#ifndef noinline_for_stack
# define noinline_for_stack				noinline
#endif /* noinline_for_stack */

#ifndef noinline_for_tracing
# define noinline_for_tracing				noinline
#endif /* noinline_for_tracing */

#ifndef __data_racy
# define __data_racy					volatile
#endif /* __data_racy */

#ifndef __assume
# define __assume(expr)
#endif /* __assume */

#ifndef __count_with
# define __count_with(member)
#endif /* __count_with */

#ifndef __count_with_ptr
# define __count_with_ptr(member)
#endif /* __count_with_ptr */

#ifndef __nonstring_array
# define __nonstring_array				__attribute__ ((__nonstring__))
#endif /* __nonstring_array */

#ifndef __count_with_be
# define __count_with_be(member)
#endif /* __count_with_be */

#ifndef __count_with_le
# define __count_with_le(member)
#endif /* __count_with_le */

#ifndef __count_with_net
# define __count_with_net(member)
#endif /* __count_with_net */

#ifndef __count_with_host
# define __count_with_host(member)
#endif /* __count_with_host */

#ifndef at_least
# define at_least					static
#endif /* at_least */

#ifndef __noinstr_section
# define __noinstr_section(section)
#endif /* __noinstr_section */

#ifndef noinstr
# define noinstr					__noinstr_section(".noinstr.text")
#endif /* noinstr */

#ifndef __cpuidle
# define __cpuidle					__noinstr_section(".cpuidle.text")
#endif /* __cpuidle */

#ifndef __latent_entropy
# define __latent_entropy
#endif /* __latent_entropy */

#ifndef __randomize_layout
# define __randomize_layout
#endif /* __randomize_layout */

#ifndef __no_randomize_layout
# define __no_randomize_layout
#endif /* __no_randomize_layout */

#define randomized_struct_fields_start
#define randomized_struct_fields_end

#ifndef __no_vsstack_erase
# define __no_vsstack_erase
#endif /* __no_vsstack_erase */

#ifndef __noscs
# define __noscs
#endif /* __noscs */

#ifndef __nocfi
# define __nocfi
#endif /* __nocfi */

#ifndef __nocfi_generic
# define __nocfi_generic
#endif /* __nocfi_generic */

#ifdef __alloc_size__
# define __alloc_size(x, ...)
# define __realloc_size(x, ...)
#else
# define __alloc_size(x, ...)
# define __realloc_size(x, ...)
#endif /* __alloc_size__ */

#if __has_builtin(__builtin_dynamic_object_size)
# define __struct_size(p)
# define __member_size(p)
#else
# define __struct_size(p)
# define __member_size(p)
#endif

#ifndef __flex_counter
# define __flex_counter(FAM)
#endif /* __flex_counter */

#ifndef asm_goto_output
#define asm_goto_output(x...)				asm volatile goto(x)
#endif /* asm_goto_output */

#define ASM_INPUT_G					"g"
#define ASM_INPUT_RM					"rm"
#define ASM_OUTPUT_RM					"=rm"

#ifndef asm_inline
#define asm_inline					asm
#endif /* asm_inline */

#define USE_TYPEOF_UNQUAL

#define __same_type(a, b)

#define __scalar_type_to_expr_cases(type)

#define __unqual_scalar_typeof(x)

#define __scalar_type_to_signed_cases(type)

#define __signed_scalar_typeof(x)

#define __native_word(t)

#define __cc_assert(condition, msg, prefix, suffix)

#define _cc_assert(condition, msg, prefix, suffix)

#define cc_assert(condition, msg)

#define cc_assert_atomic_type(t)

#ifndef __diag
# define __diag(string)
#endif /* __diag */

#ifndef __diag_GCC
# define __diag_GCC(version, severity, string)
#endif /* __diag_GCC */

#ifndef __diag_clang
# define __diag_clang(version, severity, string)
#endif /* __diag_clang */

#ifndef __diag_push
# define __diag_push()					__diag(push)
#endif /* __diag_push */

#ifndef __diag_pop
# define __diag_pop()					__diag(pop)
#endif /* __diag_pop */

#define __diag_ignore(compiler, version, option, comment)

#define __diag_warn(compiler, version, option, comment)

#define __diag_error(compiler, version, option, comment)

#define __diag_ignore_all(option, comment)

#endif /* _VOLTOS_COMPILER_TYPES_H */
