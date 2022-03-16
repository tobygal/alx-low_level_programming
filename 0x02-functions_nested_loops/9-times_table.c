#include "main.h"

/**
 * times_table - display 9 x table
 *
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			c = a * b;

			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (b == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			b++;
		}
		putchar('\n');
		a++;
	}
}