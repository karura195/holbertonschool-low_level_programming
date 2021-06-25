#include "holberton.h"

/**
 * print_number - prints any numbre without using printf
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int b, c, i;
	int base;
	int digit;
	unsigned int num_copy;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	num_copy = num;

	b = 1;

	while (num / 10 >= 1)/*contador de digitos = b */
	{
		num = num / 10;
		b++;
	}

	for (i = b; i > 0; i--)
	{
		base = calcularBase(i - 1);
		c = (num_copy / base);
		digit = (num_copy / base) % 10;
		_putchar('0' + digit);
	}
