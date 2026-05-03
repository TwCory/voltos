#ifndef _NBAPI_VOLTOS_SOCKET_H_
#define _NBAPI_VOLTOS_SOCKET_H_

#define SS_SIZE_MAX                 128

typedef unsigned short              __voltos_sa_family_t;

struct __voltos_sa_storage {
    union {
        struct {
            __voltos_sa_family_t    ss_family;
            char                    ss_data[SS_SIZE_MAX - sizeof(unsigned short)];
        };
        void                        *ss_align;
    };
};

#define SOCK_TXBUF_LOCK             1
#define SOCK_RXBUF_LOCK             2

#define SOCK_BUF_LOCK_MASK          (SOCK_TXBUF_LOCK | SOCK_RXBUF_LOCK)

#define SOCK_TXREHASH_DEFAULT       255
#define SOCK_TXREHASH_DISABLED      0
#define SOCK_TXREHASH_ENABLED       1

#endif /* _NBAPI_VOLTOS_SOCKET_H_ */