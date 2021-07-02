#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if s1>s2, -1 if s1<s2, 0 if s1=s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int a;

	while (*(s1 + i) != '\0')
	{
		i++;
	}

	while (*(s2 + j) != '\0')
	{
		j++;
	}

	if (i > j)
	{
		return (1);
	}
	else if (i < j)
	{
		return (-1);
	}
	else
	{
		for (a = 0; a < i; a++)
		{
			if (*(s1 + a) == *(s2 + a))
			{
				return (0);
			}
			else if (*(s1 + a) > *(s2 + a))
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}
}
