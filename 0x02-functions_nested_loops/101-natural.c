#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: integer
 */
int main(void)
{
	int i, a = 3, b = 5, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % a == 0 || i % b == 0)
		{
			sum = sum + i;
		}
	}
	printf("\n%d", sum);
	printf("\n");
	return (0);
}
