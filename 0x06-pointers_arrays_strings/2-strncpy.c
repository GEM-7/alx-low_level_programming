#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cyp = 0;

	while (cyp < n && src[cyp] != '\0')
	{
		dest[cyp] = src[cyp];
		cyp++;
	}

	while (cyp < n)
	{
		dest[cyp] = '\0';
		cyp++;
	}
	return (dest);
}
