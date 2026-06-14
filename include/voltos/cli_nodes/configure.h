// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_CLI_NODES_CONFIGURE_H
#define VOLTOS_CLI_NODES_CONFIGURE_H

#define __foreach_cli_configure_node \
    	_ ("aaa", 				"Authentication, Authorization and Accounting\n") \
    	_ ("access-list", 			"Add an Access List Entry\n") \
    	_ ("alarm-contact", 			"") \
    	_ ("alias", 				"Create a Command Alias\n") \
    	_ ("alps", 				"Configure Airline Protocol Support\n") \
    	_ ("appfw", 				"") \
    	_ ("appletalk", 			"Global AppleTalk Configuration Commands\n") \
    	_ ("aqm-register-fnf", 			"") \
    	_ ("archive", 				"Archive the System Configuration\n") \
    	_ ("arp", 				"Add a Static ARP Entry\n") \
    	_ ("async-bootp", 			"") \
    	_ ("authentication", 			"") \
    	_ ("auto", 				"") \
    	_ ("backhaul-session-manager", 		"") \
    	_ ("banner", 				"Define a Login Banner\n") \
    	_ ("bba-group", 			"") \
    	_ ("beep", 				"") \
    	_ ("bfd", 				"") \
    	_ ("bfd-template", 			"BFD Template Configuration\n") \
    	_ ("boot", 				"Configure the Boot System Parameters\n") \
    	_ ("boot-end-marker", 			"boot-end-marker\n") \
    	_ ("boot-start-marker", 		"boot-start-marker\n") \
    	_ ("bridge", 				"") \
    	_ ("bridge-domain", 			"") \
    	_ ("bridge-group", 			"") \
    	_ ("bstun", 				"") \
    	_ ("bulkstat", 				"Configure BulkStat Application\n") \
    	_ ("busy-message", 			"") \
    	_ ("call", 				"") \
    	_ ("captive-portal-bypass", 		"Enable Captive Portal Bypass for Apple Devices\n") \
    	_ ("card", 				"") \
    	_ ("carrier-id", 			"") \
    	_ ("cdp", 				"") \
    	_ ("cfg-mode", 				"") \
    	_ ("cisp", 				"") \
    	_ ("class-map", 			"") \
    	_ ("clns", 				"Global CLNS Configuration Commands\n") \
    	_ ("clock", 				"Configure the Time-of-Day Clock\n") \
    	_ ("cofp", 				"") \
    	_ ("connect", 				"Cross-Connect Multiple Interfaces\n") \
    	_ ("control-plane", 			"Configure Control Plane Services\n") \
    	_ ("controller", 			"") \
    	_ ("csdb", 				"") \
    	_ ("cwmp", 				"") \
    	_ ("decnet", 				"") \
    	_ ("default", 				"") \
    	_ ("default-value", 			"") \
    	_ ("define", 				"") \
    	_ ("device-tracking", 			"") \
    	_ ("dialer", 				"") \
    	_ ("dialer-list", 			"") \
    	_ ("diameter", 				"") \
    	_ ("dlsw", 				"Data Link Switching (DLSW) Configuration Commands\n") \
    	_ ("domain", 				"") \
    	_ ("dot1x", 				"IEEE 802.1x Global Configuration Commands\n") \
    	_ ("eap", 				"") \
    	_ ("enable", 				"") \
    	_ ("end", 				"") \
    	_ ("endpoint-tracker", 			"") \
    	_ ("eou", 				"") \
    	_ ("epm", 				"") \
    	_ ("ethernet", 				"") \
    	_ ("event", 				"") \
    	_ ("exception", 			"") \
    	_ ("exit", 				"") \
    	_ ("fallback", 				"") \
    	_ ("fhrp", 				"") \
    	_ ("file", 				"") \
    	_ ("flow", 				"") \
    	_ ("flow-sampler-map", 			"") \
    	_ ("format", 				"") \
    	_ ("frame-relay", 			"") \
    	_ ("global-address-family", 		"") \
    	_ ("gvrp", 				"") \
    	_ ("help", 				"") \
    	_ ("hostname", 				"Set the System's Network Name\n") \
    	_ ("http", 				"") \
    	_ ("hw-module", 			"") \
    	_ ("hw-programmable", 			"") \
    	_ ("identity", 				"") \
    	_ ("interface", 			"Select an Interface to Configure\n") \
    	_ ("iox", 				"") \
    	_ ("ip", 				"Global IP Configuration Commands\n") \
    	_ ("ipc", 				"Configure the IPC Subsystem\n") \
    	_ ("iphc-profile", 			"") \
    	_ ("ipv6", 				"Global IPv6 Configuration Commands\n") \
    	_ ("ipx", 				"Global IPX Configuration Commands\n") \
    	_ ("isis", 				"") \
    	_ ("ixi", 				"") \
    	_ ("key", 				"Global Key Management\n") \
    	_ ("keymap", 				"") \
    	_ ("kron", 				"") \
    	_ ("l2", 				"Layer 2 Configuration\n") \
    	_ ("l2tp", 				"") \
    	_ ("l2tp-class", 			"") \
    	_ ("l2vpn", 				"") \
    	_ ("l3vpn", 				"") \
    	_ ("lat", 				"") \
    	_ ("line", 				"") \
    	_ ("lldp", 				"") \
    	_ ("locaddr-priority-list", 		"") \
    	_ ("location", 				"") \
    	_ ("logging", 				"") \
    	_ ("login", 				"") \
    	_ ("login-string", 			"") \
    	_ ("mab", 				"") \
    	_ ("mac-address-table", 		"") \
    	_ ("map-class", 			"") \
    	_ ("map-list", 				"") \
    	_ ("mediatrace", 			"") \
    	_ ("memory", 				"") \
    	_ ("memory-size", 			"") \
    	_ ("metadata", 				"") \
    	_ ("microcode", 			"") \
    	_ ("mka", 				"") \
    	_ ("mls", 				"") \
    	_ ("modemcap", 				"") \
    	_ ("mop", 				"") \
    	_ ("mpls", 				"Global MPLS Configuration Commands\n") \
    	_ ("multilink", 			"PPP Multilink Global Configuration\n") \
    	_ ("nat64", 				"") \
    	_ ("netbios", 				"") \
    	_ ("netconf", 				"") \
    	_ ("object-group", 			"") \
    	_ ("onep", 				"") \
    	_ ("parameter-map", 			"") \
    	_ ("parser", 				"") \
    	_ ("password", 				"") \
    	_ ("pfr", 				"") \
    	_ ("pfr-map", 				"") \
    	_ ("policy", 				"") \
    	_ ("policy-map", 			"") \
    	_ ("ppp", 				"") \
    	_ ("pppoe", 				"") \
    	_ ("privilege", 			"") \
    	_ ("process", 				"") \
    	_ ("process-max-time", 			"") \
    	_ ("profile", 				"") \
    	_ ("pseudowire-class", 			"") \
    	_ ("ptp", 				"") \
    	_ ("qos", 				"") \
    	_ ("radius", 				"") \
    	_ ("radius-server", 			"") \
    	_ ("rbe", 				"") \
    	_ ("redundancy", 			"Enter Redundancy Mode\n") \
    	_ ("rlogin", 				"") \
    	_ ("rmon", 				"") \
    	_ ("route-map", 			"") \
    	_ ("route-tag", 			"") \
    	_ ("router", 				"Enable a Routing Protocol Process\n") \
    	_ ("rsrb", 				"") \
    	_ ("sampler", 				"") \
    	_ ("sap-priority-list", 		"") \
    	_ ("scheduler", 			"") \
    	_ ("scripting", 			"") \
    	_ ("sdm", 				"") \
    	_ ("secure", 				"") \
    	_ ("security", 				"") \
    	_ ("service", 				"Configure Network-Based Services\n") \
    	_ ("service-class", 			"") \
    	_ ("service-insertion", 		"") \
    	_ ("service-instance", 			"") \
    	_ ("service-list", 			"") \
    	_ ("service-routing", 			"") \
    	_ ("setup", 				"") \
    	_ ("snmp", 				"") \
    	_ ("snmp-server", 			"") \
    	_ ("sntp", 				"") \
    	_ ("spanning-tree", 			"") \
    	_ ("standby", 				"") \
    	_ ("subscriber", 			"") \
    	_ ("table-map", 			"") \
    	_ ("tacacs", 				"") \
    	_ ("tacacs-server", 			"") \
    	_ ("tarp", 				"") \
    	_ ("tech-support", 			"") \
    	_ ("template", 				"") \
    	_ ("terminal-queue", 			"") \
    	_ ("tftp-server", 			"") \
    	_ ("time-range", 			"") \
    	_ ("tn3270", 				"") \
    	_ ("track", 				"") \
    	_ ("translate", 			"") \
    	_ ("transport-map", 			"") \
    	_ ("ttycap", 				"") \
    	_ ("udld", 				"") \
    	_ ("upgrade", 				"") \
    	_ ("username", 				"Establish User Name Authentication\n") \
    	_ ("virtual-service", 			"") \
    	_ ("virtual-template", 			"") \
    	_ ("vlan", 				"") \
    	_ ("vofm", 				"") \
    	_ ("vrf", 				"") \
    	_ ("vty-async", 			"") \
    	_ ("vxlan", 				"") \
    	_ ("waas", 				"") \
    	_ ("webvpn", 				"") \
    	_ ("wsma", 				"") \
    	_ ("x25", 				"") \
    	_ ("x28", 				"") \
    	_ ("x29", 				"") \
    	_ ("x3", 				"") \
    	_ ("xconnect", 				"") \
    	_ ("xot", 				"") \
    	_ ("zone", 				"") \
    	_ ("zone-pair", 			"") \

