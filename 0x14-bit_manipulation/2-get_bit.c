#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index.
 * @n: number to check bits in
 * @index: point at which to check bit
 *
 * Return: returns the value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, pos;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	pos = n & divisor;
	if (pos == divisor)
		return (1);
	return (0);
}
