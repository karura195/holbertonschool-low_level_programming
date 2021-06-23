#include "holberton.h"

/**
 * _islower - prints 1 in case of a lowercase
 * prints 0 in case of an uppercase
 * @c: variable to analize
 * Return: 1 for lowercase, 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
