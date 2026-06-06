#ifndef VOLTOS_IPHC_PROFILE_H
#define VOLTOS_IPHC_PROFILE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/iphc-profile.h>

struct iphc_profile {
	__voltos_iphc_profile_idx_t 	index;
	char 				name[IPHC_PROFILE_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_IPHC_PROFILE_H */
