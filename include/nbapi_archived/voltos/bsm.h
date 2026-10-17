// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bsm.h
 *
 *	Backhaul Session Manager (BSM)
 *	Engine Definitions
 */

#ifndef _NBAPI_VOLTOS_BSM_H
#define _NBAPI_VOLTOS_BSM_H

#include <voltos/types.h>

#define BSM_GROUP_NAME_SIZE			32
#define BSM_SET_NAME_SIZE			32

typedef __u8					bsm_priority_t;
typedef __u32					bsm_sid_t;

enum bsm_session_state {
	BSM_SESSION_STATE_T_UNSPEC		= 0,
	BSM_SESSION_STATE_T_OPEN		= 1,
	BSM_SESSION_STATE_T_OPEN_WAIT		= 2,
	BSM_SESSION_STATE_T_OPEN_XFER		= 3,
	BSM_SESSION_STATE_T_CLOSE		= 4,
	BSM_SESSION_STATE_T_MAX
};

enum bsm_group_state {
	BSM_GROUP_STATE_T_UNSPEC		= 0,
	BSM_GROUP_STATE_T_OUT_OF_SERVICE	= 1,
	BSM_GROUP_STATE_T_IN_SERVICE		= 2,
	BSM_GROUP_STATE_T_MAX
};

enum bsm_group_vsc_state {
	BSM_GROUP_VSC_STATE_T_UNSPEC		= 0,
	BSM_GROUP_VSC_STATE_T_STANDBY		= 1,
	BSM_GROUP_VSC_STATE_T_ACTIVE		= 2,
	BSM_GROUP_VSC_STATE_T_NONE		= 3,
	BSM_GROUP_VSC_STATE_T_MAX
};

struct bsm_group_stats {
	__u64 					failovers_successful;
	__u64 					failovers_unsuccessful;
	__u64 					rx_active_packets;
	__u64 					rx_standby_packets;
};

struct bsm_session_stats {
	__u64 					resets;
	__u64 					auto_resets;
	__u64 					rudp_unexpected_transitions_total;
	__u64 					rudp_unexpected_transitions_last_reset;
	__u64 					rx_packets_total;
	__u64 					rx_packets_last_reset;
	__u64 					rx_failures_total;
	__u64 					rx_failures_last_reset;
	__u64 					tx_packets_total;
	__u64 					tx_packets_last_reset;
	__u64 					tx_pdu_failures_blocking_total;
	__u64 					tx_pdu_failures_blocking_last_reset;
	__u64 					tx_pdu_failures_other_total;
	__u64 					tx_pdu_failures_other_last_reset;
	__u64 					tx_nonpdu_failures_blocking_total;
	__u64 					tx_nonpdu_failures_blocking_last_reset;
	__u64 					tx_nonpdu_failures_other_total;
	__u64 					tx_nonpdu_failures_other_last_reset;

	__u64 					rudp_open_failures;
	__u64 					rudp_not_ready_failures;
	__u64 					rudp_conn_not_open_failures;
	__u64 					rudp_send_window_full_failures;
	__u64 					rudp_resource_unavailable_failures;
	__u64 					rudp_enqueue_failures;
};

#endif /* _NBAPI_VOLTOS_BSM_H */
