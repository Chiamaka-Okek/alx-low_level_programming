#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 - 14 followed by a newline
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0, j;

	for (; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
