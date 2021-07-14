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
	char *buffer = malloc(size * sizeof(char));
	int i;

	for (i = 0; i < size; i++)
	{
		*(buffer + i) = c;
	}
	return (buffer);
}
