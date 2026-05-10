#ifndef _CWMP_SERVICE_H_
#define _CWMP_SERVICE_H_

#include <voltos/list.h>

struct cwmp_scheduled_inform {

};

struct cwmp_download {

};

struct cwmp_upload {

};

struct cwmp_notification {

};

struct cwmp_device_id {

};

struct cwmp {
	struct list_head cwmp_events;
	struct list_head cwmp_notifications;
};

void cwmp_init(void);

#endif /* _CWMP_SERVICE_H_ */
