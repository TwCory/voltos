#ifndef _VOLTOS_IPHC_PROFILE_H_
#define _VOLTOS_IPHC_PROFILE_H_

#include <voltos/refcount.h>
#include <nbapi/voltos/iphc-profile.h>

struct iphc_profile {
	__voltos_iphc_profile_idx_t 	index;
	char 				name[IPHC_PROFILE_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* _VOLTOS_IPHC_PROFILE_H_ */
