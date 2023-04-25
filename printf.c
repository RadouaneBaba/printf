#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _printf - func produces output according to format
 * @format: string to display
 * Return: num of characters
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int size = 0;
	va_list args;
	char *s;
	char c;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				i++;
				size++;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(args, char *);
				if (s == NULL)
					write(1, "(null)", 6);
				write(1, s, _strlen(s));
				i++;
				size += _strlen(s);
			}
			else if (format[i + 1] == '%')
			{
				c = '%';
				write(1, &c, 1);
				size++;
			}
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
