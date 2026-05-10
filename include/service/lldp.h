#ifndef _LLDP_SERVICE_H_
#define _LLDP_SERVICE_H_

#include <voltos/if.h>
#include <voltos/types.h>

#define LLDP_HOLD_TIME_MIN			0
#define LLDP_HOLD_TIME_MAX			65535
#define LLDP_HOLD_TIME_DEFAULT			120

#define LLDP_REINIT_DELAY_MIN			2
#define LLDP_REINIT_DELAY_MAX			5
#define LLDP_REINIT_DELAY_DEFAULT		2

#define LLDP_SEND_RATE_MIN			5
#define LLDP_SEND_RATE_MAX			65534
#define LLDP_SEND_RATE_DEFAULT			30

enum {
	LLDP_TLV_T_MAC_PHY_CFG			= 1,
	LLDP_TLV_T_MANAGEMENT_ADDRESS		= 2,
	LLDP_TLV_T_PORT_DESCRIPTION		= 3,
	LLDP_TLV_T_PORT_VLAN			= 4,
	LLDP_TLV_T_SYSTEM_CAPABILITIES		= 5,
	LLDP_TLV_T_SYSTEM_DESCRIPTION		= 6,
	LLDP_TLV_T_SYSTEM_NAME			= 7,
	__LLDP_TLV_T_MAX__
};

#define LLDP_TLV_MAX

enum {
	LLDP_MED_TLV_T_INVENTORY_MANAGEMENT	= 1,
	LLDP_MED_TLV_T_NETWORK_POLICY		= 2,
	LLDP_MED_TLV_T_POWER_MANAGEMENT		= 3,
	__LLDP_MED_TLV_T_MAX__
};

#define LLDP_MED_TLV_MAX

struct lldp {
	bool 					enabled;

	u16 					hold_time;
	unsigned char 				reinit_delay;
	u16					send_rate;

	char					tlv_select[LLDP_TLV_MAX];
};

struct lldp_interface {
	struct lldp 				*lldp;
	struct interface			*if_ptr;

	bool					receive;
	bool					transmit;

	char					med_tlv_select[LLDP_MED_TLV_MAX];
};

void lldp_init(void);
void lldp_interface_init(void);

int lldp_send(struct lldp *);
int lldp_send_shutdown(struct lldp *);
int lldp_decode(struct lldp *);


#endif /* _LLDP_SERVICE_H_ */
