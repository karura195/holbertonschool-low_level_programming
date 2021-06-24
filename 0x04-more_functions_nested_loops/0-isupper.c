#include "holberton.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to analyze
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
