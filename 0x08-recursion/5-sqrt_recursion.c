#include "holberton.h"

/**
 * sqrt_find - Iterator
 * @n: number
 * @i: iterator
 * Return: square
 */

int sqrt_find(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_find(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_find(n, 1));
}
