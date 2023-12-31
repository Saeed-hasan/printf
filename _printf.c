#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	print_t printer[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%i", printf_int},
		{"%d", printf_dec}, {"%b", printf_bin},
		{"%u", printf_unsigned}, {"%o", printf_oct},
		{"%x", printf_hex}, {"%X", printf_HEX},
		{"%p", printf_pointer},
	};

	va_list args;
	int i = 0; /*indexer for the input format*/
	int j; /*indexer for the printer*/
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 10)
		{
			if (printer[j].type[0] == format[i] && printer[j].type[1] == format[i + 1])
			{
				len += printer[j].f(args);
				i = i + 2;
				goto Here;
			}
			j++;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
