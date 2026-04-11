#ifndef _VOLTOS_IF_H_
#define _VOLTOS_IF_H_

#include <voltos/types.h>

#define IF_CLASS_PREFIX_SIZE            64

typedef __voltos_if_index_t if_index_t;

typedef enum {
	IF_ADMIN_STATE_T_UNKNOWN                = 0,
    IF_ADMIN_STATE_T_UP                     = 1,
    IF_ADMIN_STATE_T_DOWN                   = 2,
    IF_ADMIN_STATE_T_TEST                   = 3,
    __IF_ADMIN_STATE_T_MAX__
} if_admin_state_t;

typedef enum {
	IF_OPER_STATE_T_INVALID                 = 0,
    IF_OPER_STATE_T_READY                   = 1,
    IF_OPER_STATE_T_NO_PASS                 = 2,
    IF_OPER_STATE_T_TEST                    = 3,
    IF_OPER_STATE_T_UNKNOWN                 = 4,
    IF_OPER_STATE_T_DORMANT                 = 5,
    IF_OPER_STATE_T_NOT_PRESENT             = 6,
    IF_OPER_STATE_T_LOWER_LAYER_DOWN        = 7,
    __IF_OPER_STATE_T_MAX__
} if_oper_state_t;

enum {
    __IF_CLASS__AppGigabitEthernet,
#define __IF_PREFIX_F__AppGigabitEthernet   "AppGigabitEthernet"
#define __IF_PREFIX_S__AppGigabitEthernet
    __IF_CLASS__AppleTalk,
#define __IF_PREFIX_F__AppleTalk    "AppleTalk"
#define __IF_PREFIX_S__AppleTalk
    __IF_CLASS__AppNav_Compress,
#define __IF_PREFIX_F__AppNav_Compress  "AppNav-Compress"
#define __IF_PREFIX_S__AppNav_Compress
    __IF_CLASS__AppNav_UnCompress,
#define __IF_PREFIX_F__AppNav_UnCompress    "AppNav-UnCompress"
#define __IF_PREFIX_S__AppNav_UnCompress
    __IF_CLASS__ARCNET,
#define __IF_PREFIX_F__ARCNET       "ARCNET"
#define __IF_PREFIX_S__ARCNET
    __IF_CLASS__Async,
#define __IF_PREFIX_F__Async    "Async"
#define __IF_PREFIX_S__Async
    __IF_CLASS__ATM,
#define __IF_PREFIX_F__ATM      "ATM"
#define __IF_PREFIX_S__ATM
    __IF_CLASS__ATM_ACR,
#define __IF_PREFIX_F__ATM_ACR      "ATM-ACR"
#define __IF_PREFIX_S__ATM_ACR
    __IF_CLASS__Auto_Template,
#define __IF_PREFIX_F__Auto_Template        "Auto-Template"
#define __IF_PREFIX_S__Auto_Template
    __IF_CLASS__BATMAN_Advanced,
#define __IF_PREFIX_F__BATMAN_Advanced      "BATMAN-Advanced"
#define __IF_PREFIX_S__BATMAN_Advanced
    __IF_CLASS__BDI,
#define __IF_PREFIX_F__BDI      "BDI"
#define __IF_PREFIX_S__BDI
    __IF_CLASS__Bluetooth,
#define __IF_PREFIX_F__Bluetooth    "Bluetooth"
#define __IF_PREFIX_S__Bluetooth
    __IF_CLASS__Bundle,
#define __IF_PREFIX_F__Bundle       "Bundle"
#define __IF_PREFIX_S__Bundle
    __IF_CLASS__BVI,
#define __IF_PREFIX_F__BVI          "BVI"
#define __IF_PREFIX_S__BVI
    __IF_CLASS__Cable_Modem,
#define __IF_PREFIX_F__Cable_Modem      "Cable-Modem"
#define __IF_PREFIX_S__Cable_Modem
    __IF_CLASS__CAN,
#define __IF_PREFIX_F__CAN              "CAN"
#define __IF_PREFIX_S__CAN
    __IF_CLASS__CDMA_1x,
#define __IF_PREFIX_F__CDMA_1x          "CDMA-1x"
#define __IF_PREFIX_S__CDMA_1x
    __IF_CLASS__Cellular,
#define __IF_PREFIX_F__Cellular         "Cellular"
#define __IF_PREFIX_S__Cellular
    __IF_CLASS__CEM,
#define __IF_PREFIX_F__CEM              "CEM"
#define __IF_PREFIX_S__CEM
    __IF_CLASS__CEM_ACR,
#define __IF_PREFIX_F__CEM_ACR          "CEM-ACR"
#define __IF_PREFIX_S__CEM_ACR
    __IF_CLASS__CTunnel,
#define __IF_PREFIX_F__CTunnel      "CTunnel"
#define __IF_PREFIX_S__CTunnel
    __IF_CLASS__Dialer,
#define __IF_PREFIX_F__Dialer       "Dialer"
#define __IF_PREFIX_S__Dialer
    __IF_CLASS__DSA,
#define __IF_PREFIX_F__DSA          "DSA"
#define __IF_PREFIX_S__DSA
    __IF_CLASS__EightHundredGigE,
#define __IF_PREFIX_F__EightHundredGigE     "EightHundredGigE"
#define __IF_PREFIX_S__EightHundredGigE
    __IF_CLASS__Embedded_Service_Engine,
#define __IF_PREFIX_F__Embedded_Service_Engine      "Embedded-Service-Engine"
#define __IF_PREFIX_S__Embedded_Service_Engine
    __IF_CLASS__Ethernet,
#define __IF_PREFIX_F__Ethernet                 "Ethernet"
#define __IF_PREFIX_S__Ethernet
    __IF_CLASS__ExpEthernet,
#define __IF_PREFIX_F__ExpEthernet              "ExpEthernet"
#define __IF_PREFIX_S__ExpEthernet
    __IF_CLASS__FastEthernet,
#define __IF_PREFIX_F__FastEthernet         "FastEthernet"
#define __IF_PREFIX_S__FastEthernet
    __IF_CLASS__FDDI,
#define __IF_PREFIX_F__FDDI             "FDDI"
#define __IF_PREFIX_S__FDDI
    __IF_CLASS__FibreChannel,
#define __IF_PREFIX_F__FibreChannel     "FibreChannel"
#define __IF_PREFIX_S__FibreChannel
    __IF_CLASS__FiftyGigabitEthernet,
#define __IF_PREFIX_F__FiftyGigabitEthernet     "FiftyGigabitEthernet"
#define __IF_PREFIX_S__FiftyGigabitEthernet
    __IF_CLASS__FiveGigabitEthernet,
#define __IF_PREFIX_F__FiveGigabitEthernet      "FiveGigabitEthernet"
#define __IF_PREFIX_S__FiveGigabitEthernet
    __IF_CLASS__FortyGigabitEthernet,
#define __IF_PREFIX_F__FortyGigabitEthernet     "FortyGigabitEthernet"
#define __IF_PREFIX_S__FortyGigabitEthernet
    __IF_CLASS__FourHundredGigE,
#define __IF_PREFIX_F__FourHundredGigE      "FourHundredGigE"
#define __IF_PREFIX_S__FourHundredGigE
    __IF_CLASS__GigabitEthernet,
#define __IF_PREFIX_F__GigabitEthernet      "GigabitEthernet"
#define __IF_PREFIX_S__GigabitEthernet
    __IF_CLASS__GMPLS,
#define __IF_PREFIX_F__GMPLS            "GMPLS"
#define __IF_PREFIX_S__GMPLS
    __IF_CLASS__Group_Async,
#define __IF_PREFIX_F__Group_Async      "Group-Async"
#define __IF_PREFIX_S__Group_Async
    __IF_CLASS__HIPPI,
#define __IF_PREFIX_F__HIPPI            "HIPPI"
#define __IF_PREFIX_S__HIPPI
    __IF_CLASS__HSSI,
#define __IF_PREFIX_F__HSSI             "HSSI"
#define __IF_PREFIX_S__HSSI
    __IF_CLASS__HundredGigE,
#define __IF_PREFIX_F__HundredGigE      "HundredGigE"
#define __IF_PREFIX_S__HundredGigE
    __IF_CLASS__InfiniBand,
#define __IF_PREFIX_F__InfiniBand       "InfiniBand"
#define __IF_PREFIX_S__InfiniBand
    __IF_CLASS__ISDN_BRI,
#define __IF_PREFIX_F__ISDN_BRI         "ISDN-BRI"
#define __IF_PREFIX_S__ISDN_BRI
    __IF_CLASS__ISDN_PRI,
#define __IF_PREFIX_F__ISDN_PRI         "ISDN-PRI"
#define __IF_PREFIX_S__ISDN_PRI
    __IF_CLASS__LISP,
#define __IF_PREFIX_F__LISP             "LISP"
#define __IF_PREFIX_S__LISP
    __IF_CLASS__LongReachEthernet,
#define __IF_PREFIX_F__LongReachEthernet    "LongReachEthernet"
#define __IF_PREFIX_S__LongReachEthernet
    __IF_CLASS__Loopback,
#define __IF_PREFIX_F__Loopback         "Loopback"
#define __IF_PREFIX_S__Loopback
    __IF_CLASS__LSP_VIF,
#define __IF_PREFIX_F__LSP_VIF          "LSP-VIF"
#define __IF_PREFIX_S__LSP_VIF
    __IF_CLASS__MFR,
#define __IF_PREFIX_F__MFR              "MFR"
#define __IF_PREFIX_S__MFR
    __IF_CLASS__Multilink,
#define __IF_PREFIX_F__Multilink        "Multilink"
#define __IF_PREFIX_S__Multilink
    __IF_CLASS__Nebula,
#define __IF_PREFIX_F__Nebula           "Nebula"
#define __IF_PREFIX_S__Nebula
    __IF_CLASS__Netlink_Monitor,
#define __IF_PREFIX_F__Netlink_Monitor      "Netlink-Monitor"
#define __IF_PREFIX_S__Netlink_Monitor
    __IF_CLASS__NFC,
#define __IF_PREFIX_F__NFC              "NFC"
#define __IF_PREFIX_S__NFC
    __IF_CLASS__Null,
#define __IF_PREFIX_F__Null             "Null"
#define __IF_PREFIX_S__Null
    __IF_CLASS__NVE,
#define __IF_PREFIX_F__NVE              "NVE"
#define __IF_PREFIX_S__NVE
    __IF_CLASS__OmniPath,
#define __IF_PREFIX_F__OmniPath         "OmniPath"
#define __IF_PREFIX_S__OmniPath
    __IF_CLASS__OpenVPN,
#define __IF_PREFIX_F__OpenVPN          "OpenVPN"
#define __IF_PREFIX_S__OpenVPN
    __IF_CLASS__Overlay,
#define __IF_PREFIX_F__Overlay          "Overlay"
#define __IF_PREFIX_S__Overlay
    __IF_CLASS__Parallel,
#define __IF_PREFIX_F__Parallel         "Parallel"
#define __IF_PREFIX_S__Parallel
    __IF_CLASS__Port_Channel,
#define __IF_PREFIX_F__Port_Channel     "Port-Channel"
#define __IF_PREFIX_S__Port_Channel
    __IF_CLASS__PRP_Channel,
#define __IF_PREFIX_F__PRP_Channel      "PRP-Channel"
#define __IF_PREFIX_S__PRP_Channel
    __IF_CLASS__Pseudowire,
#define __IF_PREFIX_F__Pseudowire       "Pseudowire"
#define __IF_PREFIX_S__Pseudowire
    __IF_CLASS__Serial,
#define __IF_PREFIX_F__Serial       "Serial"
#define __IF_PREFIX_S__Serial
    __IF_CLASS__SM,
#define __IF_PREFIX_F__SM       "SM"
#define __IF_PREFIX_S__SM
    __IF_CLASS__SoftEther,
#define __IF_PREFIX_F__SoftEther    "SoftEther"
#define __IF_PREFIX_S__SoftEther
    __IF_CLASS__STunnel,
#define __IF_PREFIX_F__STunnel          "STunnel"
#define __IF_PREFIX_S__STunnel
    __IF_CLASS__Tailscale,
#define __IF_PREFIX_F__Tailscale        "Tailscale"
#define __IF_PREFIX_S__Tailscale
    __IF_CLASS__TenGigabitEthernet,
#define __IF_PREFIX_F__TenGigabitEthernet   "TenGigabitEthernet"
#define __IF_PREFIX_S__TenGigabitEthernet
    __IF_CLASS__TerabitEthernet,
#define __IF_PREFIX_F__TerabitEthernet      "TerabitEthernet"
#define __IF_PREFIX_S__TerabitEthernet
    __IF_CLASS__TokenBus,
#define __IF_PREFIX_F__TokenBus         "TokenBus"
#define __IF_PREFIX_S__TokenBus
    __IF_CLASS__TokenRing,
#define __IF_PREFIX_F__TokenRing        "TokenRing"
#define __IF_PREFIX_S__TokenRing
    __IF_CLASS__Tunnel,
#define __IF_PREFIX_F__Tunnel           "Tunnel"
#define __IF_PREFIX_S__Tunnel
    __IF_CLASS__TwentyFiveGigE,
#define __IF_PREFIX_F__TwentyFiveGigE   "TwentyFiveGigE"
#define __IF_PREFIX_S__TwentyFiveGigE
    __IF_CLASS__TwoGigabitEthernet,
#define __IF_PREFIX_F__TwoGigabitEthernet   "TwoGigabitEthernet"
#define __IF_PREFIX_S__TwoGigabitEthernet
    __IF_CLASS__TwoHundredGigE,
#define __IF_PREFIX_F__TwoHundredGigE       "TwoHundredGigE"
#define __IF_PREFIX_S__TwoHundredGigE
    __IF_CLASS__VasiLeft,
#define __IF_PREFIX_F__VasiLeft             "VasiLeft"
#define __IF_PREFIX_S__VasiLeft
    __IF_CLASS__VasiRight,
#define __IF_PREFIX_F__VasiRight            "VasiRight"
#define __IF_PREFIX_S__VasiRight
    __IF_CLASS__VIF,
#define __IF_PREFIX_F__VIF                  "VIF"
#define __IF_PREFIX_S__VIF
    __IF_CLASS__Virtual_Access,
#define __IF_PREFIX_F__Virtual_Access       "Virtual-Access"
#define __IF_PREFIX_S__Virtual_Access
    __IF_CLASS__Virtual_CAN,
#define __IF_PREFIX_F__Virtual_CAN          "Virtual-CAN"
#define __IF_PREFIX_S__Virtual_CAN
    __IF_CLASS__Virtual_Ethernet,
#define __IF_PREFIX_F__Virtual_Ethernet     "Virtual-Ethernet"
#define __IF_PREFIX_S__Virtual_Ethernet
    __IF_CLASS__Virtual_PPP,
#define __IF_PREFIX_F__Virtual_PPP          "Virtual-PPP"
#define __IF_PREFIX_S__Virtual_PPP
    __IF_CLASS__Virtual_Template,
#define __IF_PREFIX_F__Virtual_Template     "Virtual-Template"
#define __IF_PREFIX_S__Virtual_Template
    __IF_CLASS__Virtual_TokenRing,
#define __IF_PREFIX_F__Virtual_TokenRing    "Virtual-TokenRing"
#define __IF_PREFIX_S__Virtual_TokenRing
    __IF_CLASS__VirtualPortGroup,
#define __IF_PREFIX_F__VirtualPortGroup     "VirtualPortGroup"
#define __IF_PREFIX_S__VirtualPortGroup
    __IF_CLASS__VLAN,
#define __IF_PREFIX_F__VLAN                 "VLAN"
#define __IF_PREFIX_S__VLAN
    __IF_CLASS__VMI,
#define __IF_PREFIX_F__VMI                  "VMI"
#define __IF_PREFIX_S__VMI
    __IF_CLASS__Wi_Fi,
#define __IF_PREFIX_F__Wi_Fi                "Wi-Fi"
#define __IF_PREFIX_S__Wi_Fi
    __IF_CLASS__ZeroTier,
#define __IF_PREFIX_F__ZeroTier     "ZeroTier"
#define __IF_PREFIX_S__ZeroTier
};

