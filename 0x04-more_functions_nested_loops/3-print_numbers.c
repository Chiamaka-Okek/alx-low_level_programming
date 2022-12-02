#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 t0 9 followed by a newline
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
