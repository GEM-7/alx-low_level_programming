#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times to print the times table
 */
void print_times_table(int n)
{
	int c;
	int r;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (c = 0; c <= n; c++)
	{
		for (r = 0; r <= n; r++)
		{
			int product = c * r;

			if (r == 0)
				printf("%d", product);
			else if (product < 10)
				printf(", %d", product);
                        else if (product < 100)
				printf(", %d", product);
                        else
				printf(", %d", product);
		}
		printf("\n");
	}
}
