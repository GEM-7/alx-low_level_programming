#include "main.h"
#include <stdio.h>
/**
 * _abs -  computes the absolute value of an integer.
 * @a: value to be checked
 * Return: -a when less than 0
 * otherwise a
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
