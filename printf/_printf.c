#include "holberton.h"

/**
 * _printf - prints a string with all given arguments
 * @format: a string of characters with some calls to other arguments
 *
 * Return: the length of the printed string
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, len = 0;
	char *sf;

	va_start(ap, format);

	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					sf = va_arg(ap, char *);
					write(1, &sf, 1);
					len++;
					break;
				case 's':
					sf = va_arg(ap, char *);
					write(1, sf, _strlen(sf));
					len += _strlen(sf);
					break;
				case '%':
					sf = "%";
					write(1, sf, _strlen(sf));
					len++;
				case 'd':
					n = va_arg(ap, int);
					print_number(n);
					len += ndigits(n);
					break;
				case 'i':
					n = va_arg(ap, int);
					print_number(n);
					len += ndigits(n);
					break;
				default:
					break;
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(ap);
	return (len);
}
