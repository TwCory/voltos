#ifndef _NBAPI_VOLTOS_HDLC_H_
#define _NBAPI_VOLTOS_HDLC_H_

#include <voltos/types.h>

struct hdlc_hdr {
	__u8 			flag;
	__u_char 		*address;
	union {
		__u8 		ctl_u8;
		__net16 	ctl_u16;
	} control;
};

struct chdlc_hdr {
	__u8 			address;
	__u8 			control;
	__net16 		protocol;
};

#endif /* _NBAPI_VOLTOS_HDLC_H_ */
