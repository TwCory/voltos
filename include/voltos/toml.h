// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/toml.h
 *
 */

#ifndef _VOLTOS_TOML_H
#define _VOLTOS_TOML_H

#include <voltos/types.h>

enum toml_value_type {
	TOML_VALUE_TYPE_T_UNSPEC		= 0,
	TOML_VALUE_TYPE_T_STRING		= 1,
	TOML_VALUE_TYPE_T_INT64			= 2,
	TOML_VALUE_TYPE_T_FLOAT64		= 3,
	TOML_VALUE_TYPE_T_BOOLEAN		= 4,
	TOML_VALUE_TYPE_T_DATE			= 5,
	TOML_VALUE_TYPE_T_TIME			= 6,
	TOML_VALUE_TYPE_T_DATETIME		= 7,
	TOML_VALUE_TYPE_T_DATETIMETZ		= 8,
	TOML_VALUE_TYPE_T_ARRAY			= 9,
	TOML_VALUE_TYPE_T_TABLE			= 10,
	__TOML_VALUE_TYPE_T_MAX__
};

enum {
	TOML_NODE_FLAG_F_INLINE			= (1 << 0),
#define TOML_NODE_FLAG_INLINE			TOML_NODE_FLAG_F_INLINE
	TOML_NODE_FLAG_F_HEADER			= (1 << 1),
#define TOML_NODE_FLAG_HEADER			TOML_NODE_FLAG_F_HEADER
	TOML_NODE_FLAG_F_EXPLICIT		= (1 << 2),
#define TOML_NODE_FLAG_EXPLICIT			TOML_NODE_FLAG_F_EXPLICIT
};

struct toml_node {
	enum toml_value_type			type;
	u32					flags;
	int					line;
	int					colour;
	const char				*source;

	union {
		const char			*string_ptr;
		struct {
			const char		*ptr;
			int			length;
		} string;
		i64				int64;
		f64				float64;
		bool				boolean;
		struct {
			i16			year;
			i16			month;
			i16			day;
			i16			hour;
			i16			minute;
			i16			second;
			i32			usecond;
			i16			zone_offset;
		} time;
		struct {
			i32			size;
			struct toml_node	*node;
		} array;
		struct {
			i32			size;
			const char		**key;
			int			*length;
			struct toml_node	*value;
		} table;
	};
};

#define TOML_ERROR_MAX				(200)

struct toml_result {
	bool					success;
	struct toml_node			top_level_table;
	char					error[TOML_ERROR_MAX];
	void					*internal;
};

extern struct toml_result toml_parse(const char *source, int length);

extern struct toml_result toml_parse_named(const char *source, int length,
					   const char *name);

extern struct toml_result toml_parse_file(struct file *file);

extern struct toml_result toml_parse_file_named(struct file *file, const char *name);

extern struct toml_result toml_parse_file_path(const char *file_path);

extern void toml_free(struct toml_result result);

extern struct toml_node toml_find(struct toml_node table, const char *key);

extern struct toml_node toml_seek(struct toml_node table,
				  const char *mp_key);

static inline struct toml_node toml_table_find(struct toml_node table,
					       const char *key)
{
	return toml_find(table, key);
}

extern struct toml_result toml_merge(const struct toml_result *r1, 
				     const struct toml_result *r2);

extern bool toml_equal(const struct toml_result *r1, 
		       const struct toml_result *r2);

struct toml_option {
	bool check_utf8;
	void *(*realloc)(void *ptr, size_t size);
	void (*free)(void *ptr);
};

extern struct toml_option toml_option_default(void);

extern void toml_option_set(struct toml_option *option);

#endif /* _VOLTOS_TOML_H */
