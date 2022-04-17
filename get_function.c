#include "main.h"
#include <stdio.h>
/**
 * get_func - to select the function to be used
 * @s: to find a specific character
 * Return: NULL
 */
int (*get_func(char s))(va_list a)
{
	int j;
	all_t prn[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_modulo},
		{"d", print_digit},
		{"i", print_digit},
		{NULL, NULL}
	};

	for (j = 0; prn[j].all[j] != '\0'; j++)
	{
		if (prn[j].all[0] == s)
			return (prn[j].f);
	}
	return (NULL);
}
