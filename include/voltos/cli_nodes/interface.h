#ifndef _VOLTOS_CLI_NODES_INTERFACE_H_
#define _VOLTOS_CLI_NODES_INTERFACE_H_


#define __foreach_cli_interface_node		\
	_ ("access-session", 		"Access Session Per-Interface Configuration Commands\n") \
	_ ("appletalk", 		"Interface-Specific AppleTalk Configuration Commands\n") \
	_ ("backup", 			"Modify Interface Backup Parameters\n") \
	_ ("bandwidth", 		"Set Interface Bandwidth Informational Parameter\n") \
	_ ("bfd", 			"BFD Interface Configuration Commands\n") \
	_ ("clns", 			"Interface-Specific CLNS Configuration Commands\n") \
	_ ("dampening", 		"Enable Event Dampening for this Interface\n") \
	_ ("decnet", 			"Interface-Specific DECnet Configuration Commands\n") \
	_ ("delay", 			"Set Interface Throughput Delay\n") \
	_ ("description", 		"Interface-Specific Description\n") \
	_ ("do-exec", 			"Run an Exec Mode Command from Configuration Mode\n") \
	_ ("domain", 			"Specify a Domain for this Interface\n") \
	_ ("export-name", 		"Add Name to Be Exported for this Interface\n") \
	_ ("history", 			"") \
	_ ("hold-queue", 		"Set Interface Hold Queue Depth\n") \
	_ ("ip", 			"Interface-Specific IP Configuration Commands\n") \
	_ ("ipv6", 			"Interface-Specific IPv6 Configuration Commands\n") \
	_ ("ipx", 			"Interface-Specific IPX Configuration Commands\n") \
	_ ("isis", 			"IS-IS Configuration Commands\n") \
	_ ("keepalive", 		"Enable Interface Keepalive\n") \
	_ ("load-interval", 		"Specify Interval for Load Calculation for this Interface\n") \
	_ ("logging", 			"Configure Logging for this Interface\n") \
	_ ("max-reserved-bandwidth", 	"Maximum Reservable Bandwidth for this Interface\n") \
	_ ("mop", 			"MOP Interface Configuration\n") \
	_ ("mpls", 			"Interface-Specific MPLS Configuration Commands\n") \
	_ ("mtu", 			"Set the Interface Maximum Transmission Unit (MTU) Size\n") \
	_ ("no", 			"Negate a Command or Reset to It's Defaults\n") \
	_ ("redundancy", 		"Redundancy Group (RG) Per-Interface Configuration\n") \
	_ ("service-insertion", 	"") \
	_ ("shutdown", 			"Shut Down the Specified Interface\n") \
	_ ("source", 			"Retrieve Interface Configuration from Another Source\n") \
	_ ("srlg", 			"") \
	_ ("standby", 			"") \
	_ ("storm-control", 		"") \
	_ ("subscriber", 		"") \
	_ ("trust", 			"") \
	_ ("uplink", 			"") \
	_ ("vrf", 			"") \
	_ ("x25", 			"") \
	_ ("zone-member", 		"") \

#endif /* _VOLTOS_CLI_NODES_INTERFACE_H_ */
