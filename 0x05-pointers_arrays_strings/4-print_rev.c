#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string
 * followed by a new line, to stdout
 * @str: parameter to be used
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
