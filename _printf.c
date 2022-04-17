#include"main.h"
#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>

/**
 * _printf-prints everything
 * @format: the character string that is inserted
 * Return: number of characters printed
 * except the null byte
 */

int _printf(const char *format, ...)
{
	int element = 0, i = 0;
	va_list arg_list;
	int (*p)(va_list);

	va_start(arg_list, format);

	if (format == NULL)
		return (1);
	if (format != NULL)
	{
		for (i = 0; format[element] != '\0'; i++, element++)
		{
			if (format[element] != '%')
				_putchar(format[element]);
			else if (format[element] == '%' && format[element + 1] == '\0')
				return (1);
			else if (format[element] == '%' && format[element + 1] != '\0')
			{
				p = get_func(format[element + 1]);
				if (p == NULL)
					_putchar(format[element]);
				else
				{
					i = (i + p(arg_list)) - 1;
					element++;
				}
			}
		}
	}
	va_end(arg_list);
	return (i);
}
