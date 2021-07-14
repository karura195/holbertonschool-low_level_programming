#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: array
 */

char *_strdup(char *str)
{
	char *array;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}
	i++;

	array = malloc(i * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			*(array + j) = *(str + j);
		}
	}
	return (array);
}
