// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cfi_types.h
 *
 * 	Clang Flow Integrity (CFI)
 */

#ifndef _VOLTOS_CFI_TYPES_H
#define _VOLTOS_CFI_TYPES_H

#ifndef __CFI_TYPE
#define __CFI_TYPE(name)
#endif /* __CFI_TYPE */

#ifndef SYM_TYPED_ENTRY
#define SYM_TYPED_ENTRY(name, linkage, align...)
#endif /* SYM_TYPED_ENTRY */

#ifndef SYM_TYPED_START
#define SYM_TYPED_START(name, linkage, align...)
#endif /* SYM_TYPED_START */

#ifndef SYM_TYPED_FUNCTION_START
#define SYM_TYPED_FUNCTION_START(name, linkage, align...)
#endif /* SYM_TYPED_FUNCTION_START */

#ifndef DEFINE_CFI_TYPE
#define DEFINE_CFI_TYPE(name, function)
#endif /* DEFINE_CFI_TYPE */

#endif /* _VOLTOS_CFI_TYPES_H */
