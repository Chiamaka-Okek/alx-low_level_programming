#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase followed by newline
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; && alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
