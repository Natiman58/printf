#include"main.h"
/**
 * set_decimal - prints a signed decimal
 * @va_list: list of arguments passed
 * Return: length of integers
 */
int set_decimal(va_list list)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(list, int);
	div = 1;
	len = 0;
	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}
	for (; num / div > 9;)
	{
		div *= 10;
	}
	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
	return (len);
}
