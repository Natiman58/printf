#include<unistd.h>
/**
 * _putchar - writes the character c to the standard output
 * @c: the character to be printed
 * Return: 1 on success
 * if not -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
