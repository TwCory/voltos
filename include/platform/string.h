#ifndef _PLATFORM_STRING_H_
#define _PLATFORM_STRING_H_

enum {
    STRING_ENCODE_METHOD_T_INVALID      = 0,
#define STRING_ENCODE_METHOD_INVALID    STRING_ENCODE_METHOD_T_INVALID
    STRING_ENCODE_METHOD_T_UTF_8        = 1,
#define STRING_ENCODE_METHOD_UTF_8      STRING_ENCODE_METHOD_T_UTF_8
    STRING_ENCODE_METHOD_T_UTF_16       = 2,
#define STRING_ENCODE_METHOD_UTF_16     STRING_ENCODE_METHOD_T_UTF_16
    STRING_ENCODE_METHOD_T_UTF_32       = 3,
#define STRING_ENCODE_METHOD_UTF_32     STRING_ENCODE_METHOD_T_UTF_32
    __STRING_ENCODE_METHOD_T_MAX__
};

typedef signed char                     __utf8_string;
typedef signed short                    __utf16_string;
typedef signed int                      __utf32_string;

/* Default Method is UTF-8 */
typedef __utf8_string                   __string;

#endif /* _PLATFORM_STRING_H_ */