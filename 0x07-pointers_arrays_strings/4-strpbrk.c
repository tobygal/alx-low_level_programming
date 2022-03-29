#include "main.h"

/**
 * _strpbrk - string break
 * @s: char pointer
 * @accept: char pointer
 * Return: return address
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
