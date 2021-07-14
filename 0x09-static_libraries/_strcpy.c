#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy of src
 * @src: string to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}
return (dest);
}
