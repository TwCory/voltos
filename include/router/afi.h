#ifndef _ROUTER_AFI_H
#define _ROUTER_AFI_H

#include <voltos/types.h>

#define AFI_UNSPEC			0
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
#define AFI_XTP_IPV4			19
#define AFI_XTP_IPV6			20
#define AFI_XTP_NATIVE			21
#define AFI_FC_WWPORT			22
#define AFI_FC_WWNODE			23
#define AFI_GWID			24
#define AFI_L2VPN			25
#define AFI_MPLS_TP_SEID		26
#define AFI_MPLS_TP_LSPEID		27
#define AFI_MPLS_TP_PWEID		28
#define AFI_MT_IPV4			29
#define AFI_MT_IPV6			30
#define AFI_BGP_SFC			31
#define AFI_EIGRP_CSF			16384
#define AFI_EIGRP_IPV4_SF		16385
#define AFI_EIGRP_IPV6_SF		16386
#define AFI_LCAF			16387
#define AFI_BGP_LS			16388
#define AFI_48BIT_MAC			16389
#define AFI_64BIT_MAC			16390
#define AFI_OUI				16391
#define AFI_MAC24			16392
#define AFI_MAC40			16393
#define AFI_IPV6_64			16394
#define AFI_RBRIDGE_PORT_ID		16395
#define AFI_TRILL_NICKNAME		16396
#define AFI_UUID			16397
#define AFI_ROUTE_POLICY		16398
#define AFI_MPLS_NS			16399

#define SAFI_UNSPEC			0
#define SAFI_UNICAST			1
#define SAFI_MULTICAST			2
#define SAFI_MPLS_LABEL			4
#define SAFI_MCAST_VPN			5
#define SAFI_MULTI_SEGMENT_PW		6
#define SAFI_MCAST_VPLS			8
#define SAFI_SFC			9
#define SAFI_TUNNEL			64
#define SAFI_VPLS			65
#define SAFI_MDT			66
#define SAFI_4OVER6			67
#define SAFI_6OVER4			68
#define SAFI_L1VPN_ADI			69
#define SAFI_EVPN			70
#define SAFI_LS				71
#define SAFI_LS_VPN			72
#define SAFI_SR_POLICY			73
#define SAFI_SDWAN			74
#define SAFI_ROUTE_POLICY		75
#define SAFI_CT				76
#define SAFI_TT_FLOWSPEC		77
#define SAFI_MCAST_TREE			78
#define SAFI_DPS			79
#define SAFI_LS_SPF			80
#define SAFI_UNREACH			81
#define SAFI_CAR			83
#define SAFI_VPN_CAR			84
#define SAFI_MUP			85
#define SAFI_MPLS_LABEL_VPN		128

typedef __u16 				afi_t;
typedef __u8 				safi_t;

#endif /* _ROUTER_AFI_H */
