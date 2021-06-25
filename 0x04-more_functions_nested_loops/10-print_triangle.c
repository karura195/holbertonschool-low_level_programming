#include "holberton.h"

/**
 * print_triangle - prints a triangle of the indicated size
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - 1 - i)
				{
					putchar('#');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
