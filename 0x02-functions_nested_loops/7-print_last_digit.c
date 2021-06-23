#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number to analyze
 * Return: m
 */

int print_last_digit(int n)
{
	int m, a;

	if (n >= 0)
	{
		m = n % 10;
	}
	else if (n < 0)
	{
		m = (n % 10) * -1;
	}
a = '0' + m;
_putchar(a);
return (m);
}
