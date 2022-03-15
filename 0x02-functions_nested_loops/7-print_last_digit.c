#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * Return: Always return 0 if successful
 * @i: number
 */

int print_last_digit(int i)
{
	i  = i % 10;

	_putchar(i);
	return (i);
}
