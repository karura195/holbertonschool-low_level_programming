#include <stdio.h>

/**
 * _strcat - appends the src string to the dest string
 * @dest: string to modify
 * @src: string to add
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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

	for (a = i; a < (i + j); a++)
	{
		*(dest + a) = *(src + b);
		b++;
	}
return (dest);
}
