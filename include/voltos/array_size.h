// SPDX-License-Identifier: BSD-3-Clause

/*
 *  voltos/include/voltos/array_size.h
 *
 *  Copyright (C) 2020, 2024 Cory Voltz
 * 
 */

#ifndef _VOLTOS_ARRAY_SIZE_H_
#define _VOLTOS_ARRAY_SIZE_H_

#ifndef __array_size
#define __array_size(array)     (sizeof(array)/sizeof(array[0]))
#endif /* __array_size */

#endif /* _VOLTOS_ARRAY_SIZE_H_ */