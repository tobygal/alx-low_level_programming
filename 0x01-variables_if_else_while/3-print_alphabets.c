#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
		putchar(c);
	}

	while (d <= 'Z')
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
