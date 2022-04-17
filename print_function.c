#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * print_char - functions that prints chars
 * @arg_list: list of arguments
 */
int print_char(va_list arg_list)
{
	int str = va_arg(arg_list, int);
	
	_putchar(str);
	return (1);
}
/**
 * print_string-prints strings
 * @arg_list: list of arguments
 */
int print_string(va_list arg_list)
{
	int i;
	char *str = va_arg(arg_list, char *);
	char *strNULL = "(null)";

	if (str == NULL)
		for (i = 0; strNULL[i] != '\0'; i++)
			_putchar(strNULL[i]);
	else
	{
		for (i = 0; str[i] != 0; i++)
			_putchar(str[i]);
	}
	return (i);
}
/**
 * print_remainder-prints the %
 * arg_list: list of arguments
 */
int print_modulo(va_list arg_list)
{
	(void)arg_list;
	_putchar('%');
	return (1);
}
