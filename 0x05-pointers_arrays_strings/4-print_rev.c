#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[len] != '\0')
	{
		length++;
	}
	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
