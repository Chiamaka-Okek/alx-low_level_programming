#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: integer
 */
int main(void)
{
	long int a = 1;
	long int a = 2;
	long int c, count = 0;
	int i;

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (a % 2 == 0 && a <= 4000000)
		{
			count = count + a;
		}
	}
	printf("%ld ", count);
	printf("\n);
	return (0);
}
