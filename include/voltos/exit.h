// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_EXIT_H_
#define _VOLTOS_EXIT_H_

#define __voltos_exit(fn)               \
    fn __attribute ((destructor));      \
    fn

#endif /* _VOLTOS_EXIT_H_ */