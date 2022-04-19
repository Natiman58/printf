#include"main.h"
#include <string.h>
#include <unistd.h>
/**
 * print_bin - prints binary numbers
 * @list: list of arguments
 * Return: 0
 */
int print_bin(va_list list)
{
	unsigned int n;
	unsigned int a[1024];
	int size = 0, i = 0;
	char p;

	n = va_arg(list, unsigned int);

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (size);
}
