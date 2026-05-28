#ifndef _ROUTER_AFI_H_
#define _ROUTER_AFI_H_

#define AFI_IPV4			1
#define AFI_IPV6			2
#define AFI_NSAP			3
#define AFI_HDLC			4
#define AFI_BBN1822			5
#define AFI_IEEE802			6
#define AFI_E163			7
#define AFI_E164			8
#define AFI_F69				9
#define AFI_X121			10
#define AFI_IPX				11
#define AFI_APPLETALK			12
#define AFI_DECNET			13
#define AFI_VINES			14
#define AFI_DNS				16
#define AFI_DNAME			17
#define AFI_ASN				18
#define AFI_XTPV4			19
#define AFI_XTPV6			20
#define AFI_XTP				21
#define AFI_GWID			24
#define AFI_L2VPN			25
#define AFI_MPLSTPSEI			26
#define AFI_MPLSTPLEI			27
#define AFI_MPLSTPPEI			28
#define AFI_MTV4			29
#define AFI_MTV6			30
#define AFI_BGPSFC			31
#define AFI_EIGRPCSF			16384
#define AFI_EIGRPV4SF			16385
#define AFI_EIGRPV6SF			16386
#define AFI_LCAF			16387
#define AFI_BGPLS			16388
#define AFI_MAC48			16389
#define AFI_MAC64			16390
#define AFI_OUI				16391
#define AFI_MAC24			16392
#define AFI_MAC40			16393
#define AFI_IPV664			16394
#define AFI_RBPID			16395
#define AFI_TRILLNN			16396
#define AFI_UUID			16397
#define AFI_RTPOLICY			16398
#define AFI_MPLSNS			16399

#define SAFI_UNICAST			1
#define SAFI_MULTICAST			2
#define SAFI_MPLS			4
#define SAFI_MVPN			5
#define SAFI_DPMSPW			6
#define SAFI_MVPLS			8
#define SAFI_BGPSFC			9
#define SAFI_TUNNEL			64
#define SAFI_VPLS			65
#define SAFI_BGPMDT			66
#define SAFI_BGP4O6			67
#define SAFI_BGP6O4			68
#define SAFI_L1VPNADI			69
#define SAFI_BGPEVPN			70
#define SAFI_BGPLS			71
#define SAFI_BGPLSVPN			72
#define SAFI_SRPOLICY			73
#define SAFI_SDWANCAP			74
#define SAFI_RTPOLICY			75
#define SAFI_CT				76
#define SAFI_TTFS			77
#define SAFI_MTREE			78
#define SAFI_BGPDPS			79
#define SAFI_BGPLSSPF			80
#define SAFI_UNREACH			81
#define SAFI_BGPCAR			83
#define SAFI_BGPVPNCAR			84
#define SAFI_BGPMUP			85
#define SAFI_MPLSVPN			128
#define SAFI_VPNMCAST			129
#define SAFI_RTCONSTR			132
#define SAFI_DFSR			133
#define SAFI_L3VPNDFSR			134
#define SAFI_VPNAD			140

typedef unsigned short 			afi_t;
typedef unsigned char 			safi_t;

#endif /* _ROUTER_AFI_H_ */
