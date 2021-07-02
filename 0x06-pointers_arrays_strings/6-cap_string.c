#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		if ((*(str + j) == ' ' || *(str + j) == '\t' || *(str + j) == '\n'
		|| *(str + j) == ',' || *(str + j) == ';' || *(str + j) == '.'
		|| *(str + j) == '!' || *(str + j) == '?' || *(str + j) == '"'
		|| *(str + j) == '(' || *(str + j) == ')' || *(str + j) == '{'
		|| *(str + j) == '}') && (*(str + j + 1) > 96 && *(str + j + 1) < 123))
		{
			*(str + j + 1) = *(str + j + 1) - 32;
		}
	}
return (str);
}
