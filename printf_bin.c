#include "main.h"

/**
 * printf_bin - prints a binary number
 * @num: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_bin(va_list val)
{
	int binary[32] = {0};
	unsigned int num = va_arg(val, unsigned int);
	int i = 0;
	int printed = 0;

	if (num == 0)
	{
		_putchar('0');
		printed++;
		return (printed);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		printed++;
	}

	return (printed);
}
