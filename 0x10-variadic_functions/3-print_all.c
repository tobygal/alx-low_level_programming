#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_i - prints an integer
 * @list: holds the variable to be printed
 * @sep: a string
 * Return: returns nothing
 */

void print_i(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_c - prints a char value
 * @list: holds the variable to be printed
 * @sep: a string
 * Return: returns nothing
 */

void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_f - prints a float
 * @list: holds the variable to be printed
 * @sep: a string
 * Return: returns nothing
 */

void print_f(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_s - prints a string
 * @list: holds the variable to be printed
 * @sep: a string
 * Return: returns nothing
 */

void print_s(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sep, s);
}

/**
 * print_all - prints all datatypes
 * @format: format ti be used
 * Return: returns nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator;
	type_dt typ[] = {
		{"i", print_i},
		{"c", print_c},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(typ[j]).form)
			{
				typ[j].ptr(args, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
