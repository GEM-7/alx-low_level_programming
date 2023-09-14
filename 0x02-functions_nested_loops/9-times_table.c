#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int r, c, product;

	for (c = 0; c <= 9; c++)
	{
		for (r = 0; r <= 9; r++)
		{
			product = c * r;
			if (r == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
		}
		_putchar('\n');
	}
}
