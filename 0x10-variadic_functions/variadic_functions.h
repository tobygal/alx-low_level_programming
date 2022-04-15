#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format - holds datatype formatting
 * @form: member of char
 * @ptr: function pointer member
 */

typedef struct format
{
	char *form;
	void (*ptr)(va_list, char *);
} type_dt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_i(va_list list, char *sep);
void print_c(va_list list, char *sep);
void print_f(va_list list, char *sep);
void print_s(va_list list, char *sep);

#endif
