#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_string - prints a string
 * @list: list of arguments
 * Return: total number of characters
 */
int set_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 * set_char - prints a character
 * @list: list of arguments
 * Return: void
 */
int set_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
