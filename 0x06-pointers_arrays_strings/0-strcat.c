#include "main.h"
/**
 * _strcat - function to concatenate two strings
 * @dest: input parameter
 * @src: input parameter
 * Return: void
 */
char *_strcat(char *dest, char *src)

{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
