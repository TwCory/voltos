#ifndef _VOLTOS_DIALER_H_
#define _VOLTOS_DIALER_H_

#include <nbapi/voltos/dialer.h>

struct dialer {
    __voltos_dialer_id_t            dialer_index;
};

struct dialer_list {
    __voltos_dialer_list_id_t       dl_index;
};

#endif /* _VOLTOS_DIALER_H_ */