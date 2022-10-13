#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: pointer to string that separates the strings
 * @n: number of sting to be printed
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);

		if (value == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s", value);
		if (separator == NULL)
		{
			continue;
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
