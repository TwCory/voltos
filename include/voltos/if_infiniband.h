#ifndef _VOLTOS_IF_INFINIBAND_H_
#define _VOLTOS_IF_INFINIBAND_H_

#define IB_ADDR_LEN			20

struct ib_addr {
	unsigned char octets[IB_ADDR_LEN];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_INFINIBAND_H_ */