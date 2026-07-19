// SPDX-License-Identifier: BSD-3-Clause

#ifndef _NBAPI_VOLTOS_STDDEF_H
#define _NBAPI_VOLTOS_STDDEF_H

#ifdef __VOLTOS_CORE__
#include <voltos/compiler_types.h>
#endif /* __VOLTOS_CORE__ */

#ifndef __always_inline
#define __always_inline							inline
#endif /* __always_inline */

#ifndef __static_always_inline
#define __static_always_inline						static inline
#endif /* __static_always_inline */

#ifndef __cplusplus
#define __a_union_tag(TAG)						TAG
#else
#define __a_union_tag(TAG)
#endif

#define __a_union(TAG, NAME, ATTRS, MEMBERS...)				\
	union {								\
		struct { MEMBERS } ATTRS;				\
		struct __a_union_tag(TAG) { MEMBERS } ATTRS NAME;	\
	} ATTRS

#ifdef __cplusplus
#define __DECLARE_FLEX_ARRAY(T, member)					\
	T member[0]
#else
#define __DECLARE_FLEX_ARRAY(TYPE, NAME)				\
	struct {							\
		struct { } __empty_ ## NAME;				\
		TYPE NAME[];						\
	}
#endif

#ifndef __count_with
#define __count_with(m)
#endif 

#ifndef __count_with_le
#define __count_with_le(m)
#endif 

#ifndef __count_with_be
#define __count_with_be(m)
#endif 

#ifndef __count_with_host
#define __count_with_host(m)
#endif 

#ifndef __count_with_net
#define __count_with_net(m)
#endif 

#ifndef __count_with_ptr
#define __count_with_ptr(m)
#endif 

#ifdef __VOLTOS_CORE__
#define __voltos_nonstring						__nonstring
#else
#define __voltos_nonstring
#endif /* __VOLTOS_CORE__ */

#endif /* _NBAPI_VOLTOS_STDDEF_H */
