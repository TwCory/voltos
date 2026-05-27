#ifndef _VOLTOS_ARRAY_SIZE_H_
#define _VOLTOS_ARRAY_SIZE_H_

#ifndef array_size
#define array_size(array)		(sizeof(array) / sizeof((array)[0]))
#endif /* array_size */

#endif /* _VOLTOS_ARRAY_SIZE_H_ */
