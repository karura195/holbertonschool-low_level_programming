#include "holberton.h"

/**
 * main - prints numbers from 0 to 100, but for multiples of 3 prints Fizz,
 * for multiples of 5 prints Buzz and for multiples of both prints FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i; /* counter */
	int a, b; /* tens and units */

	for (i = 1; i <= 100; i++)
	{
		a = i / 10;
		b = i % 10;

		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i == 100)
			{
				putchar('B');
				putchar('u');
				putchar('z');
				putchar('z');
			}
			else
			{
				putchar('B');
				putchar('u');
				putchar('z');
				putchar('z');
				putchar(' ');
			}
		}
		else if (i < 10)
		{
			putchar('0' + i);
			putchar(' ');
		}
		else
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
