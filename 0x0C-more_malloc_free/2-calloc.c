#include <stdio.h>
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory
 * @nmemb: size of array
 * @size: size of type
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		*(ar + i) = 0;
	}
	return (ar);
}
