#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, LAST = n % 10, DIGIT, EXP = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (LAST < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		LAST = -LAST;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			EXP = EXP * 10;
			num = num / 10;
		}
		num = n;
		while (EXP > 0)
		{
			DIGIT = num / EXP;
			_putchar(DIGIT + '0');
			num = num - (DIGIT * EXP);
			EXP = EXP / 10;
			i++;
		}
	}
	_putchar(LAST + '0');

	return (i);
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, LAST = n % 10, DIGIT;
	int  i = 1;
	int EXP = 1;

	n = n / 10;
	num = n;

	if (LAST < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		LAST = -LAST;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			EXP = EXP * 10;
			num = num / 10;
		}
		num = n;
		while (EXP > 0)
		{
			DIGIT = num / EXP;
			_putchar(DIGIT + '0');
			num = num - (DIGIT * EXP);
			EXP = EXP / 10;
			i++;
		}
	}
	_putchar(LAST + '0');

	return (i);
}
