#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
