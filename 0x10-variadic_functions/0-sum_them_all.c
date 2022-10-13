#include <stdio.h>
#include <stdarg.h>

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
	else
	{
		for (i = 0; i < n; i++)
		{
			int value = va_args(args, int);
			sum += value;
		}
	}
	va_end(args);
	return (sum);
}
