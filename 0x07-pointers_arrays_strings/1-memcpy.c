#include "main.h"

/**
 * memcyp - function that copies memory area
 * @dest: parameter to be used
 * @src: parameter to be used
 * @n: parameter to be used
 * Return: Always dest (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *copy_dest = dest;
	char *copy_src = src;

	while (n > 0)
	{
		*copy_dest = *copy_src;
		copy_dest++;
		copy_src++;
		n--;
	}

	return (dest);
}
