#ifndef VOLTOS_IF_H
#define VOLTOS_IF_H

#include <voltos/types.h>
#include <nbapi/voltos/if.h>

struct interface {
	__voltos_if_index_t 		index;
	char 				description[IF_DESCRIPTION_SIZE];

	enum if_oper_state 		oper_state;
	enum if_link_state 		link_state;

	enum if_hw_type 		hw_type;
	unsigned int 			hw_addr_size;
	char 				hw_addr[IF_HARDWARE_ADDRESS_SIZE];
	char 				bi_addr[IF_HARDWARE_ADDRESS_SIZE];

	unsigned int 			mtu;
	unsigned int 			bandwidth;
	unsigned int 			delay;
	__u8 				reliability;
	__u8 				tx_load;
	__u8 				rx_load;

	enum if_encap_type 		encapsulation;
	bool 				loopback_set;
	bool 				keepalive_set;
	unsigned int 			keepalive;

	enum if_input_flowctl_state 	input_flowctl_state;
	enum if_output_flowctl_state 	output_flowctl_state;
	
	enum if_queue_type 		queue_type;

	void 				*user_ctx;
	void 				*internal_ctx;
};

#endif /* VOLTOS_IF_H */
