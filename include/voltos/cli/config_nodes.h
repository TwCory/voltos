#ifndef _VOLTOS_CLI_CONFIG_NODES_H_
#define _VOLTOS_CLI_CONFIG_NODES_H_

#define __config_node_list \
    _ ("aaa", "Authentication, Authorization and Accounting\n") \
    _ ("access-list", "Add an Access List Entry\n") \
    _ ("alarm-contact", "") \
    _ ("alias", "Create a Command Alias\n") \
    _ ("alps", "Configure Airline Protocol Support\n") \
    _ ("appfw", "") \
    _ ("appletalk", "Global AppleTalk Configuration Commands\n") \
    _ ("aqm-register-fnf", "") \
    _ ("archive", "Archive the System Configuration\n") \
    _ ("arp", "Add a Static ARP Entry\n") \
    _ ("async-bootp", "") \
    _ ("authentication", "") \
    _ ("auto", "") \
    _ ("backhaul-session-manager", "") \
    _ ("banner", "Define a Login Banner\n") \
    _ ("bba-group", "") \
    _ ("beep", "") \
    _ ("bfd", "") \
    _ ("bfd-template", "BFD Template Configuration\n") \
    _ ("boot", "Configure the Boot System Parameters\n") \
    _ ("boot-end-marker", "") \
    _ ("boot-start-marker", "") \
    _ ("bridge", "") \
    _ ("bridge-domain", "") \
    _ ("bridge-group", "") \
    _ ("bstun", "") \
    _ ("bulkstat", "Configure BulkStat Application\n") \
    _ ("busy-message", "") \
    _ ("call", "") \
    _ ("captive-portal-bypass", "Enable Captive Portal Bypass for Apple Devices\n") \
    _ ("card", "") \
    _ ("carrier-id", "") \
    _ ("cdp", "") \
    _ ("cfg-mode", "") \
    _ ("cisp", "") \
    _ ("class-map", "") \
    _ ("clns", "Global CLNS Configuration Commands\n") \
    _ ("clock", "Configure the Time-of-Day Clock\n") \
    _ ("cofp", "") \
    _ ("connect", "") \
    _ ("control-plane", "") \
    _ ("controller", "") \
    _ ("csdb", "") \
    _ ("cwmp", "") \
    _ ("decnet", "") \
    _ ("default", "") \
    _ ("default-value", "") \
    _ ("define", "") \
    _ ("device-tracking", "") \
    _ ("dialer", "") \
    _ ("dialer-list", "") \
    _ ("diameter", "") \
    _ ("dlsw", "Data Link Switching (DLSW) Configuration Commands\n") \
    _ ("domain", "") \
    _ ("dot1x", "") \
    _ ("eap", "") \
    _ ("enable", "") \
    _ ("end", "") \
    _ ("endpoint-tracker", "") \
    _ ("eou", "") \
    _ ("epm", "") \
    _ ("ethernet", "") \
    _ ("event", "") \
    _ ("exception", "") \
    _ ("exit", "") \
    _ ("fallback", "") \
    _ ("fhrp", "") \
    _ ("file", "") \
    _ ("flow", "") \
    _ ("flow-sampler-map", "") \
    _ ("format", "") \
    _ ("frame-relay", "") \
    _ ("global-address-family", "") \
    _ ("gvrp", "") \
    _ ("help", "") \
    _ ("hostname", "") \
    _ ("http", "") \
    _ ("hw-module", "") \
    _ ("hw-programmable", "") \
    _ ("identity", "") \
    _ ("interface", "") \
    _ ("iox", "") \
    _ ("ip", "Global IP Configuration Commands\n") \
    _ ("ipc", "") \
    _ ("iphc-profile", "") \
    _ ("ipv6", "Global IPv6 Configuration Commands\n") \
    _ ("ipx", "Global IPX Configuration Commands\n") \
    _ ("isis", "") \
    _ ("ixi", "") \
    _ ("key", "") \
    _ ("keymap", "") \
    _ ("kron", "") \
    _ ("l2", "") \
    _ ("l2tp", "") \
    _ ("l2tp-class", "") \
    _ ("l2vpn", "") \
    _ ("l3vpn", "") \
    _ ("lat", "") \
    _ ("line", "") \
    _ ("lldp", "") \
    _ ("locaddr-priority-list", "") \
    _ ("location", "") \
    _ ("logging", "") \
    _ ("login", "") \
    _ ("login-string", "") \
    _ ("mab", "") \
    _ ("mac-address-table", "") \
    _ ("map-class", "") \
    _ ("map-list", "") \
    _ ("mediatrace", "") \
    _ ("memory", "") \
    _ ("memory-size", "") \
    _ ("metadata", "") \
    _ ("microcode", "") \
    _ ("mka", "") \
    _ ("mls", "") \
    _ ("modemcap", "") \
    _ ("mop", "") \
    _ ("mpls", "Global MPLS Configuration Commands\n") \
    _ ("multilink", "PPP Multilink Global Configuration\n") \
    _ ("nat64", "") \
    _ ("netbios", "") \
    _ ("netconf", "") \
    _ ("object-group", "") \
    _ ("onep", "") \
    _ ("parameter-map", "") \
    _ ("parser", "") \
    _ ("password", "") \
    _ ("pfr", "") \
    _ ("pfr-map", "") \
    _ ("policy", "") \
    _ ("policy-map", "") \
    _ ("ppp", "") \
    _ ("pppoe", "") \
    _ ("privilege", "") \
    _ ("process", "") \
    _ ("process-max-time", "") \
    _ ("profile", "") \
    _ ("pseudowire-class", "") \
    _ ("ptp", "") \
    _ ("qos", "") \
    _ ("radius", "") \
    _ ("radius-server", "") \
    _ ("rbe", "") \
    _ ("redundancy", "") \
    _ ("rlogin", "") \
    _ ("rmon", "") \
    _ ("route-map", "") \
    _ ("route-tag", "") \
    _ ("router", "") \
    _ ("rsrb", "") \
    _ ("sampler", "") \
    _ ("sap-priority-list", "") \
    _ ("scheduler", "") \
    _ ("scripting", "") \
    _ ("sdm", "") \
    _ ("secure", "") \
    _ ("security", "") \
    _ ("service", "") \
    _ ("service-class", "") \
    _ ("service-insertion", "") \
    _ ("service-instance", "") \
    _ ("service-list", "") \
    _ ("service-routing", "") \
    _ ("setup", "") \
    _ ("snmp", "") \
    _ ("snmp-server", "") \
    _ ("sntp", "") \
    _ ("spanning-tree", "") \
    _ ("standby", "") \
    _ ("subscriber", "") \
    _ ("table-map", "") \
    _ ("tacacs", "") \
    _ ("tacacs-server", "") \
    _ ("tarp", "") \
    _ ("tech-support", "") \
    _ ("template", "") \
    _ ("terminal-queue", "") \
    _ ("tftp-server", "") \
    _ ("time-range", "") \
    _ ("tn3270", "") \
    _ ("track", "") \
    _ ("translate", "") \
    _ ("transport-map", "") \
    _ ("ttycap", "") \
    _ ("udld", "") \
    _ ("upgrade", "") \
    _ ("username", "") \
    _ ("virtual-service", "") \
    _ ("virtual-template", "") \
    _ ("vlan", "") \
    _ ("vofm", "") \
    _ ("vrf", "") \
    _ ("vty-async", "") \
    _ ("vxlan", "") \
    _ ("waas", "") \
    _ ("webvpn", "") \
    _ ("wsma", "") \
    _ ("x25", "") \
    _ ("x28", "") \
    _ ("x29", "") \
    _ ("x3", "") \
    _ ("xconnect", "") \
    _ ("xot", "") \
    _ ("zone", "") \
    _ ("zone-pair", "") \

#endif /* _VOLTOS_CLI_CONFIG_NODES_H_ */