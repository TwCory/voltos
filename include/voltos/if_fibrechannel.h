#ifndef _VOLTOS_IF_FIBRECHANNEL_H_
#define _VOLTOS_IF_FIBRECHANNEL_H_

#define FC_ADDR_LEN             6

struct fc_addr {
	unsigned char octets[FC_ADDR_LEN];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_FIBRECHANNEL_H_ */