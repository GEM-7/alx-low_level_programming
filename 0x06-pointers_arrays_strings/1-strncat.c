#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)

{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
