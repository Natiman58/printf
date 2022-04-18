#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct all - structure function
 * @all: character pointer
 * @f: function pointer
 */
typedef struct all
{
	char *all;
	int (*f)(va_list x);
} all_t;



int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char s))(va_list a);
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_modulo(va_list arg_list);
int print_digit(va_list arg_list);
int sign(int arg);
#endif
