#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int a)
{

	if (a > '0')
	{
		_putchar(a);
	}
	else if (a < '0')
	{
		_putchar(a * -1);
	}
	return (0);
}
