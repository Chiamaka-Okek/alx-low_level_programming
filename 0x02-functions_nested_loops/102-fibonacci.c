#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: integers
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;

	for (i = 2; i < 50; i++)
	{
		printf("ld", a);
		if (i < 49)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
