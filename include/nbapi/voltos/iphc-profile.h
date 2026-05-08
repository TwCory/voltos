#ifndef _NBAPI_VOLTOS_IPHC_PROFILE_H_
#define _NBAPI_VOLTOS_IPHC_PROFILE_H_

#define IPHC_PROFILE_NAME_SIZE          	32

typedef unsigned int                    	__voltos_iphc_profile_id_t;

enum {
    IPHC_PROFILE_TYPE_T_IETF                	= 1,
#define IPHC_PROFILE_TYPE_IETF              	IPHC_PROFILE_TYPE_T_IETF
    IPHC_PROFILE_TYPE_T_VAN_JACOBSON        	= 2,
#define IPHC_PROFILE_TYPE_VAN_JACOBSON      	IPHC_PROFILE_TYPE_T_VAN_JACOBSON
    __IPHC_PROFILE_TYPE_T_MAX__
};

#define IPHC_PROFILE_TYPE_MAX           	(__IPHC_PROFILE_TYPE_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IPHC_PROFILE_H_ */
