#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to modify
 * Return: str
 */

char *string_toupper(char *str)
{
	int i, j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		if (*(str + j) > 96 && *(str + j) < 123)
		{
			*(str + j) = *(str + j) - 32;
		}
	}
return (str);
}
