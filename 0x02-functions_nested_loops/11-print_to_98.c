#include "main.h"

/**
 * print_to_98 - Print numbers to 98 both left and right
 *
 * @n: starting value
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		_putchar(n);
		n--;
		if (n < 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
	}
	else if (n <= 98)
	{
		_putchar(n);
		n++;
		if (n > 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
	}
}
