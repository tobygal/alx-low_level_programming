#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always return 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	k = 48;
	j = 48;

	while (i < 58)
	{
		k = 48;
		while (k < 58)
		{
			j = 48;
			while (j < 58)
			{
				if (i != k && i != j && k != j && i < j && j < k)
				{
					putchar(i);
					putchar(k);
					putchar(j);
					if (i == 55 && k == 56 && j == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');

				}
				j++;
			}
			k++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
