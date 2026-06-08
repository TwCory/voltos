#ifndef VOLTOS_RANGE_H
#define VOLTOS_RANGE_H

#include <voltos/types.h>

struct range {
	u64 			start;
	u64 			stop;
	unsigned char 		step;
};

#define __range(start, stop, step)

#endif /* VOLTOS_RANGE_H */
