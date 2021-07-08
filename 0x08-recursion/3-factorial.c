#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to factorize
 * Return: factorial or -1 if invalid number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
