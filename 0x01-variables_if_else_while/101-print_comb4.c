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

	k = 48;
	i = 48;
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
					if (k == 56 && i == 55 && j == 57)
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
