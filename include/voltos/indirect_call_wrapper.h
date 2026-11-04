// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/indirect_call_wrapper.h
 *
 */

#ifndef _VOLTOS_INDIRECT_CALL_WRAPPER_H
#define _VOLTOS_INDIRECT_CALL_WRAPPER_H

#ifndef INDIRECT_CALL_1
#define INDIRECT_CALL_1(f, f1, ...)
#endif /* INDIRECT_CALL_1 */

#ifndef INDIRECT_CALL_2
#define INDIRECT_CALL_2(f, f2, f1, ...)
#endif /* INDIRECT_CALL_2 */

#ifndef INDIRECT_CALL_3
#define INDIRECT_CALL_3(f, f3, f2, f1, ...)
#endif /* INDIRECT_CALL_3 */

#ifndef INDIRECT_CALL_4
#define INDIRECT_CALL_4(f, f4, f3, f2, f1 ...)
#endif /* INDIRECT_CALL_4 */

#ifndef INDIRECT_CALLABLE_DECLARE
#define INDIRECT_CALLABLE_DECLARE(f)
#endif /* INDIRECT_CALLABLE_DECLARE */

#ifndef INDIRECT_CALLABLE_SCOPE
#define INDIRECT_CALLABLE_SCOPE				static
#endif /* INDIRECT_CALLABLE */

#ifndef EXPORT_INDIRECT_CALLABLE
#define EXPORT_INDIRECT_CALLABLE(f)
#endif /* EXPORT_INDIRECT_CALLABLE */

#ifndef INDIRECT_CALL_INET
#define INDIRECT_CALL_INET(f, f2, f1, ...)
#endif /* INDIRECT_CALL_INET */

#ifndef INDIRECT_CALL_INET_1
#define INDIRECT_CALL_INET_1(f, f1, ...)
#endif /* INDIRECT_CALL_INET_1 */

#endif /* _VOLTOS_INDIRECT_CALL_WRAPPER_H */
