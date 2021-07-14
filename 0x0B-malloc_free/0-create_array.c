#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: size of array
 * @c: char
 * Return: buffer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(size * sizeof(char));

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(buffer + i) = c;
		}
	}
	free(buffer);
	return (buffer);
}
