// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PLATFORM_ATOMIC_H_
#define _PLATFORM_ATOMIC_H_

#include <stdatomic.h>

#ifndef __atomic__
#define __atomic__              _Atomic
#endif /* __atomic__ */

#endif /* _PLATFORM_ATOMIC_H_ */