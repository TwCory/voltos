#ifndef NET_IP_NAT_H
#define NET_IP_NAT_H

#include <voltos/in.h>
#include <voltos/ip_nat.h>
#include <voltos/types.h>

struct nat44_translation_table {

};

struct nat44_translation_ctx {
	__u8 			protocol;

	struct in_addr 		inside_global_address;
	__net16 		inside_global_port;

	struct in_addr		inside_local_address;
	__net16			inside_local_port;

	struct in_addr		outside_local_address;
	__net16			outside_local_port;

	struct in_addr		outside_global_address;
	__net16			outside_global_port;
};

#endif /* NET_IP_NAT_H */
