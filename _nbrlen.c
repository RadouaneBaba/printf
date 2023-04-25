#include "main.h"


/**
 * _nbrlen - number of digits or length
 * @n: the num
 * Return: length
 */


int _nbrlen(int n)
{
	int i = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
