#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: parameter to be used
 * @b: parameter to be used
 * @n: parameter to be used
 * Return: Always s (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
