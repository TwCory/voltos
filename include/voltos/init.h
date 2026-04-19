// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_INIT_H_
#define _VOLTOS_INIT_H_

#define __voltos_init(fn)               \
    fn __attribute ((constructor));     \
    fn

#endif /* _VOLTOS_INIT_H_ */