#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: input integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			format(k);
		}
		_putchar('\n');
	}
}

/**
 * format - prints the required format
 *
 * @k: input integer
 *
 * Return: nothing
 */
void format(int k)
{
	if (i <= n && j < n)
	{
		if (k < 10)
		{
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		else if (k >= 10 && k < 100)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar((k / 100) + '0');
			_putchar(((k / 100) / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
