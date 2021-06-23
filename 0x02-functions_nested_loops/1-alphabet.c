#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	for(char i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
