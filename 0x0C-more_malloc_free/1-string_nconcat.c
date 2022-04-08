#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the initial string
 * @s2: the string to be appended
 * @n: the number of byte to be copied
 * Return: pointer to the conc string in a new space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, j, len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	if (n >= strlen(s2))
		len = strlen(s1) + strlen(s2) + 1;
	else
		len = strlen(s1) + n + 1;

	ptr = (char *)malloc(len);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
	{
		if (*(s1 + i) != '\0')
		{
			*(ptr + j) = *(s1 + i);
			i++;
		}
		else if (*(s1 + i) == '\0' && *(s2 + k) != '\0')
		{
			*(ptr + j) = *(s2 + k);
			if (k < n)
				k++;
		}
	}
	ptr[j] = '\0';
	return (ptr);
}



