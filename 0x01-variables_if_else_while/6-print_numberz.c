#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}
