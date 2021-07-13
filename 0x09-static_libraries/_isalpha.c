#include <stdio.h>

/**
 * _isalpha - Returns 1 if the variable is a letter
 * @c: variable to analize
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
