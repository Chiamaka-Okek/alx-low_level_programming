#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 *
 * @n: input integer
 * Returns: nothing
 */
void print_to_98(int n)
{
	int i = 98;

	if (n == i)
		printf("%d", i);
	else if (n == 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n > i)
	{
		for (; n >= i; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
