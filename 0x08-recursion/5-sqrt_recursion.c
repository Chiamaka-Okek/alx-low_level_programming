#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 *
 * @n: input integer
 *
 * Return: natural square root else return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}

/**
 * _sqrt - checks for square root
 *
 * @a: number used to check
 * @b: square root of the number
 *
 * Return: square root
 */
int _sqrt(int a, int b)
{
	if (a > b)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}
	return (_sqrt(a + 1, b));
}
