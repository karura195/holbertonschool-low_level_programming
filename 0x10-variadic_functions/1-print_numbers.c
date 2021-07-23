#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0 || separator == NULL)
	{
		return;
	}
	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
