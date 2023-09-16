#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: parameter to determine size of the square
 */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
