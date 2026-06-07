#ifndef VOLTOS_BBU_H
#define VOLTOS_BBU_H

#include <voltos/device.h>
#include <nbapi/voltos/bbu.h>

struct bbu {
	__voltos_bbu_idx_t 	bbu_index;

	struct device 		*device;
};

#endif /* VOLTOS_BBU_H */
