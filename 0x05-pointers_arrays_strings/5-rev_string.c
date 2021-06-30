#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;
	char *x = s;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= (i - 1) / 2; j--)
	{
		temp = *(s + j);
		*(s + j) = *x;
		*x = temp;
		x++;
	}
}
