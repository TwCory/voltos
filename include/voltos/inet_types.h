#ifndef _VOLTOS_INET_TYPES_H_
#define _VOLTOS_INET_TYPES_H_

#include <voltos/types.h>

typedef signed char     hostname_t;
typedef signed char     domain_name_t;

typedef __u8            ip_protocol_t;
typedef __u16           ip_port_t;

typedef struct {
    __u8                octets[4];
} ipv4_address_t;

typedef struct {
    __u16               hextets[8];
} ipv6_address_t;

typedef struct {
    ipv4_address_t      address;
    __u8                prefix_length;
} ipv4_prefix_t;

typedef struct {
    ipv6_address_t      address;
    __u8                prefix_length;
} ipv6_prefix_t;


#define __ipv4_address(A, B, C, D)
#define __ipv6_address(X1, X2, X3, X4, X5, X6, X7, X8)

#define __ipv4_prefix(A, B, C, D, PL)
#define __ipv6_prefix(X1, X2, X3, X4, X5, X6, X7, X8, PL)

#endif /* _VOLTOS_INET_TYPES_H_ */