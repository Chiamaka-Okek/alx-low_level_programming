#include "main.h"

/**
 * puts_half - prints ahlf of a string
 *
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int length = 0;

	while (str[len] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
