#include <stdio.h>
#include<stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to analyze
 * Return: i, length of s
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - the returned pointer shall point to a newly
 * allocated space in memory, which contains s1, followed by the
 * first n bytes of s2, and null terminated
 * @s1: first string
 * @s2: second string to add
 * @n: number of bytes of s2
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	str = malloc((_strlen(s1) + n + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1) + n; i++)
	{
		if (s1 == NULL && n != 0)
		{
			*(str + i) = *(s2 + i);
		}
		else if (n == 0 && s1 != NULL)
		{
			*(str + i) = *(s1 + i);
		}
		else if (i < _strlen(s1))
		{
			*(str + i) = *(s1 + i);
		}
		else
		{
			*(str + i) = *(s2 + j);
			j++;
		}
	}
	*(str + i) = '\0';
	return (str);
}
