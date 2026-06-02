#ifndef _VOLTOS_L2TP_CLASS_H_
#define _VOLTOS_L2TP_CLASS_H_

#include <nbapi/voltos/l2tp-class.h>

struct l2tp_class {
	__voltos_l2tp_class_idx_t 	index;
	char 				name[L2TP_CLASS_NAME_SIZE];
};

#endif /* _VOLTOS_L2TP_CLASS_H_ */
