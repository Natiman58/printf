#include "main.h"
/**
 * parse_format - Recieves the main string with all the parameters
 * and prints a formated string
 * @format: a string containing all the desired characters
 * @get_opt: a list of all possible functions
 * @list: list of all the arguments passed to the program
 * Return: total count of characters printed
 */
int parse_format(const char *format, format_t get_opt[], va_list list)
{
	int i, j, count, total_char = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; get_opt[j].opt != NULL; j++)
			{
				if (format [i + 1] == get_opt[j].opt[0])
				{
					count = get_opt[j].call_fun(list);
					if (count == -1)
						return (-1);
					total_char += count;
					break;
				}
			}
			if (format[i] == '\0')
				break;
			if (get_opt[j].opt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total_char = total_char + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			total_char++;
		}
	}
	return (total_char);
}
