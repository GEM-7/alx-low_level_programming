#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @a: is the value to be used in the function
 * Return: return b (Success)
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}
