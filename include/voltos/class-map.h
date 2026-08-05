// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/class-map.h
 *
 */

#ifndef _VOLTOS_CLASS_MAP_H
#define _VOLTOS_CLASS_MAP_H

#include <nbapi/voltos/class-map.h>

struct class_map {
	const char 		name[CLASS_MAP_NAME_SIZE];
	__class_map_key_t 	index;
	enum class_map_type 	type;
};

struct control_class_map {

};

struct inspect_class_map {

};

struct nat_class_map {

};

struct port_filter_class_map {

};

struct traffic_class_map {

};

struct url_filter_class_map {

};

#endif /* _VOLTOS_CLASS_MAP_H */
