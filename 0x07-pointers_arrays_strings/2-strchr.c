#include "holberton.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: string
 * @c: character to find
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s != '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
