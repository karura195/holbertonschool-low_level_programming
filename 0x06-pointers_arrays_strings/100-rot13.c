#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		if ((*(str + j) > 96 &&  *(str + j) < 110)
		|| (*(str + j) > 64 &&  *(str + j) < 78))
		{
			*(str + j) = *(str + j) + 13;
		}
		else if ((*(str + j) > 109 &&  *(str + j) < 123)
		|| (*(str + j) > 77 &&  *(str + j) < 91))
		{
			*(str + j) = *(str + j) - 13;
		}
	}
return (str);
}
