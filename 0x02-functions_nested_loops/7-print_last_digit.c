#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number to analyze
 * Return: m
 */

int print_last_digit(int n)
{
	int m;

	if (n > 0)
	{
		m = n % 10;
		return (m);
	}
	else if (n < 0)
	{
		m = (n % 10) * -1;
		return (m);
	}
	else
	{
		return (0);
	}
}
