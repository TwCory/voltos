#ifndef _VOLTOS_IP_H_
#define _VOLTOS_IP_H_

#include <voltos/access-list.h>
#include <voltos/if.h>
#include <voltos/in.h>
#include <voltos/types.h>
#include <nbapi/voltos/ip.h>

/*
 *	struct ip
 *
 *	@default_gateway:	The Default Router Address for When IP Routing Is Disabled.
 *
 */
struct ip {

	struct in_addr		default_gateway;

};


/*
 *	struct ip_interface
 *
 *	@p_addr:		Primary IP Address for the Interface.
 *	@s_addr_list:		List of Secondary Address Entries for the Interface.
 *
 *	@b_addr:		Broadcast IP Address for the Interface.
 *	@h_addr:		Helper IP Address for the Interface.
 *
 *	@ttl:			Time-to-Live for IP Packets.
 *	@mtu:			MTU Size for IP Packets.
 *
 *	@in_acl_ptr:		Inbound ACL Traffic Filter Pointer.
 *	@out_acl_ptr:		Outbound ACL Traffic Filter Pointer.
 *
 */
struct ip_interface {
	struct ip 		*ip;
	struct interface	*if_ptr;

	struct in_ifaddr	p_addr;
	struct in_ifaddr	*s_addr_list;

	struct in_addr		b_addr;
	struct in_addr		h_addr;

	__u8			ttl;
	__u16			mtu;

	struct access_list	*in_acl_ptr;
	struct access_list	*out_acl_ptr;
};

void ip_init(void);

void ip_interface_init(void);

#endif /* _VOLTOS_IP_H_ */
