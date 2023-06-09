#include "main.h"

/**
 * checker - check for the specifier
 * @c: char to be checked
 * @args: args passed in
 * Return: length of printed values or -1
 */

int checker(char c, va_list args)
{
	char *s;
	char a;
	int b;

	if (c == '%')
	{
		return (write(1, "%", 1));
	}
	else if (c == 'c')
	{
		a = va_arg(args, int);
		return (write(1, &a, 1));
	}
	else if (c == 's')
	{
		s = va_arg(args, char *);
		if (s == NULL)
			return (write(1, "(null)", 6));
		return (write(1, s, _strlen(s)));
	}
	else if (c == 'd' || c == 'i')
	{
		b = va_arg(args, int);
		_put_nbr(b);
		return (_nbrlen(b));
	}
	else
	{
		write(1, "%", 1);
		write(1, &c, 1);
		return (2);

	}
}
