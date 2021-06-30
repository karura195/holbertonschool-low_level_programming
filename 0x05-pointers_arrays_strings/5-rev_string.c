#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;
	char *x = s;


	while (*(s + i) != '\0')
	{
		i++;
	}

	while (a < i)
	{
		i -= 1;
		c = s[i];
		s[i] = s[a];
		s[a] = c;
		a++;
	}
}
