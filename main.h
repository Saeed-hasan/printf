#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>


/**
 * struct format - match the conversion specifiers for printf
 * @type: type char pointer of the specifier
 * @f: pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *type;
	int (*f)();
} print_t;

int printf_unsigned(va_list args);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_oct(va_list val);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_bin(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
