#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(a[i]);
	}

	putchar('\n');

	return (0);
}
