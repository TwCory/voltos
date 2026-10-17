// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/compiler_attributes.h
 *
 *	Compiler Attribute Definitions
 */

#ifndef _VOLTOS_COMPILER_ATTRIBUTES_H
#define _VOLTOS_COMPILER_ATTRIBUTES_H

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-alias-function-attribute
 */

#define __alias(symbol)						__attribute__ ((__alias__(#symbol)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-aligned-function-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-aligned-type-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-aligned-variable-attribute
 */

#define __aligned(x)						__attribute__ ((__aligned__(x)))
#define __aligned_largest					__attribute__ ((__aligned__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-alloc_005fsize-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#alloc-size
 */

#define __alloc_size__(x, ...)					__attribute__ ((__alloc_size__(x, ## __VA_ARGS__)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-always_005finline-function-attribute
 *	clang: 	mentioned
 */

#define __always_inline						inline __attribute__ ((__always_inline__))
#define __static_always_inline					static inline __attribute__ ((__always_inline__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-assume_005faligned-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#assume-aligned
 */

#define __assume_aligned(a, ...)				__attribute__ ((__assume_aligned__(a, ## __VA_ARGS__)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-cleanup-variable-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#cleanup
 */

#define __cleanup(fn)						__attribute__ ((__cleanup__(fn)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-const-function-attribute
 */
#define __attr_const__						__attribute__ ((__const__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-copy-function-attribute
 */

#if __has_attribute(__copy__)
# define __copy(symbol)						__attribute__ ((__copy__(symbol)))
#else
# define __copy(symbol)
#endif

/*
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#diagnose_as_builtin
 */

#if __has_attribute(__diagnose_as_builtin__)
# define __diagnose_as(builtin...)				__attribute__ ((__diagnose_as_builtin__(builtin)))
#else
# define __diagnose_as(buildin...)
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-deprecated-function-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-deprecated-type-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-deprecated-variable-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Enumerator-Attributes.html#index-deprecated-enumerator-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#deprecated
 */

#define __deprecated
#define __obselete

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-designated_005finit-type-attribute
 */

#if __has_attribute(__designated_init__)
# define __designated_init					__attribute__ ((__designated_init__))
#else
# define __designated_init
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-error-function-attribute
 */

#if __has_attribute(__error__)
# define __cc_error(msg)					__attribute__ ((__error__(msg)))
#else
# define __cc_error(msg)
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-externally_005fvisible-function-attribute
 */

#if __has_attribute(__externally_visible__)
# define __visible						__attribute__ ((__externally_visible__))
#else
# define __visible
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-format-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#format
 */

#define __printf(a, b)						__attribute__ ((__format__(printf, a, b)))
#define __scanf(a, b)						__attribute__ ((__format__(scanf, a, b)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-gnu_005finline-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#format
 */

#define __gnu_inline						__attribute__ ((__gnu_inline__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-malloc-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#malloc
 */

#define __malloc						__attribute__ ((__malloc__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-mode-type-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-mode-variable-attribute
 */

#define __mode(x)						__attribute__ ((__mode__(x)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/x86-Function-Attributes.html#index-no_005fcaller_005fsaved_005fregisters-function-attribute_002c-x86
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#no-caller-saved-registers
 */

#if __has_attribute(__no_caller_saved_registers__)
# define __no_caller_saved_registers				__attribute__ ((__no_caller_saved_registers__))
#else
# define __no_caller_saved_registers
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-noclone-function-attribute
 */

#if __has_attribute(__noclone__)
# define __noclone						__attribute__ ((__noclone__))
#else
# define __noclone
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Statement-Attributes.html#Statement-Attributes
 */

#if __has_attribute(__fallthrough__)
# define fallthrough						__attribute__ ((__fallthrough__))
#else
# define fallthrough						do {} while (0)
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#Common-Function-Attributes
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#flatten
 */

#define __flatten						__attribute__ ((flatten))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-noinline-function-attribute
 *	clang: 	mentioned
 */

#define noinline						__attribute__ ((__noinline__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Attributes.html#index-nonnull
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#nonnull
 */

#define __nonnull_args(x...)					__attribute__ ((__nonnull__(x)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-nonstring-variable-attribute
 */

#if __has_attribute(__nonstring__)
# define __nonstring						__attribute__ ((__nonstring__))
#else
# define __nonstring
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-no_005fprofile_005finstrument_005ffunction-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#no-profile-instrument-function
 */

#if __has_attribute(__no_profile_instrument_function__)
# define __no_profile						__attribute__ ((__no_profile_instrument_function__))
#else
# define __no_profile
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-noreturn-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#noreturn
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#id1
 */

#define __noreturn						__attribute__ ((__noreturn__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-no_005fstack_005fprotector-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#no-stack-protector-safebuffers
 */

#if __has_attribute(__no_stack_protector__)
# define __no_stack_protector					__attribute__ ((__no_stack_protector__))
#else
# define __no_stack_protector
#endif

/*
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#overloadable
 */

#if __has_attribute(__overloadable__)
# define __overloadable						__attribute__ ((__overloadable__))
#else
# define __overloadable
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-packed-type-attribute
 *	clang: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-packed-variable-attribute
 */

#define __packed						__attribute__ ((__packed__))

/*
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#pass-object-size-pass-dynamic-object-size
 */

#if __has_attribute(__pass_dynamic_object_size__)
# define __pass_dynamic_object_size(type)			__attribute__ ((__pass_dynamic_object_size__(type)))
#else
# define __pass_dynamic_object_size(type)
#endif
#if __has_attribute(__pass_object_size__)
# define __pass_object_size(type)				__attribute__ ((__pass_object_size__(type)))
#else
# define __pass_object_size(type)
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-pure-function-attribute
 */

#define __pure							__attribute__ ((__pure__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-section-function-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-section-variable-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#section-declspec-allocate
 */

#define __section(section)					__attribute__ ((__section__(section)))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-uninitialized-variable-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#uninitialized
 */

#if __has_attribute(__uninitialized__)
# define __uninitialized					__attribute__ ((__uninitialized__))
#else
# define __uninitialized
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-unused-function-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-unused-type-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-unused-variable-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Label-Attributes.html#index-unused-label-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#maybe-unused-unused
 */

#define __always_unused						__attribute__ ((__unused__))
#define __maybe_unused						__attribute__ ((__unused__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-used-function-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-used-variable-attribute
 */

#define __used							__attribute__ ((__used__))

#define __always_used						__used __maybe_unused

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-warn_005funused_005fresult-function-attribute
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#nodiscard-warn-unused-result
 */

#define __must_check						__attribute__ ((__warn_unused_result__))

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-warning-function-attribute
 */

#define __cc_warning(msg)

/*
 *	clang: 	https://clang.llvm.org/docs/AttributeReference.html#disable-sanitizer-instrumentation
 */

#if __has_attribute(disable_sanitizer_instrumentation)
# define __disable_sanitizer_instrumentation			__attribute__ ((disable_sanitizer_instrumentation))
#else
# define __disable_sanitizer_instrumentation
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Attributes.html#index-noipa
 */

#if __has_attribute(noipa)
# define __noipa						__attribute__ ((noipa))
#else
# define __noipa
#endif

/*
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-weak-function-attribute
 *	gcc: 	https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-weak-variable-attribute
 */

#define __weak							__attribute__ ((__weak__))

#define __fix_address						noinline __noclone

#endif /* _VOLTOS_COMPILER_ATTRIBUTES_H */
