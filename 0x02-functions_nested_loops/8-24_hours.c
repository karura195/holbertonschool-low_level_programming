#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	for (int i = 48; i < 51; i++)
	{
		for (int j = 48; j < 58; j++)
		{
			for (int a = 48; a < 54; a++)
			{
				for (int b = 0; b < 58; b++)
				{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(a);
				_putchar(b);
				_putchar('\n');
				}
			}
			if (i == 50 && j == 51)
			{
			break;
			}
		}
	}
}
