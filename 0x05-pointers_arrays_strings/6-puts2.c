#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j, k;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < ((i + 1) / 2); j++)
	{
		k = 2 * j;
		_putchar(*(str + k));
	}
	_putchar('\n');
}
