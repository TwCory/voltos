// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_AUDIT_H_
#define _VOLTOS_AUDIT_H_

#include <voltos/types.h>

struct audit_rule {
    u32 pflags;
    u32 flags;
};

#endif /* _VOLTOS_AUDIT_H_ */