#include <stdio.h>
#include<stdlib.h>

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
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		while (*(s1 + i) != '\0')
		{
			i++;
		}
	}
	str = malloc((i + n) * sizeof(char));
	if ((str == NULL) || (s1 == NULL && s2 == NULL))
	{
		return (NULL);
	}
	for (j = 0 ; j < i; j++)
	{
		*(str + j) = *(s1 + j);
	}
	if (s2 == NULL)
	{
		*(str + j) = '\0';
		return (str);
	}
	else
	{
		for (k = 0 ; (*(s2 + k) != '\0') && (k < n) ; k++)
		{
			*(str + (i + k)) = *(s2 + k);
		}
	}
	*(str + (i + k)) = '\0';
	return (str);
}
