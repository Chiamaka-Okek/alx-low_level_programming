#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase alphabets
 *
 * @c: input character
 *
 * Return: 1 if c is uppercase else it return 0 if it fails
 */
int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c != a)
			return (0);
		else
			return (1);
	}
	return (0);
}
