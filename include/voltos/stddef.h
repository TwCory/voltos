#ifndef _VOLTOS_STDDEF_H_
#define _VOLTOS_STDDEF_H_

#undef NULL
#define NULL                                        ((void *) 0)

#undef offsetof
#define offsetof(type, member)                      __builtin_offsetof(type, member)

#ifndef __always_inline
#define __always_inline                             inline
#endif /* __always_inline */

#ifndef __static_always_inline
#define __static_always_inline                      static inline
#endif /* __static_always_inline */

#ifndef __VOLTOS_DEBUG__
#define __VOLTOS_DEBUG__                            0
#endif /* __VOLTOS_DEBUG__ */

#ifndef __VOLTOS_NULLPTR_DEF__
#define __VOLTOS_NULLPTR_DEF__                      1
typedef NULL                                        nullptr;
#endif /* __VOLTOS_NULLPTR_DEF__ */

#ifndef __VOLTOS_PTRDIFF_DEF__
#define __VOLTOS_PTRDIFF_DEF__                      1
typedef typeof((int*)nullptr - (int*)nullptr)       ptrdiff;
#endif /* __VOLTOS_PTRDIFF_DEF__ */

#ifdef __VOLTOS_CORE__
#define __voltos_nonstring                          __nonstring
#else
#define __voltos_nonstring
#endif /* __VOLTOS_CORE__ */

#endif /* _VOLTOS_STDDEF_H_ */