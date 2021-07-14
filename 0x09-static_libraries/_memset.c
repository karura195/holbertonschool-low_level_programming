#include <stdio.h>

/**
 * _memset - fills the 1st n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: array
 * @b: char that replaces the elements in s
 * @n: number of bytes of s to change
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
return (s);
}
