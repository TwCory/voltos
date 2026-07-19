#ifndef _ROUTER_VRF_H
#define _ROUTER_VRF_H

#include <voltos/types.h>
#include <nbapi/voltos/vrf.h>

struct vrf_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
		struct {

		} ipv4_multicast;
		struct {

		} ipv6_multicast;
	} address_family;
};

struct vrf_interface_conf {

};

#endif /* _ROUTER_VRF_H */
