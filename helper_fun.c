#include "main.h"
/**
 * print_digit - prints a digit
 * @list: list of arguments
 * Return: Number
 */
int print_digit(va_list list)
{
	int arg = va_arg(list, int);
	int i;

	i = sign(arg);
	return (i);
}
/**
 * sign - adds plus or minus sign
 * @arg: list of numbers retrieved by va_arg
 * Return: Number
 */
int sign(int arg)
{
	int i;
	unsigned int number;

	i = 0;
	number = arg;

	if (arg < 0)
	{
		i += _putchar('-');
		number = -number;
	}
	if (number == 0)
	{
		i += _putchar('0');
		return (i);
	}
	if (number / 10)
		i += sign(number / 10);
	i += _putchar(number % 10 + '0');
	return (i);
}
