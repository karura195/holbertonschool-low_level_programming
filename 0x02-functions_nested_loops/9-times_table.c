#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
/* counters */
int a, b;
/* product */
int c;
/* tens and units */
int x, y;

for (a = 0; a < 10; a++)
{
	for (b = 0; b < 10; b++)
	{
		c = a * b;
		x = c / 10;
		y = c % 10;
		if (b == 0)
		{
			_putchar('0');
		}
		else if (c < 10)
		{
			_putchar(' ');
			_putchar(c + '0');
		}
		else
		{
			_putchar(x + '0');
			_putchar(y + '0');
		}
		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
}
