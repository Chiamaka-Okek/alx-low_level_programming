#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: password
 *
 */
int main(void)
{
	char a;
	int  b;

	srand(time(0));

	while (b <= 2645)
	{
		a = rand() % 128;
		b += a;
		_putchar(a);
	}
	_putchar(2772 - b);
	return (0);
}
