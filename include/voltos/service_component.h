#ifndef _VOLTOS_SERVICE_COMPONENT_H_
#define _VOLTOS_SERVICE_COMPONENT_H_

#define SERVICE_NAME_SIZE		32

struct service_context {
	char svc_name[SERVICE_NAME_SIZE];
	void *svc_callback_user_ctx;
};

#endif /* _VOLTOS_SERVICE_COMPONENT_H_ */
