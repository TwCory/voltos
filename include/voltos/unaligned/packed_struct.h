#ifndef _VOLTOS_UNALIGNED_PACKED_STRUCT_H_
#define _VOLTOS_UNALIGNED_PACKED_STRUCT_H_

#include <voltos/types.h>

struct __unaligned_u16 {
	u16 data;
} __attribute__ ((packed));

struct __unaligned_u32 {
	u32 data;
} __attribute__ ((packed));

struct __unaligned_u64 {
	u64 data;
} __attribute__ ((packed));

#endif /* _VOLTOS_UNALIGNED_PACKED_STRUCT_H_ */
