#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: an integer to be passed as argument
 * Return: return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 1;
	unsigned int current;
	unsigned int sum;

	va_start(num, n);
	current = va_arg(num, const unsigned int);
	sum = current;

	if (n == 0)
		return (0);
	while (i < n)
	{
		current = va_arg(num, const unsigned int);
		sum += current;
		i++;
	}
	va_end(num);
	return (sum);
}
