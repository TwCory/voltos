#ifndef _VOLTOS_STDDEF_H_
#define _VOLTOS_STDDEF_H_

#undef NULL
#define NULL                                                    ((void *) 0)

#undef offsetof
#define offsetof(type, member)                                  __builtin_offsetof(type, member)

#ifndef __always_inline
#define __always_inline                                         inline
#endif /* __always_inline */

#ifndef __static_always_inline
#define __static_always_inline                                  static inline
#endif /* __static_always_inline */

#ifndef __VOLTOS_DEBUG__
#define __VOLTOS_DEBUG__                                        0
#endif /* __VOLTOS_DEBUG__ */

#ifndef _cplusplus
#define __a_union_tag(tag)                                      tag
#else
#define __a_union_tag(tag)
#endif /* __cplusplus */

#define __a_union(tag, name, attrs, members...)                 \
    union {                                                     \
        struct { members } attrs;                               \
        struct __a_union_tag(tag) { members } attrs name;       \
    } attrs

#ifdef __cplusplus
#define __flex_array_decl(type, member)                         \
    type member[0]
#else
#define __flex_array_decl(type, name)                           \
    struct {                                                    \
        struct { } __empty_ ## name;                            \
        type name[0];                                           \
    }
#endif

#define a_union(name, members...)                               \
    __a_union(/* no tag */, name, /* no attrs */, members)

#define a_union_attr(name, attrs, members...)                   \
    __a_union(/* no tag */, name, attrs, members)

#define a_union_tagged(tag, name, members...)                   \
    __a_union(tag, name, /* no attrs */, members)

#define flex_array_decl(type, name)                             \
    __flex_array_decl(type, name)

enum {
    CREATE      = 1,
    READ        = 2,
    UPDATE      = 3,
    DELETE      = 4
};

enum {
    DISABLE     = 0,
    ENABLE      = 1
};

#define sizeof_field(type, member)                              sizeof((((type *)0)->member))

#define offsetof_field(type, member)                            \
    (offsetof(type, member) + sizeof_field(type, member))


#ifndef __count_with
#define __count_with(x)
#endif

#ifndef __count_with_le
#define __count_with_le(x)
#endif

#ifndef __count_with_be
#define __count_with_be(x)
#endif

#ifndef __count_with_host
#define __count_with_host(x)
#endif

#ifndef __count_with_net
#define __count_with_net(x)
#endif

#ifndef __count_with_ptr
#define __count_with_ptr(x)
#endif

#ifdef __VOLTOS_CORE__
#define __voltos_nonstring                                      __nonstring
#else
#define __voltos_nonstring
#endif /* __VOLTOS_CORE__ */

#endif /* _VOLTOS_STDDEF_H_ */