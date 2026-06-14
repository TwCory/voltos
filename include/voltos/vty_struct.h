#ifndef VOLTOS_VTY_STRUCT_H
#define VOLTOS_VTY_STRUCT_H

#include <voltos/device.h>
#include <voltos/line.h>

struct vty {
	struct line 		*line;
	struct device 		*device;
};

#endif /* VOLTOS_VTY_STRUCT_H */
