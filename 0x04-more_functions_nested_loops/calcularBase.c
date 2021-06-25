#include "holberton.h"

/**
 * calcularBase - multiplies 10 n times
 * @n: times to multiply 10
 * Return: rtn
 */

int calcularBase(int n)
{
	int rtn = 1;
	int i;

	for (i = 0; i < n; i++)
	{
		rtn *= 10;
	}
	return (rtn);
}