struct interface {
	if_index_t if_index;
	
	struct {
		
		int if_class_key;
		string if_class_prefix[IF_CLASS_PREFIX_SIZE];
		
		union {
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} AppleTalk;
			u16 AppNav_Compress;
			u16 AppNav_UnCompress;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} ARCNET;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} Async;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} ATM;
			u32 Auto_Template;
			u16 BATMAN_Advanced;
			struct {
				u8 slot;
				u16 port;
			} Bluetooth;
			u32 Bundle;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} Cable_Modem;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} CAN;
			u16 CDMA_1x;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} Cellular;
			u16 CTunnel;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} DSA;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} Ethernet;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} FDDI;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} FibreChannel;
			u32 GMPLS;
			u16 Group_Async;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} HIPPI;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} HSSI;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} InfiniBand;
			u32 Loopback;
			u16 LSP_VIF;
			u32 MFR;
			u16 Multilink;
			u16 Nebula;
			u16 Netlink_Monitor;
			u16 Null;
			u16 NVE;
			u16 OpenVPN;
			u16 Overlay;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} Parallel;
			u32 Port_Channel;
			u32 PRP_Channel;
			u32 Pseudowire;
			struct {
				u8 stack;
				u8 slot;
				u16 port;
			} Serial;
			u16 SoftEther;
			u16 STunnel;
			u16 Tailscale;
			u32 Tunnel;
			u16 VasiLeft;
			u16 VasiRight;
			u16 VIF;
			u16 Virtual_Access;
			u32 Virtual_CAN;
			u16 Virtual_Ethernet;
			u16 Virtual_PPP;
			u16 Virtual_Template;
			u16 Virtual_TokenRing;
			u16 VirtualPortGroup;
			u16 VLAN;
			u16 VMI;
			u16 ZeroTier;
		} if_path;
	} if_name_ctx;
};

#endif /* _VOLTOS_IF_H_ */