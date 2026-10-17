// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/stddef.h
 *
 */

#ifndef _VOLTOS_STDDEF_H
#define _VOLTOS_STDDEF_H

#include <stddef.h>
#include <nbapi/voltos/stddef.h>

#ifndef NULL
#define NULL									((void *)0)
#endif

enum {
	false 									= 0,
	true 									= 1
};

#ifndef offsetof
#define offsetof(TYPE, MEMBER)							__builtin_offsetof(TYPE, MEMBER)
#endif /* offsetof */

#ifndef sizeof_field
#define sizeof_field(TYPE, MEMBER)						sizeof((((TYPE *)0)->MEMBER))
#endif /* sizeof_field */

#ifndef offsetof_end
#define offsetof_end(TYPE, MEMBER)						\
	(offsetof(TYPE, MEMBER) + sizeof_field(TYPE, MEMBER))
#endif /* offsetof_end */

#define a_union(NAME, MEMBERS...)						\
	__a_union(/* NO TAG */, NAME, /* NO ATTRS */, MEMBERS)

#define a_union_attr(NAME, ATTRS, MEMBERS...)					\
	__a_union(/* NO TAG */, NAME, ATTRS, MEMBERS)

#define a_union_tagged(TAG, NAME, MEMBERS...)					\
	__a_union(TAG, NAME, /* NO ATTRS */, MEMBERS)


#define DECLARE_FLEX_ARRAY(TYPE, NAME)						\
	__DECLARE_FLEX_ARRAY(TYPE, NAME)

#define __TRAILING_OVERLAP(TYPE, NAME, FAM, ATTRS, MEMBERS)			\
	union {									\
		TYPE NAME;							\
		struct {							\
			unsigned char __offset_to_FAM[offsetof(TYPE, FAM)];	\
			MEMBERS							\
		} ATTRS;							\
	}

#define TRAILING_OVERLAP(TYPE, NAME, FAM, MEMBERS)				\
	__TRAILING_OVERLAP(TYPE, NAME, FAM, /* NO ATTRS */, MEMBERS)

enum {
	CREATE									= 1,
	READ									= 2,
	UPDATE									= 3,
	DELETE									= 4
};

enum {
	DISABLED								= 0,
	ENABLED									= 1
};

#endif /* _VOLTOS_STDDEF_H */
