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
	va_list args;
	char *s;
	char c;

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
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(args, char);
				write(1, s, _strlen(s));
				i++;
			}
			else if (format[i + 1] == '%')
			{
				c = '%';
				write(1, &c, 1);
			}
		}
		else
		{
			write(1, &format[i], 1);
		}

		i++;
	}

	va_end(args);
	return (i);
}
