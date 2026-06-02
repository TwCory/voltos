#ifndef _VOLTOS_STDDEF_H_
#define _VOLTOS_STDDEF_H_

#include <nbapi/voltos/stddef.h>

#undef NULL
#define NULL        						((void *) 0)

#undef offsetof
#define offsetof(type, member)  				__builtin_offsetof(type, member)

enum {
    	false = 0,
    	true = 1
};

#define sizeof_field(type, member) 				\
    	sizeof((((type *)0)->member))

#define offsetof_field(type, member) 				\
    	(offsetof(type, member) + sizeof_field(type, member))

#define a_union(name, members...) 				\
    	__a_union(/* NO TAG */, name, /* NO ATTRS */, members)

#define a_union_attr(name, attrs, members...) 			\
    	__a_union(/* NO TAG */, name, attrs, members)

#define a_union_tagged(tag, name, members...) 			\
    	__a_union(tag, name, /* NO ATTRS */, members)

#define flex_array_decl(type, name) 				\
    	__flex_array_decl(type, name)

enum {
    	CREATE 							= 1,
    	READ 							= 2,
    	UPDATE 							= 3,
    	DELETE 							= 4
};

enum {
    	DISABLED 						= 0,
    	ENABLED 						= 1
};

#endif /* _VOLTOS_STDDEF_H_ */