#define __foreach_cli_configure_interface_node 		\
	_ ("AppNav-Compress", 			"") \
	_ ("AppNav-UnCompress", 		"") \
	_ ("Auto-Template", 			"") \
	_ ("BDI", 				"Bridge-Domain Interface\n") \
	_ ("Bundle", 				"Bundle Interface\n") \
	_ ("BVI", 				"Bridge Group Virtual IP Interface\n") \
	_ ("CDMA-1x", 				"") \
	_ ("CEM", 				"") \
	_ ("CTunnel", 				"") \
	_ ("Dialer", 				"Dialer Interface\n") \
	_ ("Embedded-Service-Engine", 		"") \
	_ ("GMPLS", 				"MPLS Virtual Interface\n") \
	_ ("Group-Async", 			"") \
	_ ("LISP", 				"LISP Virtual Interface\n") \
	_ ("Loopback", 				"Loopback Interface\n") \
	_ ("LSP-VIF", 				"") \
	_ ("MFR", 				"") \
	_ ("Multilink", 			"Multilink-Group Interface\n") \
	_ ("Nebula", 				"") \
	_ ("Netlink-Monitor", 			"") \
	_ ("NVE", 				"Network Virtualization Endpoint Interface\n") \
	_ ("OpenVPN", 				"") \
	_ ("Overlay", 				"Overlay Interface\n") \
	_ ("Port-Channel", 			"") \
	_ ("PRP-Channel", 			"") \
	_ ("Pseudowire", 			"") \
	_ ("SoftEther", 			"SoftEther VPN Interface\n") \
	_ ("STunnel", 				"") \
	_ ("Tailscale", 			"") \
	_ ("Tunnel", 				"Tunnel Interface\n") \
	_ ("VIF", 				"") \
	_ ("Virtual-CAN", 			"") \
	_ ("Virtual-Ethernet", 			"") \
	_ ("Virtual-PPP", 			"") \
	_ ("Virtual-Template", 			"") \
	_ ("Virtual-TokenRing", 		"") \
	_ ("VirtualPortGroup", 			"") \
	_ ("VLAN", 				"") \
	_ ("VMI", 				"Virtual Multipoint Interface\n") \
	_ ("ZeroTier", 				"") \

