#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always retun 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
