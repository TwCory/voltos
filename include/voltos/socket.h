#ifndef _VOLTOS_SOCKET_H_
#define _VOLTOS_SOCKET_H_

#include <platform/socket.h>

typedef __sockaddr_family_t         sa_family_t;

struct sockaddr {
    sa_family_t                     sa_family;
};

enum {
    AF_T_UNSPEC                     = 0,
#define AF_UNSPEC                   AF_T_UNSPEC
    AF_T_UNIX                       = 1,
#define AF_UNIX                     AF_T_UNIX
#define AF_LOCAL                    AF_T_UNIX
    AF_T_INET                       = 2,
#define AF_INET                     AF_T_INET
    AF_T_AX25                       = 3,
#define AF_AX25                     AF_T_AX25
    AF_T_IPX                        = 4,
#define AF_IPX                      AF_T_IPX
    AF_T_APPLETALK                  = 5,
#define AF_APPLETALK                AF_T_APPLETALK
    __AF_T_MAX__
};

#define AF_MAX                      (__AF_T_MAX__ - 1)

#endif /* _VOLTOS_SOCKET_H_ */