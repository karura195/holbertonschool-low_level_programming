#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string to analyze
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
