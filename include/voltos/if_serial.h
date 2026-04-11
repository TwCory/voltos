#ifndef _VOLTOS_IF_SERIAL_H_
#define _VOLTOS_IF_SERIAL_H_

typedef enum {
    SERIAL_PROTOCOL_T_NONE          = 0,
    SERIAL_PROTOCOL_T_HDLC          = 1,
    SERIAL_PROTOCOL_T_CISCO_HDLC    = 2,
    SERIAL_PROTOCOL_T_FRAME_RELAY   = 3,
    SERIAL_PROTOCOL_T_PPP           = 4,
    __SERIAL_PROTOCOL_T_MAX__
} serial_protocol_t;

#endif /* _VOLTOS_IF_SERIAL_H_ */