#include "main.h"

/**
 * _strncat - Function to concatenate string to the nth byte
 * @dest: The starting string
 * @src: The appending string
 * @n: number to be added
 * Return: Always return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;
	int z;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		if (b <= n)
		{
			dest[a] = src[b];
			b++;
			a++;
		}
		dest[a] = '\0';
		return (dest);
	}

}
