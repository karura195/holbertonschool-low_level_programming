#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line of n steps
 * @n: number of times \ is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				putchar(92);
				putchar('\n');
			}
			else
			{
				putchar('.');
			}
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
