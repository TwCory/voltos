#ifndef _NBAPI_VOLTOS_STDDEF_H_
#define _NBAPI_VOLTOS_STDDEF_H_

#include <stddef.h>

#ifndef __always_inline
#define __always_inline                 				inline
#endif /* __always_inline */

#ifndef __static_always_inline
#define __static_always_inline          				static inline
#endif /* __static_always_inline */

#ifndef __cplusplus
#define __a_union_tag(tag)              				tag
#else
#define __a_union_tag(tag)
#endif

#define __a_union(tag, name, attrs, members...) 			\
	union { 							\
		struct { members } attrs; 				\
		struct __a_union_tag(tag) { members } attrs name; 	\
	} attrs

#ifdef __cplusplus
#define __flex_array_decl(type, member) 				\
	type member[0]
#else
#define __flex_array_decl(type, name) 					\
	struct { 							\
		struct { } __empty_ ## name; 				\
        	type name[]; 						\
    	}
#endif

#ifndef __count_with
#define __count_with(x)
#endif

#ifndef __count_with_be
#define __count_with_be(x)
#endif

#ifndef __count_with_le
#define __count_with_le(x)
#endif

#ifndef __count_with_net
#define __count_with_net(x)
#endif

#ifndef __count_with_host
#define __count_with_host(x)
#endif

#ifndef __count_with_ptr
#define __count_with_ptr(x)
#endif

#ifdef __VOLTOS_CORE__
#define __voltos_nonstring          					__nonstring
#else
#define __voltos_nonstring
#endif

#endif /* _NBAPI_VOLTOS_STDDEF_H_ */
