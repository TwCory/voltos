#ifndef _VOLTOS_IF_ASYNC_H_
#define _VOLTOS_IF_ASYNC_H_

typedef enum {
    ASYNC_PROTOCOL_T_NONE       = 0,
    ASYNC_PROTOCOL_T_SLIP       = 1,
    ASYNC_PROTOCOL_T_SDLC       = 2,
    ASYNC_PROTOCOL_T_SMDS       = 3,
    ASYNC_PROTOCOL_T_CSLIP      = 4,
    __ASYNC_PROTOCOL_T_MAX__
} async_protocol_t;

#endif /* _VOLTOS_IF_ASYNC_H_ */