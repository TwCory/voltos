// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/stddef.h
 *
 */

#ifndef _NBAPI_VOLTOS_STDDEF_H
#define _NBAPI_VOLTOS_STDDEF_H

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
#endif /* __cplusplus */

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
#endif /* __cplusplus */

#ifndef __count_with
#define __count_with(x)
#endif /* __count_with */

#ifndef __count_with_net
#define __count_with_net(x)
#endif /* __count_with_net */

#ifndef __count_with_host
#define __count_with_host(x)
#endif /* __count_with_host */

#ifndef __count_with_be
#define __count_with_be(x)
#endif /* __count_with_be */

#ifndef __count_with_le
#define __count_with_le(x)
#endif /* __count_with_le */

#ifndef __count_with_ptr
#define __count_with_ptr(x)
#endif /* __count_with_ptr */

#endif /* _NBAPI_VOLTOS_STDDEF_H */
