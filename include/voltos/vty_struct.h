#ifndef _VOLTOS_VTY_STRUCT_H_
#define _VOLTOS_VTY_STRUCT_H_

#include <voltos/device.h>
#include <voltos/line.h>

struct vty {
	struct line 		*line;
	struct device 		*device;
};

#endif /* _VOLTOS_VTY_STRUCT_H_ */
