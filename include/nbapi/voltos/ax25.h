#ifndef _NBAPI_VOLTOS_AX25_H
#define _NBAPI_VOLTOS_AX25_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define AX25_ARP_HRD			3
#define AX25_PROTOCOL			93

#define AX25_CALL_SIZE			6
#define AX25_MTU_SIZE			256
#define AX25_DIGIS_MAX			8
#define AX25_SET_RT_IPMODE		2

#define AX25_NOUID_DEFAULT		0
#define AX25_NOUID_BLOCK		1

enum {
	AX25_CMD_T_UNSPEC		= 0,
#define AX25_CMD_UNSPEC			AX25_CMD_T_UNSPEC
	AX25_CMD_T_WINDOW		= 1,
#define AX25_CMD_WINDOW			AX25_CMD_T_WINDOW
	AX25_CMD_T_T1			= 2,
#define AX25_CMD_T1			AX25_CMD_T_T1
	AX25_CMD_T_N2			= 3,
#define AX25_CMD_N2			AX25_CMD_T_N2
	AX25_CMD_T_T3			= 4,
#define AX25_CMD_T3			AX25_CMD_T_T3
	AX25_CMD_T_T2			= 5,
#define AX25_CMD_T2			AX25_CMD_T_T2
	AX25_CMD_T_BACKOFF		= 6,
#define AX25_CMD_BACKOFF		AX25_CMD_T_BACKOFF
	AX25_CMD_T_EXTSEQ		= 7,
#define AX25_CMD_EXTSEQ			AX25_CMD_T_EXTSEQ
	AX25_CMD_T_PIDINCL		= 8,
#define AX25_CMD_PIDINCL		AX25_CMD_T_PIDINCL
	AX25_CMD_T_IDLE			= 9,
#define AX25_CMD_IDLE			AX25_CMD_T_IDLE
	AX25_CMD_T_PACLEN		= 10,
#define AX25_CMD_PACLEN			AX25_CMD_T_PACLEN
	AX25_CMD_T_IAMDIGI		= 12,
#define AX25_CMD_IAMDIGI		AX25_CMD_T_IAMDIGI
	AX25_CMD_T_KILL			= 99,
#define AX25_CMD_KILL			AX25_CMD_T_KILL
	__AX25_CMD_T_MAX__
};

#define AX25_CMD_MAX			(__AX25_CMD_T_MAX__ - 1)

struct ax25_addr {
	char 				s_call[AX25_CALL_SIZE];
	char 				s_ssid;
};

struct sockaddr_ax25 {
	__voltos_sa_family_t 		sax25_family;
	struct ax25_addr 		sax25_addr;
	int 				sax25_ndigis;
};
#define sax25_uid			sax25_ndigis

struct full_sockaddr_ax25 {
	struct sockaddr_ax25 		fsa_ax25;
	struct ax25_addr 		fsa_digipeater[AX25_DIGIS_MAX];
};

struct ax25_routes {
	struct ax25_addr 		port_addr;
	struct ax25_addr 		dst_addr;
	unsigned char 			digi_count;
	struct ax25_addr 		digi_addr[AX25_DIGIS_MAX];
};

struct ax25_route_opts {
	struct ax25_addr 		port_addr;
	struct ax25_addr 		dst_addr;
	int 				command;
	int 				arg;
};

struct ax25_control {
	struct ax25_addr 		port_addr;
	struct ax25_addr 		src_addr;
	struct ax25_addr 		dst_addr;
	unsigned int 			command;
	unsigned long 			arg;
	unsigned char 			digi_count;
	struct ax25_addr 		digi_addr[AX25_DIGIS_MAX];
};

struct ax25_context {
	unsigned int 			n2;
	unsigned int 			n2_count;

	unsigned int 			t1;
	unsigned int 			t1_timer;

	unsigned int 			t2;
	unsigned int 			t2_timer;

	unsigned int 			t3;
	unsigned int 			t3_timer;

	unsigned int 			idle;
	unsigned int 			idle_timer;

	unsigned int 			state;
	unsigned int 			rx_queue;
	unsigned int 			tx_queue;
	unsigned int 			vs;
	unsigned int 			vr;
	unsigned int 			va;
	unsigned int 			vs_max;
	unsigned int 			pac_len;
	unsigned int 			window;
};

struct ax25_forward {
	struct ax25_addr 		port_src;
	struct ax25_addr 		port_dst;
};

#endif /* _NBAPI_VOLTOS_AX25_H */
