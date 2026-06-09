#ifndef VOLTOS_DNS_RESOLVER_H
#define VOLTOS_DNS_RESOLVER_H

#include <voltos/in.h>
#include <voltos/in6.h>

#define DNS_RESOLVER_IPV4_MAX		6
#define DNS_RESOLVER_IPV6_MAX		6

struct dns_resolver {
	struct in_addr 			ipv4[DNS_RESOLVER_IPV4_MAX];
	struct in6_addr 		ipv6[DNS_RESOLVER_IPV6_MAX];
};

#endif /* VOLTOS_DNS_RESOLVER_H */
