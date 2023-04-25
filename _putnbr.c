#include "main.h"

/**
 * _put_nbr - print number
 * @n: the num
 * Return: the num
 */

int _put_nbr(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		_put_nbr(n / 10);
		_putchar(n % 10 + '0');
	}
	if (n < 10)
	{
		_putchar(n % 10 + '0');
	}
	return (n);
}
