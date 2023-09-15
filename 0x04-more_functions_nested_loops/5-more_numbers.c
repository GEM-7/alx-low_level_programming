#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int x;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
			{
				_putchar('0' + z / 10);
			}
			_putchar('0' + z % 10);
		}
		_putchar('\n');
	}
}
