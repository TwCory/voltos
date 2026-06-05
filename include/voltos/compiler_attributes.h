// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_COMPILER_ATTRIBUTES_H
#define VOLTOS_COMPILER_ATTRIBUTES_H

#define __alias(symbol)			__attribute__ ((__alias__(#symbol)))

#define __aligned(x)			__attribute__ ((__aligned__(x)))
#define __aligned_largest		__attribute__ ((__aligned__))

#define __alloc_size__(x, ...)		__attribute__ ((__alloc_size__(x, ## __VA_ARGS__)))

#define __always_inline			inline __attribute__ ((__always_inline__))

#define __always_unused			__attribute__ ((__unused__))

#define __always_used			__attribute__ ((__used__))

#define __assume_aligned(a, ...)	__attribute__ ((__assume_aligned__(a, ## __VA_ARGS__)))

#if __has_attribute(__error__)
# define __cc_error(message)		__attribute__ ((__error__(message)))
#else
# define __cc_error(message)
#endif

#if __has_attribute(__warning__)
# define __cc_warning(message)		__attribute__ ((__warning__(message)))
#else
# define __cc_warning(message)
#endif

#define __cleanup(function)		__attribute__ ((__cleanup__(function)))

#define __const				__attribute__ ((__const__))

#if __has_attribute(__copy__)
# define __copy(symbol)			__attribute__ ((__copy__(symbol)))
#else
# define __copy(symbol)
#endif

#define __deprecated

#if __has_attribute(__designated_init__)
# define __designated_init		__attribute__ ((__designated_init__))
#else
# define __designated_init
#endif

#if __has_attribute(__diagnose_as_builtin__)
# define __diagnose_as(builtin...)	__attribute__ ((__diagnose_as_builtin__(builtin)))
#else
# define __diagnose_as(builtin...)
#endif

#if __has_attribute(__fallthrough__)
# define __fallthrough			__attribute__ ((__fallthrough__))
#else
# define __fallthrough			do {} while (0)
#endif

#define __flatten			__attribute__ ((flatten))

#define __gnu_inline			__attribute__ ((__gnu_inline__))

#define __malloc			__attribute__ ((__malloc__))

#define __maybe_unused			__attribute__ ((__unused__))

#define __mode(x)			__attribute__ ((__mode__(x)))

#define __must_check			__attribute__ ((__warn_unused_result__))

#if __has_attribute(__noclone__)
# define __noclone			__attribute__ ((__noclone__))
#else
# define __noclone
#endif

#define __noinline			__attribute__ ((__noinline__))

#define __noreturn			__attribute__ ((__noreturn__))

#if __has_attribute(__no_profile_instrument_function__)
# define __no_profile			__attribute__ ((__no_profile_instrument_function__))
#else
# define __no_profile
#endif

#if __has_attribute(__no_stack_protector__)
# define __no_stack_protector		__attribute__ ((__no_stack_protector__))
#else
# define __no_stack_protector
#endif


#if __has_attribute(__nonstring__)
# define __nonstring			__attribute__ ((__nonstring__))
#else
# define __nonstring
#endif

#define __obselete

#if __has_attribute(__overloadable__)
# define __overloadable			__attribute__ ((__overloadable__))
#else
# define __overloadable
#endif

#define __packed			__attribute__ ((__packed__))

#define __printf(a, b)			__attribute__ ((__format__(printf, a, b)))

#define __pure				__attribute__ ((__pure__))

#define __scanf(a, b)			__attribute__ ((__format__(scanf, a, b)))

#define __section(section)		__attribute__ ((__section__(section)))

#define __static_always_inline		static inline __attribute__ ((__always_inline__))

#if __has_attribute(__uninitialized__)
# define __uninitialized		__attribute__ ((__uninitialized__))
#else
# define __uninitialized
#endif

#define __unused			__attribute__ ((__unused__))

#define __used				__attribute__ ((__used__))

#if __has_attribute(__externally_visible__)
# define __visible			__attribute__ ((__externally_visible__))
#else
# define __visible
#endif

#define __weak				__attribute__ ((__weak__))



#endif /* VOLTOS_COMPILER_ATTRIBUTES_H */
