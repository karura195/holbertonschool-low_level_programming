#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: size of array
 * @c: char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(array + i) = c;
		}
	}
	free(array);
	return (array);
}
