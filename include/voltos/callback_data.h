// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/callback_data.h
 *
 */

#ifndef _VOLTOS_CALLBACK_DATA_H
#define _VOLTOS_CALLBACK_DATA_H

#define callback_data_typeof(_set_type, _cb_type)

#define callback_data_init(_set, _lock)

#define callback_data_create(_set, _value)

#define callback_data_delete(_set, _fn)

#define callback_data_swap(_set, _fn, _value)

#define callback_data_ensure(_set, _value)

#define callback_data_state(_set, _fn, _state)

#define callback_data_read(_set, _fn, _cb_value)

#define callback_data_verify(_set, _fn)

#define callback_data_verify_and_read(_set)

#define callback_data_iterate_and_call(_vector, ...)

#define callback_data_call(_set, ...)

#define callback_data_prefetch(_set)

#endif /* _VOLTOS_CALLBACK_DATA_H */
