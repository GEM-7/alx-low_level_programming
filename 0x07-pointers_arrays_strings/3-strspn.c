#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The set of characters to match.
 *
 * Return: The number of bytes in the initial segment of 's' which consist only
 *         of bytes from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int f;
	int i;

	while (*s != '\0')
	{
		f = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
			break;

		c++;
		s++;
	}

	return (c);
}
