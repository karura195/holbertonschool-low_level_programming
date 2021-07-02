#include "holberton.h"

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
	int j = 0;
	int a;
	int b = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		j++;
	}

	for (a = i; a < (i + n); a++)
	{
		*(dest + a) = *(src + b);
		b++;
	}
return (dest);
}
