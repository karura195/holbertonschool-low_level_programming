#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, if value is not present
 * in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, m;
	int l = 0;
	int r = (int)size - 1;

	if (!array)
	{
		return (-1);
	}

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = (l + r) / 2;
		if (value == array[m])
		{
			return (m);
		}
		else if (value < array[m])
		{
			r = m - 1;
		}
		else if (value > array[m])
		{
			l = m + 1;
		}
	}
	return (-1);
}
