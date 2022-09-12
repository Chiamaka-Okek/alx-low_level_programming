#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16;
	char lowercase;

	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
