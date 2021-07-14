#include <stdio.h>

/**
 * _strncat - appends the src string to the dest string
 * but it will use at most n bytes from src
 * @dest: string to modify
 * @src: string to add
 * @n: number of bytes to add
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (j = 0 ; (*(src + j) != '\0') && (j < n) ; j++)
	{
		*(dest + (i + j)) = *(src + j);
	}

return (dest);
}
