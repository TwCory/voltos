#ifndef _VOLTOS_LINE_H_
#define _VOLTOS_LINE_H_

#include <voltos/device.h>
#include <nbapi/voltos/line.h>

struct line {
	__voltos_line_idx_t 	index;
	struct device 		*device;
};

#endif /* _VOLTOS_LINE_H_ */
