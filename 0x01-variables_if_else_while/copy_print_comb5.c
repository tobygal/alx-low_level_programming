#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	int j, k, m, i, op1, op2;

	j = k = m = i = 48;
	while (i < 58)
	{
		m = 48;
		while (m < 58)
		{
			k = 48;
			while (k < 58)
			{
				j = 48;
				while (j < 58)
				{
					op1 = (i * 10) + m;
					op2 = (k * 10) + j;
					if (op1 < op2)
					{
						putchar(i);
						putchar(m);
						putchar(' ');
						putchar(k);
						putchar(j);
						if (i == 57 && m == 56 && k == 57 && j == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					j++;
				}
				k++;
			}
			m++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
