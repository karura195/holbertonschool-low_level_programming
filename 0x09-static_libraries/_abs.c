#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: integer
 * Return: n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (0);
	}
}
