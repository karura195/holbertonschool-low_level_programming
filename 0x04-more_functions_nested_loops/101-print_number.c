#include "holberton.h"

/**
 * print_number - prints any numbre without using printf
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
unsigned int num;

	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
