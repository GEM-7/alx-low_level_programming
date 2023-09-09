#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char A[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(A[i]);
	}

	putchar('\n');

	return (0);
}
