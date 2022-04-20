C - printf

* Project Requirements :

        All files will be compiled on Ubuntu 14.04 LTS
  
        Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
  
        Code must follow the Betty style
  
        Global variables are not allowed
  
* Authorized functions and macros :
    
        write (man 2 write)
    
        malloc (man 3 malloc)
    
        free (man 3 free)
    
        va_start (man 3 va_start)
    
        va_end (man 3 va_end)
    
        va_copy (man 3 va_copy)
    
        va_arg (man 3 va_arg)

* Mandatory Tasks :
  
        Write function that produces output with conversion specifiers c, s, and %.
  
        Handle conversion specifiers d, i.
  
        Create a man page for your function.
* Advanced Tasks :
  
        Handle conversion specifier b.
  
        Handle conversion specifiers u, o, x, X.
  
        Use a local buffer of 1024 chars in order to call write as little as possible.
  
        Handle conversion specifier S.
  
        Handle conversion specifier p.
  
        Handle flag characters +, space, and # for non-custom conversion specifiers.
  
        Handle length modifiers l and h for non-custom conversion specifiers.
  
        Handle the field width for non-custom conversion specifiers.
  
        Handle the precision for non-custom conversion specifiers.
  
        Handle the 0 flag character for non-custom conversion specifiers.
  
        Handle the custom conversion specifier r that prints the reversed string.
  
        Handle the custom conversion specifier R that prints the rot13'ed string.
  
        All above options should work well together.

* File Descriptions :
  
        _printf.c: - contains the _printf function, which uses the prototype int _printf(const char *format, ...);.
  
        The format string is composed of zero or more directives. See man 3 printf for more detail. 
  
         _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the  standard output stream.

        _putchar.c: - contains the function _putchar, which writes a character to stdout.

        main.h: - contains all function prototypes used for _printf.

        man_3_printf: - manual page for the custom _printf function.

        parse_fun.c: - a function that recieves the main string with all the parameters and prints a formated string.

        print_bin.c:- a function that takes and intiger and pritns the binary form.

        print_decimal.c:- a function that prints a decimal.

        print_percent.c:- prints the percent sign.

        print_rev.c:- prints a string in a reverse pattern.

        print_rot13.c:- prints a string in ROT13 cypher form.

        print_string.c:- prints a string.

        print_unsigned.c:- contains the functions to prints unsigned octal, hexa and HEXA of an argument passed.

        test_files:- contains test files to compile and test the functions.
