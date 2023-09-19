#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: parameter to be used
 */
void rev_string(char *s)
{
	char vers = s[0];
	int counter = 0;
	int i = 0;

	while (s[counter] != '\0')
	{
		counter--;
		vers = s[i];
		s[i] = s[counter];
		s[counter] = vers;
	}
}
