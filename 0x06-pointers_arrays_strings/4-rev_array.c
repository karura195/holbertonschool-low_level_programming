#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of ints
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int k = 0;

	for (i = n - 1; i > n / 2; i--)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;
		k++;
	}
}
