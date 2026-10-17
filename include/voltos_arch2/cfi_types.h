// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cfi_types.h
 *
 */

#ifndef _VOLTOS_CFI_TYPES_H
#define _VOLTOS_CFI_TYPES_H

#ifndef __CFI_TYPE
#define __CFI_TYPE(name)
#endif /* __CFI_TYPE */

#define SYM_TYPED_ENTRY(name, linkage, align...)

#define SYM_TYPED_START(name, linkage, align...)

#ifndef SYM_TYPED_FUNCTION_START
#define SYM_TYPED_FUNCTION_START(name)
#endif /* SYM_TYPED_FUNCTION_START */

#ifndef DEFINE_CFI_TYPE
#define DEFINE_CFI_TYPE(name, function)
#endif /* DEFINE_CFI_TYPE */

#endif /* _VOLTOS_CFI_TYPES_H */
