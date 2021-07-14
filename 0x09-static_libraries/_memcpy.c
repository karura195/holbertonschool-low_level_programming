#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: string to modify
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
