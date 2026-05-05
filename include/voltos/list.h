// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_LIST_H_
#define _VOLTOS_LIST_H_

struct list_head {
    struct list_head *next;
    struct list_head *prev;
};

#endif /* _VOLTOS_LIST_H_ */