#ifndef _NBAPI_VOLTOS_IF_ETHERNET_H_
#define _NBAPI_VOLTOS_IF_ETHERNET_H_

#define ETH_ADDR_SIZE                           6

#define ETH_MTU_MIN                             68
#define ETH_MTU_MAX                             65534
#define ETH_MTU_DEFAULT                         1500

#define IF_PREFIX_Ethernet                      "Ethernet"
#define IF_PREFIX_FastEthernet                  "FastEthernet"
#define IF_PREFIX_GigabitEthernet               "GigabitEthernet"
#define IF_PREFIX_TwoGigabitEthernet            "TwoGigabitEthernet"
#define IF_PREFIX_FiveGigabitEthernet           "FiveGigabitEthernet"
#define IF_PREFIX_TenGigabitEthernet            "TenGigabitEthernet"
#define IF_PREFIX_TwentyFiveGigE                "TwentyFiveGigE"
#define IF_PREFIX_FortyGigabitEthernet          "FortyGigabitEthernet"
#define IF_PREFIX_FiftyGigabitEthernet          "FiftyGigabitEthernet"
#define IF_PREFIX_HundredGigE                   "HundredGigE"
#define IF_PREFIX_TwoHundredGigE                "TwoHundredGigE"
#define IF_PREFIX_FourHundredGigE               "FourHundredGigE"
#define IF_PREFIX_EightHundredGigE              "EightHundredGigE"
#define IF_PREFIX_TerabitEthernet               "TerabitEthernet"
#define IF_PREFIX_AppGigabitEthernet            "AppGigabitEthernet"
#define IF_PREFIX_Virtual_Ethernet              "Virtual-Ethernet"

#endif /* _NBAPI_VOLTOS_IF_ETHERNET_H_ */