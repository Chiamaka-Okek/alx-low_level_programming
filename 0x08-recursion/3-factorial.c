#include "main.h"

/**
 * factorial - gives the factorial of a given number
 *
 * @n: factorial to be determined
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
