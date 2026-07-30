#ifndef _VOLTOS_COMPILER_ATTRIBUTES_H
#define _VOLTOS_COMPILER_ATTRIBUTES_H

#define __alias(symbol)

#define __aligned(x)			__attribute__ ((__aligned__(x)))
#define __aligned_largest

#define __alloc_size__(x, ...)
#define __always_inline
#define __static_always_inline
#define __assume_aligned(a, ...)
#define __cleanup(fn)
#define __attr_const__
#define __copy(symbol)
#define __diagnose_as(builtin...)
#define __deprecated
#define __obselete
#define __designated_init
#define __cc_error(msg)
#define __visible
#define __printf(a, b)
#define __scanf(a, b)
#define __gnu_inline
#define __malloc
#define __mode(x)
#define __no_caller_saved_registers
#define __noclone
#define fallthrough
#define __flatten
#define noinline
#define __nonnull_args(x...)
#define __nonstring
#define __no_profile
#define __noreturn
#define __no_stack_protector
#define __overloadable
#define __packed
#define __pass_dynamic_object_size(type)
#define __pass_object_size(type)
#define __pure
#define __section(section)
#define __uninitialized
#define __always_unused
#define __maybe_unused
#define __used
#define __always_used
#define __must_check
#define __cc_warning(msg)
#define __disable_sanitizer_instrumentation
#define __noipa
#define __weak
#define __fix_address

#endif /* _VOLTOS_COMPILER_ATTRIBUTES_H */
