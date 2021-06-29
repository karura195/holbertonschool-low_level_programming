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
	int length;

	while (*(s + i) != '\0')
	{
		i++;
	}

	length = i - 1;

	for (j = length, i = 0; i <= length / 2; i++, j++)
	{
		char temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
