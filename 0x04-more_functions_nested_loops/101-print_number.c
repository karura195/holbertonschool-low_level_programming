#include "holberton.h"

/**
 * print_number - prints any numbre without using printf
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}
