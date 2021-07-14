#include <stdlib.h>

/**
 * str_concat - The returned pointer should point to
 * a newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * @s1: first string
 * @s2: second string, goes after s1
 * Return: array
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0;
	int j = 0;
	int k, l;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	j++;

	array = malloc((i + j) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < i; k++)
		{
			*(array + k) = *(s1 + k);
		}
		for (l = 0; l < j; l++)
		{
			*(array + k + l) = *(s2 + l);
		}
	}
	return (array);
}
