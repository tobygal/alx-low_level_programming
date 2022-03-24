#include "main.h"

/**
 * _strncpy - Function to copy a string
 * @dest: copy destination
 * @src: string to be copied
 * @n: byte to be copied
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
