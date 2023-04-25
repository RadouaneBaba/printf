#include "main.h"

/**
 * _printf - func produces output according to format
 * @format: string to display
 * Return: num of characters
 */

int _printf(const char *format, ...)
{
	int i, a, size = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			a = checker(format[i + 1], args);
			size += a;
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			size++;
		}
		i++;
	}
	va_end(args);
	return (size);
}
