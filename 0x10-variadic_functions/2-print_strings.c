#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator)
		{
			printf("%s", separator);
		}
		if (va_arg(ap, char *) != NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(ap);
}
