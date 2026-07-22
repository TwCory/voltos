#ifndef _NBAPI_VOLTOS_AX25_H
#define _NBAPI_VOLTOS_AX25_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define AX25_ARP_HRD			3
#define AX25_PROTOCOL			93

#define AX25_CALL_SIZE			6

struct ax25_addr {
	char 				s_call[AX25_CALL_SIZE];
	char 				s_ssid;
};

struct sockaddr_ax25 {
	__voltos_sa_family_t 		sax25_family;
	struct ax25_addr 		sax25_addr;
	int 				sax25_ndigis;
};

#endif /* _NBAPI_VOLTOS_AX25_H */
