#include <stdio.h>
#include<stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: size of pointer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
		return (0);
	}
	else
	{
		return (a);
	}
}
