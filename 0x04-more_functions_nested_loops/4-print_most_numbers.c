#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * followed by a new line.
 * does not print 2 and 4
 */
void print_most_numbers(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
		if ((z == 2) || (z == 4))
		{
			continue;
		}
		_putchar(z + '0');
	}
	_putchar('\n');
}
