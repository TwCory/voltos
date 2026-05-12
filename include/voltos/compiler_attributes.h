#ifndef _VOLTOS_COMPILER_ATTRIBUTES_H_
#define _VOLTOS_COMPILER_ATTRIBUTES_H_

#define __alias(sym)			__attribute__ ((__alias__(#sym)))

#define __aligned(x)			__attribute__ ((__aligned__(x)))
#define __aligned_largest		__attribute__ ((__aligned__))

#define __alloc_size__(x, ...)		__attribute__ ((__alloc_size__(x, ## __VA_ARGS__)))

#define __always_inline

#endif /* _VOLTOS_COMPILER_ATTRIBUTES_H_ */
