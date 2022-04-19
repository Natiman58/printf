# _printf "19th April 2022" "_printf man page"

# Name: _printf - a function that produces output  according to a format that is passed to it

# Synopsis: #include"main.h"

	int _printf(const char *format, ...);


# Description: The _printf function (which derives its name from "print formatted") prints a message on the screen using a "format string" that includes the instructions to mix multiple strings into the final string to display on the screen.


# Options:
The _printf function returns the number of characters written. If it returns a negative value it indicates that an error has occurred.
# FORMAT OF THE FUNCTION

The symbol "%" denotes the beginning of the format mark. Every brand, therefore, begins with the symbol "%" and ends with its type. Each of the names (parameter, flags, width, precision, length, and type) represents a set of possible values that are explained below. Example:

		_printf("The value is %d.", counter);

 The %d mark is replaced by the value of the variable counter and the resulting string is printed.

# TYPES OF FORMATS:

# c
The argument passed for specifier "%c" is of type int. "%c" converts it to a unsigned char and prints a single character.
# s
The argument passed for specifier "%s" is a string in consta char *. "%s" prints the string pointed to by the char *.
# %
The argument passed is not converted, it will only print a percent sign "%". To use this you must write "%%" (\\%\ also works).
# i, d
The argument passed is an int argument, "%i" or "%d" do a signed decimal conversion of an integer.


Examples:
	len = _printf("Let's try to printf a simple sentence.\n");
	output: Let's try to printf a simple sentence.
	
	_printf("Negative:[%d]\n", -762534);
	output: Negative:[-762534]

	len = _printf("Percent:[%%]\n");
	output: Percent:[%]
# Exit values:
The _printf function returns the number of characters written. If it returns a negative valueit indicates that an error has occurred.

# Bugs:
So far we dont have any errors

# Notes
currently _printf doesnt support "+" "-" "#" space, field width, 0 flag character, reverse, Rot13, and binary.

# Authors:
# Natiman58: https://github.com/Natiman58
# Fraoul Massresha: https://github.com/FraoulMas

# This is a project for ALx-Holberton School (19/4/2022)