#define __foreach_cli_configure_router_node 										\
	_ ("babel", 				"Babel Routing Protocol\n") 							\
	_ ("bgp", 				"Border Gateway Protocol (BGP)\n") 						\
	_ ("eigrp", 				"Cisco Enhanced Interior Gateway Routing Protocol (EIGRP)\n") 			\
	_ ("hsls", 				"Hazy-Sighted Link State (HSLS) Routing Protocol\n") 				\
	_ ("isis", 				"ISO/IEC Intermediate System to Intermediate System (IS-IS)\n") 		\
	_ ("iso-igrp", 				"Cisco Interior Gateway Routing Protocol (IGRP) for ISO/IEC Networks\n") 	\
	_ ("lisp", 				"Locator/ID Separation Protocol (LISP)\n") 					\
	_ ("mobile", 				"Mobile IP Routes\n") 								\
	_ ("olsr", 				"Optimized Link State Routing (OLSR) Protocol\n") 				\
	_ ("openfabric", 			"IETF OpenFabric Link State Protocol\n") 					\
	_ ("ospf", 				"Open Shortest Path First (OSPF)\n") 						\
	_ ("ospfv3", 				"Open Shortest Path First Version 3 (OSPFv3)\n") 				\
	_ ("rip", 				"Routing Information Protocol (RIP)\n") 					\
	_ ("zhls", 				"Zone-Based Hierarchical Link State (ZHLS) Routing Protocol\n") 		\

#endif /* VOLTOS_CLI_NODES_CONFIGURE_H */
