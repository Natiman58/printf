#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct format - a type defined structure
 * @opt: pointer to char type
 * @call_fun: pointer to call the function
 */


typedef struct format
{
	char *opt;
	int (*call_fun)();
} format_t;

int _printf(const char *format, ...);
int parse_format(const char *format, format_t get_opt[], va_list valist);
int set_string(va_list list);
int set_char(va_list list);
int _putchar(char c);
int set_decimal(va_list list);
int print_percent(__attribute__((unused))va_list list);
int length_of_integer(int n);
int get_length(char *str __attribute__((__unused__)), va_list list);

#endif
