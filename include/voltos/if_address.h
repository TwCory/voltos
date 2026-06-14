#ifndef VOLTOS_IF_ADDRESS_H
#define VOLTOS_IF_ADDRESS_H

#include <voltos/if.h>
#include <nbapi/voltos/if_address.h>

struct if_address_ctx {
	struct interface 		*interface;
	enum if_address_family 		family;
};

#endif /* VOLTOS_IF_ADDRESS_H */
