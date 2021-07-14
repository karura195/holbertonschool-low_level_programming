#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: string to modify
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int a, b;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		j++;
	}

	if (n <= j)
	{
		for (a = 0; a < n; a++)
		{
			*(dest + a) = *(src + a);
		}
	}
	else
	{
		for (a = 0; a < j; a++)
		{
			*(dest + a) = *(src + a);
		}
		for (b = a; b < n; b++)
		{
			*(dest + b) = '\0';
		}
	}
return (dest);
}
