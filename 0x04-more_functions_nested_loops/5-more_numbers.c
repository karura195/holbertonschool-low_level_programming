#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j % 10;
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar('0' + k);
		}
	_putchar('\n');
	}
}
