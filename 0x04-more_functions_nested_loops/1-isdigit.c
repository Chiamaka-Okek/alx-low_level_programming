#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks ofr digit 0 through 9
 *
 * @c: input integer
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
