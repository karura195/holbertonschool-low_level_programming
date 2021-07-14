#include <stdlib.h>
/**
 * str_lenght  - gives the lenght of a string
 * @str: string
 * Return: lenght
 */

int str_lenght(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		a++;
	}
	return (a);
}


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
	int i, j, k, l;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		i = str_lenght(s1);
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		j = str_lenght(s2);
	}
	array = malloc((i + j + 1) * sizeof(char));
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
