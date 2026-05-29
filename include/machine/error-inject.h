#ifndef _MACHINE_ERROR_INJECT_H_
#define _MACHINE_ERROR_INJECT_H_

enum {
    ERROR_INJECT_TYPE_T_NULL,
    ERROR_INJECT_TYPE_T_ERRNO,
    ERROR_INJECT_TYPE_T_ERRNO_NULL,
    ERROR_INJECT_TYPE_T_TRUE,
};

struct error_inject_entry {
    unsigned long   address;
    int             error_type;
};

#endif /* _MACHINE_ERROR_INJECT_H_ */
