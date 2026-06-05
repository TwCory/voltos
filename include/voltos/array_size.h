// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ARRAY_SIZE_H
#define VOLTOS_ARRAY_SIZE_H

#ifndef array_size
#define array_size(array)		(sizeof(array) / sizeof((array)[0]))
#endif /* array_size */

#endif /* VOLTOS_ARRAY_SIZE_H */
