#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *a = "_putchar";
	for (*a)
	{
		_putchar(*a);
	}
	_putchar("\n");
	return (0);
}
