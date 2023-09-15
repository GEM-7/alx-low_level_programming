#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * followed by a new line
 */
void print_numbers(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
		_putchar(z + '0');
	}
	_putchar('\n');
}
