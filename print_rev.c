#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @arguments_list: Variable argument list.
 * Return: String
 */
int print_rev(va_list list)
{
	unsigned int i = 0, a = 0;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	for (i = 0; a > 0; i++)
	{
		_putchar(str[a - 1]);
		a--;
	}
	return (i);
}
