#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, unsigned int);
		if (separator == NULL)
		{
			return;
		}
		else
		{
			printf("%d", value);
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
