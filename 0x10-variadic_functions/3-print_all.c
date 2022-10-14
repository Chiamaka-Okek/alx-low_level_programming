#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of variety types of arguments
 *
 * Return:nothing
 */
void print_all(const char * const format, ...)
{
	char *value;
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				value = va_arg(args, char *);
				if (value == NULL)
				{
					printf("(nil)");
					break;
					printf("%s", value);
					break;
				}
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(",");
		i++;
	}
	va_end(args);
	printf("\n");
}
