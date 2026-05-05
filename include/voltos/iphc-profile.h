#ifndef _VOLTOS_IPHC_PROFILE_H_
#define _VOLTOS_IPHC_PROFILE_H_

#include <nbapi/voltos/iphc-profile.h>

struct iphc_profile {
    char                            ip_name[IPHC_PROFILE_NAME_SIZE];
    __voltos_iphc_profile_id_t      ip_index;
};

#endif /* _VOLTOS_IPHC_PROFILE_H_ */