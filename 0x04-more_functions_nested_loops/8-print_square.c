#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square followed bya newline
 *
 * @size: input integer representing the square size
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (size > 0)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
