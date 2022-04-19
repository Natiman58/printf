#include "main.h"
/**
 * print_rot13 - pintf to rot13
 * @arguments_list: arguments variadi
 * Return: amount n prints
 */
int print_rot13(va_list arguments_list)
{
	int i = 0, cop = 0, len = 0;
	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *cpy;
	char *string = va_arg(arguments_list, char *);

	for (i = 0; string[i] != '\0'; i++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy[i] == '\0')
		return ('\0');
	for (i = 0; i <= len; i++)
	{
		cpy[i] = string[i];
	}
	for (i = 0; cpy[i]; i++)
	{
		for (cop = 0; rot[cop]; cop++)
		{
			if (cpy[i] == rot[cop])
			{
				cpy[i] = num[cop];
				break;
			}
		}
	}
	i = 0;
	while (cpy[i] != '\0')
	{
		_putchar(cpy[i]);
		i++;
	}
	free(cpy);
	return (len);
}
