#include "main.h"
/**
 * print_octal - converts unsigned int format into unsigned octal
 * @list: list of arguments
 * Return: number of list
 */
int print_octal(va_list list)
{
	unsigned int i, n;
	int j;
	int octalNum[1024];

	n = va_arg(list, int);
	i = 0;

	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(octalNum[j] + '0');
	return (i - 2);
}

/**
 * print_hexa - converts unsigned int into unsigned hexadecimal
 * @list: list of arguments
 * Return: number of lists
 */
int print_hex(va_list list)
{
	unsigned int n;
	unsigned int hexNum[1024];
	int i = 0, j = 0;
	char p;

	n = va_arg(list, unsigned int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++, j++)
	{
		hexNum[j] = n % 16;
		n = n / 16;
		if (hexNum[j] > 10)
			hexNum[i] = hexNum[j] + 39;
		else
			hexNum[i] = hexNum[j];
	}
	for (i = j - 1; i >= 0; i--)
	{
		p = hexNum[i] + '0';
		_putchar(p);
	}
	return (j);
}

/**
 * print_heX - converts unsigned int into uppercse heXadecimal
 * @list: list of arguments passed to the fun
 * Return: j
 */
int print_heX(va_list list)
{
	unsigned int n;
	int heXNum[1024], i = 0, j = 0;
	char p;

	n = va_arg(list, unsigned int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		heXNum[j] = n % 16;
		n = n / 16;
		if (heXNum[i] > 10)
			heXNum[i] = heXNum[j] + 7;
		else
		{
			heXNum[i] = heXNum[j];
		}
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		p = heXNum[i] + '0';
		_putchar(p);
	}
	return (j);
}
