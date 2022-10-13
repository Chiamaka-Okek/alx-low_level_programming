#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: number of parameters passed
 *
 * Return: sum or 0 if n is equal to zero
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);
		
		sum += value;
	}
	va_end(args);
	return (sum);
}
