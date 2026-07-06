#ifndef _VOLTOS_NFC_H
#define _VOLTOS_NFC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_nfc {
	__voltos_sa_family_t snfc_family;
};

#endif /* _VOLTOS_NFC_H */
